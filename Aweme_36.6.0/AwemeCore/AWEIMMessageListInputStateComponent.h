@class NSString, AWEIMInputStateManager, UILabel, AWEIMInputStateCacheModel;
@protocol AWEIMMessageListNaviBarTitleInterface;

@interface AWEIMMessageListInputStateComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListInputModuleAction, AWEIMInputVIewControllerAction, AWEIMMessageListInputStateInterface, AWEIMMessageListNaviBarTitleProvider>

@property (retain, nonatomic) AWEIMInputStateManager *inputStateManager;
@property (retain, nonatomic) AWEIMInputStateCacheModel *inputStateModel;
@property (nonatomic) BOOL hasDisplayInputState;
@property (retain, nonatomic) UILabel *inputLabel;
@property (weak, nonatomic) id<AWEIMMessageListNaviBarTitleInterface> naviBarTitleService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)inputStateDidChangeWithText:(id)a0 withGrowingTextView:(id)a1;
- (void)willSendTextMessageWithContent:(id)a0 userInfo:(id)a1;
- (void)p_updateTitle;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewType:(long long)a1 oldInputViewType:(long long)a2;
- (void)markSendSuccess;
- (BOOL)shouldShowInputStateInNaviBar;
- (id)inputStateStringForNaviBar;
- (void)p_updateInputState;
- (void).cxx_destruct;
- (void)dealloc;

@end
