@class NSString, NSMutableDictionary;

@interface WebpUrlSchemeHandler : NSObject <WKURLSchemeHandler, NSURLProtocolClient>

@property (retain, nonatomic) NSMutableDictionary *taskDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)installSchemeTo:(id)a0;

- (id)init;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)URLProtocol:(id)a0 cachedResponseIsValid:(id)a1;
- (void)URLProtocol:(id)a0 didCancelAuthenticationChallenge:(id)a1;
- (void)URLProtocol:(id)a0 didFailWithError:(id)a1;
- (void)URLProtocol:(id)a0 didLoadData:(id)a1;
- (void)URLProtocol:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)URLProtocol:(id)a0 didReceiveResponse:(id)a1 cacheStoragePolicy:(unsigned long long)a2;
- (void)URLProtocol:(id)a0 wasRedirectedToRequest:(id)a1 redirectResponse:(id)a2;
- (void)URLProtocolDidFinishLoading:(id)a0;
- (void).cxx_destruct;

@end
