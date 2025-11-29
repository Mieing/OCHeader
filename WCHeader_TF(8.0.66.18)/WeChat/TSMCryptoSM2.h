@interface TSMCryptoSM2 : NSObject {
    void *_ctx;
}

+ (id)keyPEMConvert:(int)a0 data:(id)a1 error:(id *)a2;

- (id)init;
- (void)dealloc;
- (id)initWithPubkey:(id)a0 error:(id *)a1;
- (id)pubKeyGenerate:(id)a0 error:(id *)a1;
- (id)keyPairGenerate:(id *)a0;
- (id)encrypt:(int)a0 pubkey:(id)a1 plain:(id)a2 error:(id *)a3;
- (id)decrypt:(int)a0 prikey:(id)a1 cipher:(id)a2 error:(id *)a3;
- (id)sign:(int)a0 pubkey:(id)a1 prikey:(id)a2 msg:(id)a3 uid:(id)a4 error:(id *)a5;
- (BOOL)verify:(int)a0 pubkey:(id)a1 msg:(id)a2 uid:(id)a3 sig:(id)a4 error:(id *)a5;
- (id)calcSharedKey:(id)a0 pubkeyA:(id)a1 tempPrikeyA:(id)a2 tempPubkeyA:(id)a3 pubkeyB:(id)a4 tempPubkeyB:(id)a5 idA:(id)a6 idB:(id)a7 sharedKeylen:(unsigned long long)a8 AisInitiator:(int)a9 error:(id *)a10;

@end
