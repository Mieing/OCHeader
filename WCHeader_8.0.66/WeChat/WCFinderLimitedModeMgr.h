@class NSString, WCFinderLimitAccessAuthorizationModel, MMLimitedModeAuthorizationUtilLogic;
@protocol WCFinderLimitedModeMgrDelegate;

@interface WCFinderLimitedModeMgr : NSObject <IMMLimitedModeMgrExt, MMLimitedModeAuthorizationUtilLogicDelegate>

@property (nonatomic) BOOL openShareListFeedsIgnoreLimited;
@property (nonatomic) long long finderLimitedModeConfig;
@property (nonatomic) unsigned long long antiAddictInterval;
@property (nonatomic) unsigned long long antiAddictPassSeconds;
@property (nonatomic) unsigned long long lastLiftCurfewTimeStamp;
@property (nonatomic) unsigned long long lastInFinderTimeStamp;
@property (nonatomic) BOOL enableShowShareRelatedWhenYoungContentLimit;
@property (retain, nonatomic) MMLimitedModeAuthorizationUtilLogic *authorizationLogic;
@property (retain, nonatomic) WCFinderLimitAccessAuthorizationModel *authorizationModel;
@property (nonatomic) unsigned long long antiSceneTotalWatchSeconds;
@property (weak, nonatomic) id<WCFinderLimitedModeMgrDelegate> delegate;
@property (nonatomic) BOOL checkAntiVCIsShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCheckAntiAddictLogicBySwitch;
+ (id)getCurfewAuthorizationBizKey;
+ (id)getTimeLockAuthorizationBizKey;
+ (id)getFeedAuthorizationBizKeyWithFeedId:(id)a0;
+ (id)getLiveAuthorizationBizKeyWithFeedId:(id)a0;
+ (id /* block */)getOpenTeenageBlockByFeedId:(id)a0 encrytedObjectidTid:(id)a1 nonceID:(id)a2 shareScene:(unsigned long long)a3 currentNavController:(id)a4 customParam:(id)a5 functionalParams:(id)a6 reportModel:(id)a7 cardType:(int)a8;
+ (id /* block */)getOpenTeenageBlockByLiveParams:(id)a0;

- (void)enterAntiScene;
- (void)leaveAntiScene;
- (void)updateLastInFinderTimeStamp;
- (void)updateAntiTimeDatas;
- (void)_updateAntiAddictPassSeconds;
- (void)limitedModeChanged:(BOOL)a0;
- (void)limitedAgreeAuthorization:(id)a0;
- (void)_updateAntiSceneTotalWatchSeconds;
- (BOOL)_shouldCheckAntiAddictByCurfew;
- (BOOL)_checkFromVCCanShowAntiAddict:(id)a0;
- (BOOL)_isTimeToCheckAntiAddictLogic:(long long)a0 scene:(unsigned long long)a1 fromVC:(id)a2 checkViewWillAppearBlock:(id /* block */)a3 checkViewDidAppearBlock:(id /* block */)a4 checkVerifySucBlock:(id /* block */)a5 checkViewExitBlock:(id /* block */)a6 checkViewForbidShowBlock:(id /* block */)a7 controlExitState:(BOOL)a8;
- (void)resetAntiAddictPassSeconds;
- (void)resetLastShowTeenagerRestTime;
- (BOOL)triggerAntiAddictCheckLogic:(unsigned long long)a0 fromVC:(id)a1 checkViewWillAppearBlock:(id /* block */)a2 checkViewDidAppearBlock:(id /* block */)a3 checkVerifySucBlock:(id /* block */)a4 checkViewExitBlock:(id /* block */)a5 checkViewForbidShowBlock:(id /* block */)a6 controlExitState:(BOOL)a7;
- (long long)getAntiAddictStyle;
- (BOOL)triggerTeenagerRestCheckLogic:(unsigned long long)a0;
- (id)initWithPassSeconds:(unsigned long long)a0 lastLiftCurfewTimeStamp:(unsigned long long)a1 antiSceneTotalWatchSeconds:(unsigned long long)a2 dynamicConfigModel:(id)a3;
- (void)resetCacheAntiAddictPassSeconds;
- (void)resetCacheAntiSceneTotalWatchSeconds;
- (void)dealloc;
- (void)registerExtension;
- (void)clearRegisterExtension;
- (unsigned long long)getTotalWatchSecondsCheckInterval:(BOOL)a0;
- (BOOL)checkWhetherLimitedByFuncFlag:(unsigned long long)a0 paramsModel:(id)a1;
- (void)startQuestAccessFeedAuthorizationWithModel:(id)a0;
- (void)startQuestAccessFeedAuthorizationWithContentVM:(id)a0 bizKey:(id)a1 currentNavController:(id)a2;
- (void)onVerifyPasswordSuccessWithBizKey:(id)a0 bizType:(long long)a1;
- (void)onVerifyPasswordSuccessAndAnimationEndedWithBizKey:(id)a0 bizType:(long long)a1;
- (void)onVerifyCancelWithBizKey:(id)a0 bizType:(long long)a1;
- (void)onAgreenAuthorization:(id)a0 agreenAuthorizationInfo:(id)a1;
- (void).cxx_destruct;

@end
