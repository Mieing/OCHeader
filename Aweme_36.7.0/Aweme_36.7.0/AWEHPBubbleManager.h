@class NSString, NSDictionary, AWEHPBubbleTaskWaitingContext, AWEHPTabComponentTrackHelper, AWEHPChannelBubbleTask;
@protocol AWEPzEngineProtocol;

@interface AWEHPBubbleManager : NSObject <AWEHPBubbleManagerProtocol>

@property (retain, nonatomic) id<AWEPzEngineProtocol> engine;
@property (copy, nonatomic) NSDictionary *bubbleHideTypeMap;
@property (retain, nonatomic) AWEHPBubbleTaskWaitingContext *waitingTaskContext;
@property (nonatomic) BOOL isTopUIDelegateSet;
@property (retain, nonatomic) AWEHPTabComponentTrackHelper *showDetailsHelper;
@property (retain, nonatomic) AWEHPChannelBubbleTask *curBubbleTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)bubbleStrategyEnable;
- (BOOL)hpBubbleBackgroundInterceptEnable:(id)a0;
- (void)topUIDelegateDidSet;
- (id)currentTabID;
- (void)trackBubbleShowWithTask:(id)a0;
- (void)trackBubbleHideWithTask:(id)a0 dismissType:(long long)a1;
- (void)tryShowBubbleWithTask:(id)a0 disableMigratePizza:(BOOL)a1 canShowCallBack:(id /* block */)a2;
- (BOOL)bubbleMigratePizza;
- (void)waitingTaskTimeOut;
- (void)preloadBubbleContentImageWithTask:(id)a0;
- (BOOL)needPizzaVerifyWithDisableOption:(BOOL)a0;
- (void)tryHoldBubbleManagerWithTask:(id)a0 completion:(id /* block */)a1;
- (BOOL)getAWEMRBubbleRefactorShowAllEnable;
- (id)generateComponentWithTask:(id)a0 extraVerify:(BOOL)a1;
- (void)tryHoldBubbleManagerRefactorWithTask:(id)a0 canShowCallBack:(id /* block */)a1;
- (void)verifyBubbleWithTask:(id)a0 component:(id)a1 canShowCallBack:(id /* block */)a2;
- (void)preloadBubbleContentImageWithConfig:(id)a0 channelID:(id)a1;
- (id)getShowHPStructExtraWithTask:(id)a0;
- (id)getHideHPStructExtraWithTask:(id)a0 dismissType:(long long)a1;
- (id)getBubbleImageLoadDetailsTrackInfoWithTask:(id)a0;
- (id)convertImageLoadFromToString:(long long)a0;
- (BOOL)getBubbleEnvOptMRTaskEnable;
- (BOOL)getBubbleEnvOptOtherEnable;
- (void)sendWaitingTaskToShow;
- (long long)getBubbleEnvOptTimeLimit;
- (void)clearWaitingTask;
- (BOOL)getBubbleBackgroundInterceptEnable;
- (BOOL)allTabBackgroundInterceptEnable;
- (BOOL)mrTaskBackgroundInterceptEnable;
- (id)getBubbleBackgroundInterceptTabList;
- (id)getAWEMRBubbleEnvOptConfig;
- (id)getBubbleBackgroundInterceptConfig;
- (id)createBubbleTask;
- (void)tryShowBubbleWithTask:(id)a0 canShowCallBack:(id /* block */)a1;
- (void)getPizzaPermissionWithBubbleModel:(id)a0 tabTags:(id)a1 verifyCompletion:(id /* block */)a2;
- (BOOL)sendBubbleTaskInWaitingList:(id)a0 canShowCallBack:(id /* block */)a1 timeoutCallBack:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
