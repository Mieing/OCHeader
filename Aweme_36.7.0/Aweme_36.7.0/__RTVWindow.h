@class NSString, UIWindow, UIViewController;

@interface __RTVWindow : UIWindow <RTVWindowProtocol>

@property (readonly, nonatomic) BOOL enableKeyWindow;
@property (weak, nonatomic) UIWindow *lastKeyWindow;
@property (weak) UIViewController *rtv_rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (BOOL)_canBecomeKeyWindow;
- (BOOL)_canAffectStatusBarAppearance;
- (id)__topViewControllerForController:(id)a0;
- (void)rtv_makeKeyWindowAndVisible;
- (void)rtv_resignKeyWindow;
- (id)topViewControllerForLastKeyWindow;
- (BOOL)shouldAffectStatusBarAppearance;
- (void)setRootViewController:(id)a0;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)canBecomeKeyWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
