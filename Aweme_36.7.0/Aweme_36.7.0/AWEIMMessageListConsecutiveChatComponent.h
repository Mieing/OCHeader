@class AWEIMFriendWidgetGuideResource, NSString, AWEIMConsecutiveChatModel, NSDate;
@protocol AWEIMStreakDisplayManagerProtocol, AWEIMMessageListNaviBarTitleInterface, IESIMThrottleDebounceAction;

@interface AWEIMMessageListConsecutiveChatComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListNaviBarTitleProvider, AWEIMConversationInfoOtherSubscriberProtocol, AWEIMStreakDisplayManagerDelegate>

@property (retain, nonatomic) id<IESIMThrottleDebounceAction> chatDaysLogThrottle;
@property (nonatomic) BOOL lastConsecutiveChatState;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (retain, nonatomic) AWEIMFriendWidgetGuideResource *resource;
@property (retain, nonatomic) NSDate *viewAppearStartTime;
@property (retain, nonatomic) AWEIMConsecutiveChatModel *consecutiveChatModel;
@property (weak, nonatomic) id<AWEIMMessageListNaviBarTitleInterface> naviBarTitleService;
@property (nonatomic) BOOL hasLoadFlameStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onConversationDidUpdateWithConversation:(id)a0;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (double)naviBarTitleViewCustomSpacing;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (void)didClickIMStreakView;
- (void)sendLocalNoticeMessage:(id)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (id)fetchInfoOtherWithOtherParams;
- (void)hostVC_viewWillDisappear;
- (id)customIMStreakTextFont;
- (void)asyncDidUpdateIMStreakView;
- (BOOL)imStreakViewIsUserInteractionEnabled;
- (void)refreshStreakWithConversation:(id)a0;
- (void)insertStreakNewFunctionTipsIfNeeded;
- (void)p_preDownloadStreakPetElfWidgetResourcesIfNeed;
- (void).cxx_destruct;
- (id)currentConversation;

@end
