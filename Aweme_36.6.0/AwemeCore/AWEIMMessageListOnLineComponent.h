@class UILabel, NSString;
@protocol AWEIMMessageTrackInteractorInterface, AWEIMMessageListNaviBarTitleInterface, AWEIMActiveUserInfoService;

@interface AWEIMMessageListOnLineComponent : AWEIMComponentBase <AWEUserMessage, AWEIMMessageListOnlineInterface, AWEIMMessageConversationDelegate, AWEIMMessageListUserInfoAction>

@property (retain, nonatomic) id<AWEIMActiveUserInfoService> activeUserInfo;
@property (retain, nonatomic) id<AWEIMActiveUserInfoService> nonFriendActiveUserInfo;
@property (weak, nonatomic) id<AWEIMMessageTrackInteractorInterface> tracker;
@property (retain, nonatomic) UILabel *onlineLabel;
@property (weak, nonatomic) id<AWEIMMessageListNaviBarTitleInterface> naviBarTitleService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (void)naviBarTitleWillAppearToPosition:(long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)participantsDidUpdate;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)app_didBecomeActive;
- (void)p_viewDidAppear;
- (void)p_updateActiveUserState;
- (void)p_handleFollowedNotification:(id)a0;
- (void)handleApplicationWillResignActiveNty:(id)a0;
- (void)modifyUserActiveStatus;
- (BOOL)canDisplayEnterpriseNonFriendActiveStatus;
- (void)p_addCustomNotifications;
- (void)p_resumeActiveUserState;
- (void)p_cleanActiveUserState;
- (void)p_cleanNonFriendActiveUserState;
- (void)p_updateOnlineLabelText;
- (void)p_userBecomeActive:(BOOL)a0;
- (BOOL)p_canPullActiveStatus;
- (void)p_updateVCTitle;
- (void)p_updateActiveUserInfo:(id)a0;
- (void)p_updateNonFriendActiveUserInfo:(id)a0;
- (void)p_updateTrackWithOnlineInfo:(id)a0 uid:(id)a1 overwritingEntries:(id)a2;
- (void)p_userBecomeActive:(BOOL)a0 animated:(BOOL)a1;
- (void)p_followStatusDidChangeForUserID:(id)a0;
- (void)p_handleUnFollowedNotification:(id)a0;
- (id)updateHighQualityMerchantsOnlineText:(id)a0;
- (void)p_checkAndInsertFansGroupActiveNotice;
- (void)p_didTapOnlineLabel;
- (void)p_addCustomKVO;
- (void).cxx_destruct;
- (void)dealloc;

@end
