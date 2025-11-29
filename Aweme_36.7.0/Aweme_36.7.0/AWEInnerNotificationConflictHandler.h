@class NSString;
@protocol AWEInnerNotificationController, AWEInnerNotificationCenter;

@interface AWEInnerNotificationConflictHandler : HTSService <HTSService, AWEInnerNotificationConflictHandler, AWEUserMessage, AWELiveRoomMessage, AWEBasicModeMessage, AWEDigitalWellbeingMessage>

@property (weak, nonatomic) id<AWEInnerNotificationCenter> notificationCenter;
@property (weak, nonatomic) id<AWEInnerNotificationController> notificationController;
@property (nonatomic) long long liveBlockBusiness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (void)audienceEnterLiveRoom;
- (void)audienceQuitAllRoom;
- (void)anchorStartLive;
- (void)anchorEndLive;
- (BOOL)isBasicModeEnabled;
- (void)p_handleSplashDidDisappearNotification:(id)a0;
- (void)p_handleSplashDidAppearNotification:(id)a0;
- (void)p_handleAntiAddictFeedEnterNotification:(id)a0;
- (void)p_handleAntiAddictFeedLeaveNotification:(id)a0;
- (void)p_handleVerifyPageShowStateNotification:(id)a0;
- (void)p_handleEnterLongPressCoverViewNotification:(id)a0;
- (void)p_handleQuitLongPressCoverViewNotification:(id)a0;
- (void)p_handleSpringGroupPlayRedPacketAppearNotification:(id)a0;
- (void)p_handleSpringGroupPlayRedPacketDisappearNotification:(id)a0;
- (void)p_preCheck;
- (void)p_blockBySplash;
- (void)p_blockByAntiAddict;
- (void)p_blockByLive;
- (void)p_blockByAccount;
- (void)p_blockByBasicMode;
- (void)p_blockByTeenMode;
- (void)p_releaseNotificationWithBusiness:(long long)a0;
- (void)p_blockBySpringGroupPlayRedPacket;
- (void)p_blockNotificationBelowPriority:(long long)a0 business:(long long)a1 validateBlock:(id /* block */)a2;
- (void)p_releaseBlockByAccount;
- (void)p_releaseBlockByLive;
- (long long)__liveBusiness;
- (void)p_dismissCurrentInnerPush;
- (void)p_releaseBlockByBasicMode;
- (void)p_releaseBlockByTeenMode;
- (BOOL)isAccountBusinessWithBusiness:(long long)a0;
- (void)p_releaseBlockBySplash;
- (void).cxx_destruct;
- (void)dealloc;

@end
