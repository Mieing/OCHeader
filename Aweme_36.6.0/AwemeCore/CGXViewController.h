@class CGXMobileKeyboardManager, CGXGestureView, CGXTopView, CGXRenderView;

@interface CGXViewController : UIViewController

@property (retain, nonatomic) CGXTopView *topView;
@property (retain, nonatomic) CGXRenderView *renderView;
@property (retain, nonatomic) CGXGestureView *touchView;
@property (retain, nonatomic) CGXMobileKeyboardManager *keyboardManager;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property long long currentOrientation;

- (id)initWithOrientation:(long long)a0 width:(int)a1 height:(int)a2;
- (void)initKeyboard:(id)a0;
- (void)layoutRenderView;
- (void)updateOrientationWithHeight:(int)a0 width:(int)a1 rotation:(int)a2;
- (void)onTouchEvents:(id /* block */)a0;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)viewDidAppear:(BOOL)a0;

@end
