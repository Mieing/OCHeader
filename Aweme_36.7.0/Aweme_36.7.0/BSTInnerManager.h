@class BSTSetupConfig, BSTChecker, NSHashTable, BSTABRulesConfig, BSTABRulesConfigV2;

@interface BSTInnerManager : NSObject

@property (class, readonly, nonatomic) BSTInnerManager *shared;

@property (retain) NSHashTable *pages;
@property (retain, nonatomic) BSTABRulesConfig *abConfig;
@property (retain, nonatomic) BSTABRulesConfigV2 *abConfigV2;
@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (nonatomic) double lastRunloopEnterTimeStamp;
@property (nonatomic) double samplingFrequency;
@property (retain, nonatomic) BSTSetupConfig *setupConfig;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } managerLock;
@property (retain, nonatomic) BSTChecker *checker;

+ (void)setupWithConfig:(id)a0;
+ (void)asyncPerformOnSerialThreadAction:(id /* block */)a0;
+ (void)asyncPerformOnConcurrentThreadAction:(id /* block */)a0;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)forbiddenBubbleForView:(id)a0;
- (id)bstInjectLynxWithUniqueKey:(id)a0;
- (void)clearViewStatusCacheOfResponder:(id)a0;
- (void)addBstABConfig:(id)a0;
- (void)sendShowEventOfView:(id)a0 trackModel:(id)a1 rule:(id)a2;
- (void)reportShowWithViewModel:(id)a0 rule:(id)a1 reporter:(id /* block */)a2;
- (id)trackRuleWithBiz:(id)a0 modelName:(id)a1;
- (id)uniqueKeyOfUniqueObject:(id)a0;
- (id)trackRuleWithRuleKey:(id)a0;
- (void)registerMainRunloopObserver;
- (void)initManagerLock;
- (void)stopRunLoopObserver;
- (BOOL)isFirstSendingExposureOfUniqueKey:(id)a0 responder:(id)a1;
- (void)bindView:(id)a0 withContext:(id)a1;
- (void)sendEventType:(id)a0 withView:(id)a1 context:(id)a2;
- (void)registerExposureHandler:(id /* block */)a0 forView:(id)a1;
- (void)registerClickHandler:(id /* block */)a0 forView:(id)a1;
- (void)autoShowTrackWithContext:(id)a0;
- (void)clickTrackWithContext:(id)a0;
- (void)sendClickEventOfView:(id)a0;
- (void)creatinitialBSTModelOfView:(id)a0;
- (void)initialBSTModelOfView:(id)a0;
- (void).cxx_destruct;

@end
