@interface AWELeftSideBarCommonUtility : NSObject

+ (double)currentServerTime;
+ (Class)aAWEPadLeftSideBarAdapterClass;
+ (id)getIronManModuleService;
+ (Class)aAWELeftSideBarCommonAdapterClass;
+ (id)sideBarOpenOperateMethodTrackNameWithOperateMethod:(long long)a0;
+ (id)adjustedEnterFromIfNeededForMergeProfileSideBar:(id)a0;
+ (unsigned long long)channelBadgeTypeWithEntranceViewRedDotStyle:(long long)a0;
+ (void)tryLoginWithExtraLoginTrackParams:(id)a0 completion:(id /* block */)a1;
+ (void)tryTransferWithSchema:(id)a0 withParams:(id)a1 identification:(id)a2 completion:(id /* block */)a3;
+ (id)processMiniAppLandingPageSchema:(id)a0;
+ (long long)badgeStyleFromHPBadgeStyle:(long long)a0;
+ (id)badgeStringStyleWithBadgeStyle:(long long)a0;
+ (void)monitorSideBarMethodCost:(id /* block */)a0 withShouldMonitor:(BOOL)a1 withFinishBlock:(id /* block */)a2;
+ (id)stencilViewBadgeStringStyle:(id)a0;
+ (long long)getCurrentTheme:(id)a0;
+ (BOOL)hasNotificationItem:(id)a0;
+ (BOOL)isSideBarModelSupportMergeProfile:(id)a0;
+ (BOOL)isSideBarModelSupportNotificationShow:(id)a0;
+ (BOOL)isSideBarModelSupportFeedShow:(id)a0;
+ (BOOL)canPresentSideBarAutoRotate;

- (id)aAWEPadLeftSideBarAdapter;
- (id)aAWELeftSideBarCommonAdapter;

@end
