// Copyright (c) 2018-2020-2024 The GigAddik Coin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GigAddik_WITNESS_H
#define GigAddik_WITNESS_H


#include <libzerocoin/Accumulator.h>
#include <libzerocoin/Coin.h>
#include "zerocoin.h"
#include "serialize.h"

class CoinWitnessData
{
public:
    std::unique_ptr<libzerocoin::PublicCoin> coin;
    std::unique_ptr<libzerocoin::Accumulator> pAccumulator;
    std::unique_ptr<libzerocoin::AccumulatorWitness> pWitness;
    libzerocoin::CoinDenomination denom;
    int nHeightCheckpoint;
    int nHeightMintAdded;
    int nHeightAccStart;
    int nHeightAccEnd;
    int nMintsAdded;
    uint256 txid;
    bool isV1;

    CoinWitnessData();
    CoinWitnessData(CZerocoinMint& mint);
    void SetHeightMintAdded(int nHeight);
    void SetNull();
    std::string ToString();
};

#endif //GigAddik_WITNESS_H
