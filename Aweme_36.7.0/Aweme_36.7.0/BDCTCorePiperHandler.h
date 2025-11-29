@class NSString, WKWebView, BDCTImageManager, BDCTBridgeImp, BDCTFlow;

@interface BDCTCorePiperHandler : NSObject <WKNavigationDelegate, UIScrollViewDelegate, BDCTEventDelegate, BDCTPiperHandlerProtocol>

@property (retain, nonatomic) BDCTImageManager *imageManager;
@property (retain, nonatomic) BDCTBridgeImp *bridgeImp;
@property (weak, nonatomic) WKWebView *webView;
@property (weak, nonatomic) BDCTFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsbCallbackResultWithParams:(id)a0 error:(id)a1;

- (void)fireEvent:(id)a0 params:(id)a1;
- (void)registerStartWHCert;
- (BOOL)isRuningLiveCert;
- (void)setIsRuningLiveCert:(BOOL)a0;
- (void)registerAddEvtListener;
- (void)registerRemoveEvtListener;
- (void)registerSendEvent;
- (void)registerHandlerWithWebView:(id)a0;
- (void)registerSendLog;
- (void)registerWebEvent;
- (void)registerUploadEvent;
- (void)registerSetCertStatusEvent;
- (void)registerOpenLiveCert;
- (void)registerOpenVideoCert;
- (void)doFaceLivenessWithLivenessType:(id)a0 piperParams:(id)a1 jsbCallback:(id /* block */)a2;
- (void)registerAppFetch;
- (void)registerDoRequest;
- (void)registerAppUpload;
- (void)registerTakePhoto;
- (void)registerUploadPhoto;
- (void)registerOCRV2;
- (void)registerTakeOCRPhoto;
- (void)registerManualVerify;
- (void)registerPreManualVerify;
- (void)registerOpenVideoRecord;
- (void)registerDialogShow;
- (void)registerShowLoading;
- (void)registerHideLoading;
- (void)registeJSBWithName:(id)a0 handler:(id /* block */)a1;
- (void)registerOpenPage;
- (void)registerClosePage;
- (void)registerOpenLoginPage;
- (void)registerlaunchFlow;
- (void)registerOpenAndClose;
- (void)registerSwitchLanguage;
- (void)registerStartNFC;
- (void)registerStopNFC;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;

@end
