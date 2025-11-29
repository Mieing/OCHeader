@class NSString, WKWebView;
@protocol BDWebURLSchemeTask;

@interface BDWebViewURLProtocolClient : NSObject <NSURLProtocolClient>

@property (weak, nonatomic) id<BDWebURLSchemeTask> schemeTask;
@property (weak, nonatomic) WKWebView *webView;
@property (nonatomic) BOOL isStopped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWebView:(id)a0 schemeTask:(id)a1;
- (void).cxx_destruct;
- (void)URLProtocol:(id)a0 wasRedirectedToRequest:(id)a1 redirectResponse:(id)a2;
- (void)URLProtocol:(id)a0 cachedResponseIsValid:(id)a1;
- (void)URLProtocol:(id)a0 didReceiveResponse:(id)a1 cacheStoragePolicy:(unsigned long long)a2;
- (void)URLProtocol:(id)a0 didLoadData:(id)a1;
- (void)URLProtocolDidFinishLoading:(id)a0;
- (void)URLProtocol:(id)a0 didFailWithError:(id)a1;
- (void)URLProtocol:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)URLProtocol:(id)a0 didCancelAuthenticationChallenge:(id)a1;

@end
