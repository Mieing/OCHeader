@class NSString, WKWebView;

@interface AWEAdLightLandingWebViewInterceptorHandler : NSObject <BDWebInterceptorHandler>

@property (weak, nonatomic) WKWebView *wkWebView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bdw_URLSchemeTask:(id)a0 didLoadData:(id)a1;
- (void)bdw_URLSchemeTaskDidFinishLoading:(id)a0;
- (void)bindWebView:(id)a0;
- (void).cxx_destruct;
- (BOOL)canHandleRequest:(id)a0;

@end
