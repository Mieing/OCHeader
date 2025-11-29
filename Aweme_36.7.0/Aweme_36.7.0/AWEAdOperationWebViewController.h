@class UIPanGestureRecognizer, NSString, NSDictionary, AWEAwemeModel, AWEAdWebViewController, NSNumber, AWEListDataController;

@interface AWEAdOperationWebViewController : UIViewController <AWEZoomTransitionOuterContextProvider, UIGestureRecognizerDelegate, AWEAdOperationWebViewController>

@property (retain, nonatomic) AWEAdWebViewController *adWebViewController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL webViewHasFailed;
@property (retain, nonatomic) NSNumber *jsBridgeCardStatus;
@property (nonatomic) unsigned long long cardStatusCode;
@property (copy, nonatomic) NSString *formType;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (retain, nonatomic) UIPanGestureRecognizer *barrierPanGesture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } webViewRecognizableArea;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL loadSuccess;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)detectAbnormalDisplay;
- (void)setupNotification;
- (void)adjustSubview;
- (void)adCardStatusUpdate:(id)a0;
- (void)showFromView:(id)a0 model:(id)a1;
- (void)preloadOperationWithModel:(id)a0 onView:(id)a1 cardStatusCode:(unsigned long long)a2;
- (void)preloadOperationWithModel:(id)a0 onView:(id)a1;
- (void)closeOperation:(id)a0;
- (void)zoomInDetailVCFromWebMask:(id)a0;
- (void)setupHitTestSwipableAreaForWebView:(id)a0;
- (id)logExtraValue;
- (void)preloadOperationWithModel:(id)a0 onView:(id)a1 cardStatusCode:(unsigned long long)a2 dataController:(id)a3;
- (void)p_reloadAdWebViewController;
- (void)barrierPan:(id)a0;
- (void)preloadOperationWithModel:(id)a0 onView:(id)a1 dataController:(id)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (id)webViewController;
- (void)startMonitor;

@end
