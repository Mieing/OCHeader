@class NSString, NSArray, RxDeferred, NSMutableArray;

@interface AWEIMInfoOtherNoticeInteractor : AWEIMComponentBase <AWEIMConversationInfoOtherSubscriberProtocol, AWEIMMessageListDataAction, AWEIMMessageListUserInfoAction, AWEIMInfoOtherNoticeInteractorInterface>

@property (retain, nonatomic) RxDeferred *fetchFullUserPromise;
@property (retain, nonatomic) RxDeferred *fethLastMessagePromise;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSArray *firstScreenMessages;
@property (retain, nonatomic) NSMutableArray *messagesWaitedForCheckingfirstScreenAppearance;
@property (nonatomic) BOOL hasRefreshedInfoOther;
@property (nonatomic) BOOL firstFrameOptV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableWithCon:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)beforeAsync_didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)hostVC_afterFirstRender;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (id)vcParent;
- (void)refreshInfoOtherWhenDidFetchMessageGroupArray;
- (void)insertNoticeFromInfoOtherData:(id)a0 source:(id)a1;
- (void)didHaveFirstScreenCells;
- (BOOL)shouldInsertMsg:(id)a0;
- (void)insertMessageWithMsg:(id)a0 conversationID:(id)a1;
- (void)setMessageLastInsertTimeForMsg:(id)a0;
- (BOOL)isEnabledByExperimentWithMsg:(id)a0;
- (BOOL)shouldPassFrequencyLimitByTimeLengthWithMsg:(id)a0;
- (BOOL)shouldPassFrequencyLimitByFirstScreenAppearanceWithMsg:(id)a0;
- (BOOL)shouldLimitFrequencyByTimeLengthWithAweType:(long long)a0;
- (BOOL)shouldLimitFrequencyByFirstScreenAppearanceWithAweType:(long long)a0;
- (BOOL)isMatchedWithFirstScreenMessagesForMessage:(id)a0;
- (void)refreshInfoOther;
- (id)urgeCompanyRequestParams;
- (void)updateInfoOtherWithData:(id)a0 source:(id)a1;
- (void).cxx_destruct;
- (id)lastMessage;

@end
