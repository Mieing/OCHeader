@class FlutterActionBarCallback, NSString, FlutterActionBarItem, UIImage, UIColor, UIView, UIViewController;

@interface FlutterActionBarHelper : NSObject

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) NSString *engineId;
@property (retain, nonatomic) FlutterActionBarCallback *actionBarCallback;
@property (nonatomic) BOOL navBarShouldHide;
@property (retain, nonatomic) UIImage *leftImage;
@property (retain, nonatomic) UIImage *centerImage;
@property (retain, nonatomic) UIImage *rightImage;
@property (retain, nonatomic) FlutterActionBarItem *rightItem;
@property (retain, nonatomic) FlutterActionBarItem *leftItem;
@property (nonatomic) BOOL onlyFlutter;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (weak, nonatomic) UIView *navBackgroundView;
@property (nonatomic) BOOL isShowingNavigationBar;
@property (nonatomic) double navigationBarMargin;
@property (nonatomic) double statusBarHeight;
@property (nonatomic) BOOL noFlutter;

+ (id)colorWithHex:(unsigned int)a0;
+ (id)imageWithColor:(id)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (id)initWithViewController:(id)a0 engineId:(id)a1;
- (void)dealloc;
- (void)attachToEngine:(id)a0;
- (void)setupDefault;
- (void)setupNavBar;
- (void)showFlutterActionBar;
- (void)showPlatformNavigationBar;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)touchBegan;
- (void)touchEnded;
- (void)applicationBecameActive;
- (void)hideNav;
- (void)showNav;
- (void)updateNavBarLayout:(id)a0;
- (void)traverseSubviews:(id)a0;
- (void).cxx_destruct;

@end
