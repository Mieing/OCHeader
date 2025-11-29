@class NSString;

@interface RTVHTTPRequestSerializer : TTHTTPRequestSerializerBase

@property (copy, nonatomic) NSString *defaultUserAgent;

+ (id)serializer;

- (id)URLRequestWithURL:(id)a0 headerField:(id)a1 params:(id)a2 method:(id)a3 constructingBodyBlock:(id /* block */)a4 commonParams:(id)a5;
- (id)URLRequestWithURL:(id)a0 params:(id)a1 method:(id)a2 constructingBodyBlock:(id /* block */)a3 commonParams:(id)a4;
- (id)URLRequestWithRequestModel:(id)a0 commonParams:(id)a1;
- (id)_transferedURL:(id)a0;
- (id)_defaultUserAgentString;
- (void)_buildRequestHeaders:(id)a0 parameters:(id)a1 oriURL:(id)a2;
- (void)_applyCookieHeader:(id)a0 oriURL:(id)a1;
- (void)_applySessionHeader:(id)a0;
- (void)_applyUserAgentHeader:(id)a0;
- (void)_applyOtherHeader:(id)a0;
- (id)_cookieHeaderStringWithCookies:(id)a0;
- (void).cxx_destruct;

@end
