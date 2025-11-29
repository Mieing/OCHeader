@class NSString;
@protocol AWEIMMessageListDataInterface;

@interface AWEIMSilverWingFeedBackComponent : AWEIMFlexComponent <AWEIMSilverWingFeedBackViewDelegate, AWEIMSilverWingRecommendListAction, AWEFormatIMConversationInjectTopicCardMessageAction, AWEIMMessageListMenuFeedbackProtocol, AWEIMSilverWingLoadingActions, AWEIMMessageListScreenShotAction>

@property (copy, nonatomic) id /* block */ updateBlock;
@property (nonatomic) long long feedBackType;
@property (nonatomic) BOOL didTrackPost;
@property (nonatomic) BOOL triggerByScreenShot;
@property (nonatomic) BOOL isOnScreen;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)onUserDidTakeScreenshot;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addObserver;
- (void)p_trackShow;
- (void)p_addKVO;
- (BOOL)canDisplayFeedback:(id)a0;
- (long long)getFeedbackType;
- (void)likeBotMessage;
- (void)dislikeBotMessage;
- (id)menuItemLikeTitle;
- (id)menuItemLikeIconUrlLight;
- (id)menuItemLikeIconUrlDark;
- (id)menuItemDislikeTitle;
- (id)menuItemDislikeIconUrlLight;
- (id)menuItemDislikeIconUrlDark;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)p_createPresenterIfNeed;
- (BOOL)isBusinessAI;
- (void)trackPostBtnWithEventType:(id)a0;
- (void)didInsertTopicCard;
- (void)hasClickRecommendList:(id)a0;
- (void)didInsertHelloLoadingMessage;
- (void)p_trackPostBtnShowIfNeed;
- (void)p_reloadShowStatus;
- (BOOL)p_shouldHideSelfWithMessage:(id)a0;
- (long long)p_getFeedBackType:(id)a0;
- (void)p_likeMsgForMenu:(BOOL)a0;
- (void)p_dislikeMsgForMenu:(BOOL)a0;
- (void)p_uploadFeedBackType:(long long)a0;
- (void)p_trackFeedBackWithType:(long long)a0;
- (void)p_openFeedbackPanelWithMessage:(id)a0;
- (void)p_afterOpenLynxFeedBackPage;
- (BOOL)p_needPostButton;
- (void)p_popupViewClose:(id)a0;
- (void)p_acceptAgreement:(id)a0;
- (id)paramsForAICreator:(id)a0;
- (BOOL)p_hasLoadingWithMessage:(id)a0;
- (void)clickLikeBtn;
- (void)clickDislikeBtn;
- (void)clickPostBtn;
- (void).cxx_destruct;

@end
