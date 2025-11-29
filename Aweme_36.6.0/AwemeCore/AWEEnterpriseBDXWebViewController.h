@class NSError, NSString;

@interface AWEEnterpriseBDXWebViewController : AWEBDXWebViewController

@property (nonatomic) BOOL isPreRender;
@property (nonatomic) BOOL hasReportRenderFinished;
@property (nonatomic) long long startRenderTime;
@property (nonatomic) long long startLoadTime;
@property (nonatomic) long long finishLoadTime;
@property (nonatomic) long long startPushTime;
@property (nonatomic) long long endPushTime;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *preRenderScene;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidStartLoading:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (id)initWithRequestURL:(id)a0 config:(id)a1 context:(id)a2;
- (BOOL)falconSchemeHandlerEnable;
- (void)beforePush;
- (void)renderFinish;
- (void)preRenderTrack;
- (void)noticeFEWebDidShow;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
