@class NSLock, NSMutableDictionary;
@protocol BDUGLuckyDogNetworkCycleIntercepterProtocol;

@interface BDUGLuckyDogNetworkManager : NSObject

@property (weak, nonatomic) id<BDUGLuckyDogNetworkCycleIntercepterProtocol> cycleIntercepterDelegate;
@property (retain, nonatomic) NSMutableDictionary *coolingRequests;
@property (retain, nonatomic) NSLock *coolingRequestsLock;
@property (nonatomic) BOOL isBoeEnable;
@property (nonatomic) BOOL shouldBlockSummitRequest;

+ (id)netWorkString;
+ (id)sharedInstance;

- (id)defaultDomain;
- (void)requestForJSONWithPath:(id)a0 params:(id)a1 method:(id)a2 headerField:(id)a3 callback:(id /* block */)a4;
- (void)requestForJSONWithPath:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 retryTimes:(long long)a4 headerField:(id)a5 callback:(id /* block */)a6;
- (void)requestPlainForJSONWithPath:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 callback:(id /* block */)a5;
- (void)setIsCoolingDown:(BOOL)a0;
- (void)__requestWithPath:(id)a0 errorBlock:(id /* block */)a1 continueBlock:(id /* block */)a2;
- (void)requestForJSONWithPath:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 retryTimes:(long long)a4 needRetryBlock:(id /* block */)a5 delayTs:(long long)a6 headerField:(id)a7 callback:(id /* block */)a8;
- (void)trackRequestFrequencyIfNeeded:(id)a0;
- (void)requestPlainForJSONWithPath:(id)a0 params:(id)a1 method:(id)a2 headerField:(id)a3 callback:(id /* block */)a4;
- (id)buildRequestURLWithPath:(id)a0;
- (void)getCountDownPendantWithIdentifier:(id)a0 token:(id)a1 reportInterval:(long long)a2 pendantType:(id)a3 completion:(id /* block */)a4;
- (void)requestTaskCenterAckTimeWithToken:(id)a0 taskTokenType:(long long)a1 actNamespace:(id)a2 uniqueId:(long long)a3 currentTimes:(long long)a4 retryTimes:(long long)a5 serverExtra:(id)a6 extra:(id)a7 completion:(id /* block */)a8;
- (void)getCountDownPendantWithIdentifier:(id)a0 token:(id)a1 reportInterval:(long long)a2 completion:(id /* block */)a3;
- (void)requestTaskView:(id)a0 scene:(id)a1 taskId:(id)a2 completion:(id /* block */)a3;
- (void)getTimerTaskInfoWithToken:(id)a0 completion:(id /* block */)a1;
- (void)requestGeneralAckTimeWithToken:(id)a0 uniqueId:(long long)a1 incrTime:(long long)a2 retryTimes:(long long)a3 completion:(id /* block */)a4;
- (long long)trackCount;
- (void).cxx_destruct;
- (id)cache;
- (id)init;
- (BOOL)_enableCooling;
- (BOOL)isCoolingDown;

@end
