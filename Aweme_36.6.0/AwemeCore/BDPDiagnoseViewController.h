@class UIProgressView, NSString, BDPDiagnoseLoaingView, BDPUniqueID, BDPBridgeWebView;

@interface BDPDiagnoseViewController : BDPViewController <BDPWebViewImplInterface, WKNavigationDelegate>

@property (retain, nonatomic) BDPBridgeWebView *webView;
@property (retain, nonatomic) UIProgressView *progressView;
@property (retain, nonatomic) BDPDiagnoseLoaingView *loadingView;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *gatherTimestampStr;
@property (nonatomic) BOOL diagnoseLogHasRecorded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callbackInvoke:(long long)a0 data:(id)a1;
- (void)registerMessageHandler;
- (id)initWithUniqueID:(id)a0 pagePath:(id)a1;
- (void)webView:(id)a0 invoke:(id)a1 completion:(id /* block */)a2;
- (void)gatherDiagnoseInfo;
- (void)getAndUploadDiagnoseLog:(id /* block */)a0;
- (void)recordDiagnoseLog:(id /* block */)a0;
- (id)basicInfo:(id)a0;
- (void)uploadDiagnoseLog:(id)a0 completionHandler:(id /* block */)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)viewDidLoad;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)loadData;
- (void)setupSubviews;

@end
