@class NSString;

@interface AWEIMEntryService : HTSService <AWEIMEntryService, AWEUserMessage>

@property (nonatomic) BOOL isOverseaUserDisableFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableStrongifyIMShareFormFeed;
+ (void)resetDisplayedDays;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (BOOL)enableModuleInterfaceLog;

- (void)onServiceInit;
- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)isNoticePushViewShowing;
- (BOOL)canShowEnterpriseModes;
- (BOOL)isQualifiedForEnterpriseModes;
- (BOOL)hasEnterpriseInvalidConvMode;
- (BOOL)couldExcludeEnterpriseNoticeFromServiceNotice;
- (BOOL)shouldExcludeEnterpriseNoticeFromServiceNotice;
- (BOOL)tabbarHasNotificationTab;
- (BOOL)currentUserMaxFollowerCountLess:(int)a0;
- (BOOL)cachedShouldDisableVajra;
- (BOOL)isIMFeatureEnable;
- (BOOL)currentUserIMFeatueDisable;
- (BOOL)isIMDylibLoaded;
- (id)userManager;
- (BOOL)shouldDemoteWithTimestamp:(double)a0;
- (BOOL)imQuickReplyIsDormant;
- (BOOL)feedCanAutoPlayWithPresentedViewController:(id)a0;
- (id)extractEnterIMGroupTokenWithText:(id)a0;
- (BOOL)shouldEnableIMUnreadSharedVideoFeature;
- (BOOL)shouldEnableIMUnreadSharedVideoShowInFeed:(id)a0;
- (id)showIMUnreadSharedTagInFeedFailedReason:(id)a0;
- (void)reportIMMessageUnreadSharedVideo:(id)a0 completion:(id /* block */)a1;
- (void)reportIMUnreadShareTagShowFailedReasonWithAweme:(id)a0 referString:(id)a1;
- (void)trackFriendShareVideoShowWithAweme:(id)a0 referString:(id)a1;
- (void)trackUnreadShreTagDisplayFailedWithAweme:(id)a0 referString:(id)a1 reason:(id)a2;
- (id)customizedTrackingParamsWithReferString:(id)a0 model:(id)a1;
- (BOOL)enableFeedReadyBootLaunchIM:(long long)a0;
- (id)getAlphaGestureWithTarget:(id)a0 selector:(SEL)a1;
- (long long)getStartIMState;
- (BOOL)imAwemeDetailOptimizeEnable;
- (void)trackMultiAwemeDetailRequestEventIfNeed:(id)a0;
- (void)recordLandingReason:(id)a0;
- (unsigned long long)watchOnceStrategy;
- (BOOL)shouldDisableCloseFriends;
- (void)markQuickReplyShowWithAweme:(id)a0 containerType:(long long)a1;
- (void)markAwemeModelWillShow:(id)a0 containerType:(long long)a1;
- (void)markFeedWillRefreshWithContainerType:(long long)a0;
- (BOOL)needImmediatelyShowQuickReplyWithAweme:(id)a0 inContainer:(long long)a1;
- (BOOL)hasQuickRepliedWithAwemeModel:(id)a0;
- (void)markDidRepliedWithAwemeModel:(id)a0;
- (BOOL)refactorShouldShowUnreadShareWithContext:(id)a0;
- (BOOL)isMessageTabPlusButtonIsInRight;
- (long long)getUnreadCountWhetherExistTabbar;
- (BOOL)searchNewHomePageDesktopShowUnreadCountFix;
- (BOOL)enableIronManSceneShowIMInnerPush;
- (BOOL)enableModuleServiceCodeHealthExp;
- (id)runFeedReadyIMTask:(long long)a0;
- (id)runReadyIMTask;
- (id)tabBarMessageItemSpecificConfig;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)imGroupTokenPattern;
- (id)showIMFeedUnreadShareTagFailedBaseConditionWithAweme:(id)a0 referString:(id)a1;
- (void)dismissToast;

@end
