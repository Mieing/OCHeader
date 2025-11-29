@class NSString, AWEGeneralSearchModel, IESWKWebView;
@protocol AWEModernFeedCellContext;

@interface AWEGeneralSearchH5CellController : UIViewController <WKNavigationDelegate, IESWebViewCommonDelegate, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) IESWKWebView *webView;
@property (retain, nonatomic) AWEGeneralSearchModel *model;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (void)prepareWithURL:(id)a0;
+ (id)preparedWebViewHash;
+ (id)epidemicURL;
+ (id)takeWebViewWithURL:(id)a0;
+ (void)__awe__codeRunnerRun_76;
+ (void)destoryWithURL:(id)a0;

- (void)didEndShowing;
- (void)didStartShowing;
- (void)setupControl;
- (void)sendInitEvent;
- (void)setupWebViewIfNeeded:(id)a0;
- (void)didRecivedContainerDidDisappearNotification:(id)a0;
- (void)didRecivedContainerWillAppearNotification:(id)a0;
- (void)updateHeightToZero;
- (void)sendLifeCycleEventType:(id)a0;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (void)updateWithModel:(id)a0;

@end
