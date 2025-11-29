@class UINavigationController, UIWindow, UIView, BDUGLuckyDogPopUpObj, UIViewController;

@interface BDUGLuckyDogAlertBaseView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIViewController *alertVC;
@property (retain, nonatomic) UINavigationController *alertNavigationController;
@property (retain, nonatomic) UIWindow *alertWindow;
@property (retain, nonatomic) UIWindow *originWindow;
@property (weak, nonatomic) BDUGLuckyDogPopUpObj *dialogObj;
@property (nonatomic) BOOL isFinishDialogManager;

- (void)hideWithAsyncCompletion:(id /* block */)a0;
- (id)setString:(id)a0 placeholder:(id)a1;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)show;

@end
