@class MMUIWindow, UIViewController;

@interface MMWindowController : NSObject {
    int _transitionAnimationOptions;
    int _animType;
}

@property (retain, nonatomic) MMUIWindow *window;
@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL bIsAnimationAlpha;

- (id)initWithViewController:(id)a0 windowLevel:(int)a1;
- (void)dealloc;
- (id)getMainWindow;
- (void)setupWindowWithLevel:(int)a0;
- (void)showWindowAnimated:(BOOL)a0;
- (void)showWindowAnimated:(BOOL)a0 withTransitionAnimation:(int)a1;
- (void)showWindowAnimateType:(int)a0 withTransitionAnimation:(int)a1;
- (void)closeWindowAnimated:(BOOL)a0;
- (void)closeWindowAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)doWindowCloseAnimationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
