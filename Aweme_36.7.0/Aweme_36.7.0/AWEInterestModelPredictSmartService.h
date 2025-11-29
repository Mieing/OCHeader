@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface AWEInterestModelPredictSmartService : AWEBaseSmartServiceImpl <IESFCEventObserver, AWEThermalMitigationClientAIProtocol, AWEInterestModelPredictSmartService> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSArray *needCalculateSceneArray;
@property (nonatomic) long long playVideoCount;
@property (nonatomic) BOOL forbidPlayMusicAnimation;
@property (nonatomic) BOOL useNewDegradeLogic;
@property (retain, nonatomic) NSDictionary *interestProbKeyToDegradationDict;
@property (retain, nonatomic) NSMutableDictionary *shouldDegradeDict;
@property (nonatomic) BOOL shouldPredict;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic) long long currentFailedCount;
@property (nonatomic) BOOL predictHasSucceeded;
@property (retain, nonatomic) NSDictionary *specialSceneConfigDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)onServiceInit;
- (void)onTriggerEvent:(unsigned long long)a0 params:(id)a1;
- (long long)serviceStartRunThreshold;
- (BOOL)isValidDegradationForKey:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;

@end
