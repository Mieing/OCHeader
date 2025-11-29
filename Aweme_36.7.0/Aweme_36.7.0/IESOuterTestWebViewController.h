@class IESOuterTestWebConfig, IESOuterTestWebView, UISwipeGestureRecognizer, NSString, UIView, IESOuterTestNavigationBar, NSMutableArray;
@protocol IESOuterTestWebLoadingViewProtocol, IESOuterTestWebErrorViewProtocol;

@interface IESOuterTestWebViewController : UIViewController <WKNavigationDelegate, UIGestureRecognizerDelegate, IESOuterTestWebViewControllerDelegate>

@property (retain, nonatomic) IESOuterTestNavigationBar *navigationBar;
@property (retain, nonatomic) IESOuterTestWebView *webview;
@property (retain, nonatomic) UIView<IESOuterTestWebLoadingViewProtocol> *progressView;
@property (retain, nonatomic) UIView<IESOuterTestWebErrorViewProtocol> *failureView;
@property (retain, nonatomic) UISwipeGestureRecognizer *webviewGoBackGesture;
@property (retain, nonatomic) NSMutableArray *webTouchEventsGestures;
@property (copy, nonatomic) NSString *urlStr;
@property (copy, nonatomic) NSString *titleStr;
@property (retain, nonatomic) IESOuterTestWebConfig *config;
@property (nonatomic) BOOL originKeepScreenAlive;
@property (nonatomic) BOOL originNavigationBarHidden;
@property (nonatomic) BOOL originNavigationBarIsHidden;
@property (nonatomic) long long originStatusBarStyle;
@property (nonatomic) long long currStatusBarStyle;
@property (nonatomic) BOOL firstLoadRequest;
@property (nonatomic) long long disableOtherGesturesType;
@property (nonatomic) BOOL otherGesturesDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setWebViewDisableOtherGesturesBlock:(id /* block */)a0;
+ (id)appearance;
+ (void)initialize;

- (id)initWithURLStrinng:(id)a0 title:(id)a1 configBlock:(id /* block */)a2;
- (void)setH5BackIsExit:(BOOL)a0;
- (void)notifyDisableGesture:(long long)a0;
- (void)addDisableOtherGesturesType:(long long)a0;
- (void)removeDisableOtherGesturesType:(long long)a0;
- (void)finishProgressView;
- (void)setWebviewFailNavigation:(id)a0 withError:(id)a1;
- (void)handleWebviewGoBack:(id)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)setStatusBarStyle:(long long)a0;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)gestureRecognizer:(id)a0 shouldReceivePress:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)appearance;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)handleDismiss:(id)a0;

@end
