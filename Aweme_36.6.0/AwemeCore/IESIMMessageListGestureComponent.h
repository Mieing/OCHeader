@class UIViewController, NSString, AWEIMAlphaTapGesture, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol AWEIMLiveCustomServiceInteractorInterface, AWEIMInputViewControllerProtocol;

@interface IESIMMessageListGestureComponent : AWEIMComponentBase <UIGestureRecognizerDelegate, IESIMMessageListGestureInterface>

@property (retain, nonatomic) UITapGestureRecognizer *tapKeyboardMaskViewGes;
@property (retain, nonatomic) UIPanGestureRecognizer *panKeyboardMaskViewGes;
@property (retain, nonatomic) UIPanGestureRecognizer *panRightToBackGes;
@property (nonatomic) BOOL isFrozenByPanGesture;
@property (weak, nonatomic) UIViewController<AWEIMInputViewControllerProtocol> *inputVC;
@property (weak, nonatomic) id<AWEIMLiveCustomServiceInteractorInterface> liveCustomService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL aweDisableFullscreenPopTransition;
@property (retain, nonatomic) AWEIMAlphaTapGesture *titleViewAlphaTapGes;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (void)p_handleTapKeyboardMaskViewGes:(id)a0;
- (void)p_handlePanKeyboardMaskViewGes:(id)a0;
- (BOOL)p_shouldUseNewBackAnimation;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
