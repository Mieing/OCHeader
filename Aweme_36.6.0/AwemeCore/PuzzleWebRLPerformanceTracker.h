@class PuzzleWebRLPerformanceTrackData, WKWebView, NSString;

@interface PuzzleWebRLPerformanceTracker : NSObject <BDWebInterceptorMonitor, IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) PuzzleWebRLPerformanceTrackData *trackData;
@property (weak, nonatomic) WKWebView *webview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupPerfTrackerForWebView:(id)a0;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidStartLoading;
- (void)bdw_URLSchemeTask:(id)a0 didReceiveResponse:(id)a1;
- (void)bdw_URLSchemeTask:(id)a0 didLoadData:(id)a1;
- (void)bdw_URLSchemeTaskDidFinishLoading:(id)a0;
- (void)bdw_URLSchemeTask:(id)a0 didFailWithError:(id)a1;
- (void)bdw_URLSchemeTask:(id)a0 didPerformRedirection:(id)a1 newRequest:(id)a2;
- (void)bdw_URLProtocolTaskDidFinishLoading:(id)a0;
- (void)bdw_URLProtocolTask:(id)a0 didFailWithError:(id)a1;
- (void)reportWithOriginDict:(id)a0 webview:(id)a1;
- (id)initWithWebView:(id)a0 context:(id)a1;
- (void)recordFromSchemeTask:(id)a0;
- (void)recordFromProtocolTask:(id)a0;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;

@end
