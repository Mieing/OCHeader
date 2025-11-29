@class BDTGKeyAttestationResult, BDTGKeyAttestSign;

@interface BDTGKeyAttestationManager : NSObject

@property (nonatomic) BOOL isAttesting;
@property (retain) BDTGKeyAttestationResult *result;
@property (retain) BDTGKeyAttestSign *sign;

+ (id)sharedInstance;

- (id)loadAttestationResult;
- (void)startKeyAttestIfNeeded:(id)a0;
- (void)trackAttestFail:(id)a0 attestKeyID:(id)a1;
- (void)checkIfNeededAttestation:(id)a0 tracker:(id)a1;
- (void)runOnMainThread:(id /* block */)a0;
- (id)errorHandleOptimizeQueue;
- (void)trackAttestationPreSucc:(id)a0;
- (void)generateDCKeyWithResult:(id)a0 tracker:(id)a1;
- (void)attestKey:(id)a0 tracker:(id)a1;
- (void)requestPreloadCert:(id)a0 result:(id)a1 tracker:(id)a2;
- (void)requestVerifyAttestation:(id)a0 clientCert:(id)a1 result:(id)a2 tracker:(id)a3;
- (void)saveAttestResult:(id)a0;
- (void)trackAttestationSucc:(id)a0 tracker:(id)a1;
- (void)trackAttestSignError:(id)a0 path:(id)a1 logID:(id)a2 secTs:(id)a3 hashData:(id)a4;
- (void)trackAttestSignSucc:(id)a0 logID:(id)a1 secTs:(id)a2 sign:(id)a3 duration:(long long)a4 serverTimestamp:(long long)a5 hashData:(id)a6;
- (void)preloadKeyAttestation;
- (void)serverForceRefreshAttestation;
- (void)loginSuccessAttest;
- (void)addHeadersToUseAttestRequest:(id)a0 attestKey:(id)a1 attestKeyTsSign:(id)a2;
- (void)attestSignRefresh:(id)a0 path:(id)a1 logID:(id)a2 serverTime:(long long)a3 interval:(long long)a4;
- (id)localAttestResult;
- (BOOL)attestResultSuccess;
- (void)compensationAttestationResultPubKeyIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)sha256HashFromString:(id)a0;

@end
