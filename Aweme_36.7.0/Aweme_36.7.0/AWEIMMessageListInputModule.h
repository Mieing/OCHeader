@class NSString, UIViewController;
@protocol AWEIMMessageListLayoutInterface, AWEIMInputViewControllerProtocol;

@interface AWEIMMessageListInputModule : AWEIMMessageListModule <AWEIMMessageListInputModuleInterface, AWEIMMessageListBackgroundAction, AWEIMMessageListInputModuleAction, AWEIMMultiSelectedAction, AWEIMMessageListDataAction, AWEIMMessageBaseVCLayoutAction, AWEIMMessageListUserInfoAction, AWEIMMessageTableViewAction>

@property (retain, nonatomic) UIViewController<AWEIMInputViewControllerProtocol> *inputVC;
@property (weak, nonatomic) id<AWEIMMessageListLayoutInterface> layoutService;
@property (nonatomic) BOOL isHiddenByMultiSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)checkAndChangeQuoteReplyInputVCStatusWithMessage:(id)a0;
- (void)baseViewControllerFrameDidChanged;
- (void)changeTypeToText;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)multiSelectedStateDidChanged:(BOOL)a0;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewType:(long long)a1 oldInputViewType:(long long)a2;
- (void)p_setupInputVC;
- (id)inputVCWithFunctions:(id)a0;
- (void)p_showGifSearchViewController;
- (void)p_setupInputVCBgColor;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)init;
- (long long)currentInputType;

@end
