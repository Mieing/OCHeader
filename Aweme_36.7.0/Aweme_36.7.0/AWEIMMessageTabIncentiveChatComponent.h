@class NSString, AWEButton, UIImageView, LOTAnimationView;

@interface AWEIMMessageTabIncentiveChatComponent : AWEIMComponentBase <AWEIMMessageTabNaviButtonProvider, AWEIMIncentiveChatServiceMessage, AWEIMMessageTabViewControllerAction>

@property (retain, nonatomic) AWEButton *containerButton;
@property (retain, nonatomic) UIImageView *redpacketView;
@property (nonatomic) BOOL needDelayPlayLottie;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (nonatomic) long long rewardNum;
@property (copy, nonatomic) NSString *landingRouterTaskEnterFrom;
@property (copy, nonatomic) NSString *landingRouterEnterFrom;
@property (nonatomic) BOOL isInCheckCanShow;
@property (nonatomic) BOOL hasOtherUpdateComing;
@property (nonatomic) BOOL privateEnableShow;
@property (nonatomic) BOOL groupEnableShow;
@property (nonatomic) BOOL walletEnableShow;
@property (nonatomic) long long lottieUIThemeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_getTopEntranceImage;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)trackParams;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (long long)buttonPosition;
- (BOOL)canShowInNaviBar;
- (id)customNaviButtonView;
- (double)secondButtonRightSpace;
- (void)completeIncentiveChatServiceUpdate:(id)a0;
- (void)incentiveChatService:(id)a0 relationUpdateWithRelationID:(id)a1 conversationID:(id)a2;
- (void)approveInviteCompleteWithService:(id)a0;
- (void)incentiveChatServiceActivityExit:(id)a0;
- (void)availableGroupChatSetChangeNotifyWithIsAvailableGroupChatAdd:(BOOL)a0;
- (void)onTabBarDidChangeNotification:(id)a0;
- (void)p_playLottieIfInMessageTab;
- (void)lastRouterActionDidUpdate;
- (void)p_landingTransferToIncentiveChatLynxPanelIfNeed;
- (void)p_transferToLynxPanelTypeWithParams:(id)a0;
- (void)p_playLottie;
- (void)checkEnableShow;
- (void)p_checkEnableShow;
- (void)p_afterCheckAndShowWithCompletion:(id /* block */)a0;
- (BOOL)p_canShowMessageTabEntryForPrivate;
- (BOOL)p_canShowMessageTabEntryForWallet;
- (void)p_checkEnableShowForGroupWithCompletion:(id /* block */)a0;
- (void)p_didClickButton;
- (void).cxx_destruct;
- (void)dealloc;

@end
