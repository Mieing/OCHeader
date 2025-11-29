@class NSError, NSString;

@interface AWEEnterpriseWebViewController : AWEWebViewController

@property (nonatomic) BOOL isPreRender;
@property (nonatomic) long long startRenderTime;
@property (nonatomic) long long startLoadTime;
@property (nonatomic) long long finishLoadTime;
@property (nonatomic) long long startPushTime;
@property (nonatomic) long long endPushTime;
@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) NSString *preRenderScene;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)falconSchemeHandlerEnable;
- (BOOL)getFalconWebIntercept;
- (void)renderFinish;
- (void)preRenderTrack;
- (void)noticeFEWebDidShow;
- (void)beforPush;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (void)webViewDidStartLoad:(id)a0;
- (void)webViewDidFinishLoad:(id)a0;

@end
