@class NSString, WKWebView;

@interface BDPWebViewComponentSchemeTaskHandler : BDWebViewSchemeTaskHandler <BDWebURLSchemeTaskLifeCycleProtocol>

@property (weak, nonatomic) WKWebView *tempWebView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)bdw_canHandleRequest:(id)a0;

- (id)initWithWebView:(id)a0 schemeTask:(id)a1;
- (void)URLSchemeTaskDidFinishLoading:(id)a0;
- (void)URLSchemeTask:(id)a0 didFailWithError:(id)a1;
- (id)configHttpTask:(id)a0;
- (void).cxx_destruct;

@end
