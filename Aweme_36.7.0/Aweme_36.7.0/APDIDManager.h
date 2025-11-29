@class ASSStorageModelZZZX, NSString, NSOperationQueue, NSInvocationOperation;

@interface APDIDManager : NSObject <APDIDProtocol, ConfigUpdatedProtocol>

@property (retain, nonatomic) NSOperationQueue *asyncTaskQueue;
@property (retain) ASSStorageModelZZZX *modelCache;
@property (retain, nonatomic) NSString *prevApdid;
@property (retain, nonatomic) NSString *randomIC4;
@property (retain, nonatomic) NSString *tokenId;
@property (retain, nonatomic) NSString *lastLoginTime;
@property (retain, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSString *randomKey;
@property BOOL retryFlag;
@property (retain) NSInvocationOperation *apdidOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)urlEncode:(id)a0;
- (void)initializeAPDIDTask:(id)a0;
- (id)getTokenResult;
- (id)getTokenResultFromCache;
- (id)getSimpleDeviceInfo;
- (void)onConfigUpdated;
- (void)initToken:(id)a0 appKeyClient:(id)a1 sessionId:(id)a2 callback:(id /* block */)a3;
- (void)initToken:(id)a0 appKeyClient:(id)a1 callback:(id /* block */)a2;
- (void)addApdidTaskQueue:(id)a0;
- (void)initToken:(id)a0 forceReport:(BOOL)a1 callback:(id /* block */)a2;
- (id)verifyStringNotNil:(id)a0;
- (id)getResultToken:(id)a0 appKeyClient:(id)a1;
- (id)getResultToken;
- (id)getTokenResult:(id)a0 appKeyClient:(id)a1;
- (void)updateApdidAndToken:(id)a0;
- (void)checkDynamicInfo;
- (id)getUtdid;
- (id)getApdidToken:(id)a0;
- (void)processDynamicInfo:(id)a0;
- (BOOL)verifyNetworkResult:(id)a0;
- (BOOL)checkIfTodayFirst;
- (BOOL)checkEnvModeChanged;
- (void)uploadAgentInfo:(id)a0;
- (BOOL)checkDate;
- (BOOL)checkLocalCacheTime;
- (BOOL)compareDateWithBenchmark:(id)a0;
- (id)getExactID;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;

@end
