@class NSMapTable, AWELeftSideBarManager;

@interface AWELeftSideBarAmbienceManager : NSObject

@property (weak, nonatomic) AWELeftSideBarManager *leftSideBarManager;
@property (retain, nonatomic) NSMapTable *ambienceDic;
@property (nonatomic) double entranceBadgeChangeTime;

- (void)updateAmbienceObjectWithEntranceViewModel:(id)a0 withHostParams:(id)a1;
- (void)closeSideBarWithParams:(id)a0 completion:(id /* block */)a1;
- (id)getAmbienceObjectWithIdentification:(id)a0;
- (id)getLeftSideBarOpenOperateMethodTrackName;
- (BOOL)openSideBarWithParams:(id)a0 completion:(id /* block */)a1;
- (long long)leftSideBarStatus;
- (id)getLeftSideBarViewController;
- (id)ambienceObjectRegisterClassDic;
- (void)enumerateAmbienceObjectsUsingBlock:(id /* block */)a0;
- (long long)p_badgeStyleWithIdentification:(id)a0;
- (long long)p_badgeNumberWithIdentification:(id)a0;
- (id)p_recentDisplayBadgeComponentID;
- (long long)p_leftSideBarBusinessEntranceRedDotStyleWithOutIdentification:(id)a0;
- (long long)p_currentLeftSideBarBussinessEntranceRedDotCountWithOutIdentification:(id)a0;
- (long long)leftSideBarBusinessEntranceRedDotStyle;
- (long long)currentLeftSideBarBussinessEntranceRedDotCount;
- (void)p_showLeftSideBarEntranceRedDotWithAmbienceObject:(id)a0 withDotStyle:(long long)a1 withRedDotCount:(long long)a2 withCurrentDotStyle:(long long)a3 withRedDotCount:(long long)a4 componentID:(id)a5;
- (void)p_trackBadgeDisplayStatusWithOldBadgeStyle:(long long)a0 newBadgeStyle:(long long)a1 oldBadgeNumber:(long long)a2 newBadgeNumber:(long long)a3 badgeCallContext:(id)a4 componentID:(id)a5;
- (void)dispatch_sideBarEntranceViewAddWithIdentification:(id)a0 withHasRebuild:(BOOL)a1;
- (BOOL)p_openSideBarWithParams:(id)a0 identification:(id)a1 completion:(id /* block */)a2;
- (id)p_displayingAmbienceObject;
- (void)p_updateEntranceBadgeWithComponentID:(id)a0 badgeCallContext:(id)a1 completion:(id /* block */)a2;
- (void)p_showLeftSideBarEntranceRedDotWithDotStyle:(long long)a0 badgeCallContext:(id)a1 withRedDotCount:(long long)a2 componentID:(id)a3;
- (id)getCurrentAmbienceObject;
- (id)p_getCanShowPopViewAmbienceObject;
- (id)p_getCanShowCaptionBubbleAmbienceObject;
- (id)p_getInteractiveAnimationAmbienceObject;
- (id)p_getEntranceAnimationAmbienceObject;
- (id)p_generateBadgeJumpTrackParamsWithNewBadgeInfoModel:(id)a0 curBadgeInfoModel:(id)a1;
- (void)p_updateEntranceBadgeWithIdentification:(id)a0 badgeStyle:(long long)a1 badgeNumber:(long long)a2 badgeCallContext:(id)a3 componentID:(id)a4;
- (long long)p_badgeShowResultWithEntranceBadgeInfo:(id)a0;
- (void)sidebarRefreshEntranceViewRedDotWithComponentID:(id)a0 badgeCallContext:(id)a1 completion:(id /* block */)a2;
- (id)initWithLeftSideBarManager:(id)a0;
- (id)getAmbienceObjectWithEntranceViewModel:(id)a0 withHostParams:(id)a1;
- (long long)ambienceObjectCount;
- (BOOL)hasAddLeftSideBarEntranceView;
- (BOOL)hasLeftSideBarEntranceView;
- (id)getLeftSideBarViewControllerWithIdentification:(id)a0;
- (id)displayingIdentification;
- (BOOL)needStopLeftSideBarHostVCAppear;
- (void)sidebarRefreshEntranceViewRedDotWithRedDotDictionary:(id)a0 withNumericalRedDotDictionary:(id)a1 withCompletion:(id /* block */)a2;
- (long long)currentAmbienceEntranceBadgeStyle;
- (BOOL)canShowEntranceBadgeWithIdentification:(id)a0;
- (void)addLeftSideBarBussinessEntranceView:(id)a0 withIdentification:(id)a1 completion:(id /* block */)a2;
- (void)removeLeftSideBarBussinessEntranceViewWithIdentification:(id)a0 removeReason:(unsigned long long)a1;
- (BOOL)leftSideBarBussinessEntranceViewIsShowWithIdentification:(id)a0;
- (BOOL)leftSideBarEntranceViewCanShowPopView:(id)a0;
- (void)hpLeftSideBarShowPopViewWithTask:(id)a0 completion:(id /* block */)a1;
- (BOOL)leftSideBarEntranceViewCanShowCaptionBubble:(id)a0;
- (void)hpLeftSideBarShowCaptionBubbleWithTask:(id)a0 withModel:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3 clickContentBlock:(id /* block */)a4 clickCloseButtonBlock:(id /* block */)a5 autoDismissBlock:(id /* block */)a6;
- (BOOL)leftSideBarEntranceViewCanShowInteractiveAnimation:(id)a0;
- (void)showInteractiveAnimationViewTask:(id)a0 onView:(id)a1 withCompletion:(id /* block */)a2 withDismissCompletion:(id /* block */)a3;
- (void)showInteractiveAnimationOnlyEntranceView:(id)a0 withCompletion:(id /* block */)a1;
- (void)didReloadSideBarBusinessInfo;
- (void).cxx_destruct;

@end
