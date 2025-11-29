@class AWEAwemeModel, UIViewController, UIView;
@protocol AWECommentListViewControllerProtocol;

@interface AWEPadSplitViewCommentBizAdapter : AWEPadSplitViewBaseBizAdapter

@property (nonatomic) BOOL isKeyboardShowing;
@property (weak, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (retain, nonatomic) UIView *dismissKeyboardView;
@property (retain, nonatomic) AWEAwemeModel *lastAwemeModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (BOOL)enableVerticalSlideDismiss;
- (void)service:(id)a0 willShowViewController:(id)a1 source:(long long)a2;
- (void)service:(id)a0 didShowViewController:(id)a1 source:(long long)a2;
- (void)service:(id)a0 didDismissViewController:(id)a1 source:(long long)a2;
- (void)service:(id)a0 panGestureStartWithPanDirection:(long long)a1;
- (void)service:(id)a0 panGestureEndWithPanDirection:(long long)a1;
- (void)splitViewDismissWithStayTime:(double)a0 duration:(double)a1;
- (void)didTapDismissKeyboardView;
- (void)showCommentWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)a0;
- (void)setupObservers;
- (void)keyboardDidShow:(id)a0;

@end
