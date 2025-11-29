@interface TTDefaultHTTPRequestSerializer : TTHTTPRequestSerializerBase

+ (id)serializer;

- (id)URLRequestWithURL:(id)a0 headerField:(id)a1 params:(id)a2 method:(id)a3 constructingBodyBlock:(id /* block */)a4 commonParams:(id)a5;
- (id)URLRequestWithURL:(id)a0 params:(id)a1 method:(id)a2 constructingBodyBlock:(id /* block */)a3 commonParams:(id)a4;
- (id)URLRequestWithRequestModel:(id)a0 commonParams:(id)a1;
- (id)lucky_buildParamsWithParams:(id)a0 requestCommonParams:(id)a1;
- (id)lucky_buildCommonParamsWithCommonParams:(id)a0;
- (void)lucky_trackWithURL:(id)a0 commonParams:(id)a1;
- (id)_transferedURL:(id)a0;
- (void)buildRequestHeaders:(id)a0;
- (void)applyCookieHeader:(id)a0;
- (id)URLRequestWithURL:(id)a0 headerField:(id)a1 params:(id)a2 method:(id)a3 constructingBodyBlock:(id /* block */)a4 commonParams:(id)a5 bypassXWwwFormUrlencoded:(BOOL)a6;

@end
