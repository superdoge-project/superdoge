// Copyright (c) 2017 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_BIP38_H
#define BITCOIN_BIP38_H

#include "pubkey.h"
#include "uint256.h"

#include <string>


void DecryptAES(uint256 encryptedIn, uint256 decryptionKey, uint256& output);

void ComputePreFactor(std::string strPassphrase, std::string strSalt, uint256& prefactor);

void ComputePassfactor(std::string ownersalt, uint256 prefactor, uint256& passfactor);

bool ComputePasspoint(uint256 passfactor, CPubKey& passpoint);

void ComputeSeedBPass(CPubKey passpoint, std::string strAddressHash, std::string strOwnerSalt, uint512& seedBPass);

void ComputeFactorB(uint256 seedB, uint256& factorB);

std::string BIP38_Encrypt(std::string strAddress, std::string strPassphrase, uint256 privKey, bool fCompressed);
bool BIP38_Decrypt(std::string strPassphrase, std::string strEncryptedKey, uint256& privKey, bool& fCompressed);

std::string AddressToBip38Hash(std::string address);

#endif // BIP38_H
