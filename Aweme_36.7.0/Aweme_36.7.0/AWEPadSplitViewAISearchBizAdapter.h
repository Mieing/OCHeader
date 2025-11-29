@class UIViewController, UIView;
@protocol AWESearchAIGCPadSplitScreenContentProtocol;

@interface AWEPadSplitViewAISearchBizAdapter : AWEPadSplitViewBaseBizAdapter

@property (nonatomic) BOOL isKeyboardShowing;
@property (retain, nonatomic) UIView *dismissKeyboardView;
@property (weak, nonatomic) UIViewController<AWESearchAIGCPadSplitScreenContentProtocol> *aiSearchVC;

- (void)service:(id)a0 willShowViewController:(id)a1 source:(long long)a2;
- (void)service:(id)a0 didDismissViewController:(id)a1 source:(long long)a2;
- (void)service:(id)a0 panGestureStartWithPanDirection:(long long)a1;
- (void)didTapDismissKeyboardView;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)a0;
- (void)setupObservers;
- (void)keyboardDidShow:(id)a0;

@end
