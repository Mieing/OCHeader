@class CJPayWidgetWindow, CJPayCountDownDraggableView, CJPayBaseLynxView, NSDate, NSString, UIViewController;

@interface CJPayCountDownWidgetManager : NSObject <CJPayLynxViewDelegate, CJPayWidgetWindowEventDelegate>

@property (retain, nonatomic) CJPayWidgetWindow *window;
@property (retain, nonatomic) CJPayBaseLynxView *widgetView;
@property (nonatomic) BOOL isWidgetCreated;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (nonatomic) BOOL isNavigatingForward;
@property (retain, nonatomic) CJPayCountDownDraggableView *draggableView;
@property (retain, nonatomic) NSDate *createTime;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL isWidgetLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)handleBecomeActive:(id)a0;
- (void)handleResignActive:(id)a0;
- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidFirstScreen;
- (void)viewDidFinishLoadWithError:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (BOOL)canShowWidget;
- (void)updateWidgetFrame:(id)a0 inWindow:(id)a1;
- (void)restoreViewControllerClass:(id)a0;
- (void)swizzleViewControllerMethods:(id)a0;
- (Class)createSwizzledClassWithOriginalClass:(Class)a0 newClassName:(id)a1;
- (void)addSwizzledMethod:(Class)a0 originalClass:(Class)a1 selector:(SEL)a2 implementation:(void /* function */ *)a3;
- (void)destroyWidget;
- (void)createWidgetWithSchema:(id)a0 taskData:(id)a1 fromVC:(id)a2;
- (void)showWidget;
- (BOOL)shouldHandleTouchAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)removeNotifications;
- (void)setupNotifications;

@end
