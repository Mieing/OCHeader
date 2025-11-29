@class NSString, WKWebView, IESForestRequestOperation, IESForestKit;
@protocol BDWebURLSchemeTask;

@interface IESForestWebSchemeTaskHandler : NSObject <BDWebURLSchemeTaskHandler>

@property (retain, nonatomic) id<BDWebURLSchemeTask> schemeTask;
@property (retain, nonatomic) IESForestRequestOperation *operation;
@property (nonatomic) BOOL isStopped;
@property (retain, nonatomic) IESForestKit *forestKit;
@property (weak, nonatomic) WKWebView *webView;
@property (nonatomic) long long resourceScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)bdw_canHandleRequest:(id)a0;
+ (BOOL)bdw_canHandleRequest:(id)a0 webview:(id)a1;
+ (BOOL)p_newBdw_canHandleRequest:(id)a0 webview:(id)a1;
+ (BOOL)p_oldBdw_canHandleRequest:(id)a0 webview:(id)a1;
+ (id)constructForestRequestParamsWithWebView:(id)a0 request:(id)a1 isPreCheck:(BOOL)a2 willRecordForMainFrameModel:(id)a3;
+ (void)p_syncCookieFromWKToNSIfNeeded:(id)a0 webView:(id)a1 willRecordForMainFrameModel:(id)a2 forestRequest:(id)a3;
+ (BOOL)p_isMainDocumentURL:(id)a0 webViewUrlString:(id)a1 willRecordForMainFrameModel:(id)a2 optimizeIsMainDocumentURL:(id)a3;
+ (void)fixImageShowHalfProblem:(id)a0 request:(id)a1;
+ (BOOL)isWebImageRequest:(id)a0;

- (id)initWithWebView:(id)a0 schemeTask:(id)a1;
- (void)bdw_startURLSchemeTask;
- (void)bdw_stopURLSchemeTask;
- (BOOL)shouldSkipSSLCertificateError;
- (void)handleSSLError:(id)a0 WithComplete:(id /* block */)a1;
- (void)notifyWebViewDidFailWithError:(id)a0;
- (void)bdw_streamStartURLSchemeTask:(id)a0;
- (void)bdw_nonStreamStartURLSchemeTask:(id)a0;
- (BOOL)isSSLCertificateErrorHandled:(id)a0 response:(id)a1 isStreamLoad:(BOOL)a2;
- (void)processMonitorDataWithResponse:(id)a0;
- (void)notifyWebViewDidPerformRedirection:(id)a0 newRequest:(id)a1;
- (void)notifyWebViewDidReceiveResponse:(id)a0;
- (void)notifyWebViewDidLoadData:(id)a0;
- (void)notifyWebViewDidFinishLoading;
- (BOOL)needAbort;
- (void).cxx_destruct;

@end
