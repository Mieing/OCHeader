@class UILabel, NSString;
@protocol AWEIMMessageListDataInterface, AWEIMMessageListNaviBarTitleInterface;

@interface AWEIMConversationElfBotLoadingComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListNaviBarTitleProvider>

@property (nonatomic) BOOL didLoadFirstPage;
@property (nonatomic) long long timestamp;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) UILabel *inputLabel;
@property (weak, nonatomic) id<AWEIMMessageListNaviBarTitleInterface> naviBarTitleService;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didReceiveAsyncSendMessageResponse:(id)a0;
- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)p_updateTitle;
- (void)p_stopLoadingAfterDelay:(double)a0;
- (void)p_stopLoading;
- (BOOL)isSendSuccessAndWithInTimeWithMessage:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;

@end
