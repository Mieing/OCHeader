@class AWEProfileGuidePopoverHelper, NSString;

@interface AWEFriendsCommonHomeComponent : AWEUserHomeBaseComponent <AWEProfileGuidePopoverHelperDelegate, AWEUserMessage>

@property (retain, nonatomic) AWEProfileGuidePopoverHelper *popoverHelper;
@property (nonatomic) BOOL shouldRefreshFollowNum;
@property (nonatomic) BOOL needCheckShowSwitchToVirtualAvatarTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishTapTAIsFriendWithUser:(id)a0 isFriend:(BOOL)a1;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)tabBarDidChangeNotification:(id)a0;
- (void)userDidTakeScreenshot:(id)a0;
- (void)onEnterHomePageTab;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)onDidSyncAwemeUser:(id)a0 error:(id)a1;
- (void)onFinishLogin:(id)a0;
- (void)popoverHelperDidInvokeOnclose:(id)a0;
- (void)handleSatisticNumberChanged:(id)a0;
- (id)recommendFriendRedDotNode;
- (BOOL)shouldShowMomentTabGuidePopoverWithIndex:(long long)a0;
- (void)showMomentTabGuidePopover;
- (id)momentTabBubbleShownKey;
- (void)onLeaveHomePageTab;
- (void)didSwitchAccountFailed:(id)a0;
- (void)onFinishLogoutWithUid:(id)a0;
- (void)onUserModelUpdated:(id)a0;
- (void)viewDidAppear;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)onInit;

@end
