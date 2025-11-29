@class NSString, AWEUserContainerBaseViewModel;

@interface AWEUserContainerBaseViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEUserContainerBaseViewModel *viewModel;
@property (nonatomic) BOOL isKeyboardShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)skipAction;
- (void)tapGestureAction:(id)a0;
- (void)viewControllerBindingUI;
- (void)addTapGestureRecognizer;
- (void)handleKeyboardNSNotification;
- (void)cursorFocusWhenAppear;
- (void)handleKeyboardWillChange:(id)a0;
- (void)backAction;
- (void).cxx_destruct;
- (void)closeAction;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
