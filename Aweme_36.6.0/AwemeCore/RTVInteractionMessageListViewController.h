@class RTVListViewController, UITapGestureRecognizer, NSString, UIView, UIViewController;
@protocol RTVChatController, RTVTextInputController, RTVInteractionControlViewController, RTVInteractionConfigureManagerInterface, RTVXRControllerInjector, RTVInteractionMessageListViewControllerDelegate;

@interface RTVInteractionMessageListViewController : UIViewController <RTVFullScreenViewControllerProtocol, RTVTextInputControllerDelegate, UIGestureRecognizerDelegate>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> configureManager;
@property (readonly, weak, nonatomic) id<RTVInteractionControlViewController> controlViewController;
@property (readonly, nonatomic) UIViewController<RTVTextInputController> *inputController;
@property (readonly, nonatomic) RTVListViewController *listViewController;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly, weak, nonatomic) id<RTVChatController> chatController;
@property (nonatomic) double heightOfInputVCFirstShow;
@property (readonly, nonatomic) UIView *clearView;
@property (weak, nonatomic) id<RTVInteractionMessageListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldBypassPresentationHook;
- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewType:(long long)a1;
- (void)didSendContent:(id)a0 textView:(id)a1 userInfo:(id)a2;
- (void)inputViewControllerDidChangeHeight:(id)a0;
- (void)__configureComponents;
- (void)showInputViewController;
- (void)__createDependencies;
- (void)__displayControlViewIfNeeded;
- (void)__hiddenControlViewIfNeeded;
- (void)__createInputViewController;
- (void)__createGestures;
- (void)__onCloseTapGestureRecognized:(id)a0;
- (void)__onListViewTapGestureRecognized:(id)a0;
- (void)__makeTranslationForMessageListViewIfNeeded;
- (BOOL)disableDismissTapGestureForFullScreenTransition;
- (BOOL)enableCloseButtonForFullScreenTransition;
- (BOOL)enableSlipDismissGestureForFullScreenTransition;
- (id)transitionViewBackgroundColorForFullScreenTransition;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (long long)preferredStatusBarStyle;
- (void)__sendMessage:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
