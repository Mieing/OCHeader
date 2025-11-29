@interface JSONHTTPClient : NSObject

+ (void)setRequestContentType:(id)a0;
+ (void)getJSONFromURLWithString:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)postJSONFromURLWithString:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)postJSONFromURLWithString:(id)a0 bodyString:(id)a1 completion:(id /* block */)a2;
+ (id)contentTypeForRequestString:(id)a0;
+ (id)urlEncode:(id)a0;
+ (void)requestDataFromURL:(id)a0 method:(id)a1 requestBody:(id)a2 headers:(id)a3 handler:(id /* block */)a4;
+ (void)JSONFromURLWithString:(id)a0 method:(id)a1 params:(id)a2 orBodyString:(id)a3 headers:(id)a4 completion:(id /* block */)a5;
+ (void)JSONFromURLWithString:(id)a0 method:(id)a1 params:(id)a2 orBodyData:(id)a3 headers:(id)a4 completion:(id /* block */)a5;
+ (void)requestDataFromURL:(id)a0 method:(id)a1 params:(id)a2 headers:(id)a3 handler:(id /* block */)a4;
+ (void)JSONFromURLWithString:(id)a0 method:(id)a1 params:(id)a2 orBodyString:(id)a3 completion:(id /* block */)a4;
+ (void)setDefaultTextEncoding:(unsigned long long)a0;
+ (void)getJSONFromURLWithString:(id)a0 completion:(id /* block */)a1;
+ (void)postJSONFromURLWithString:(id)a0 bodyData:(id)a1 completion:(id /* block */)a2;
+ (void)setCachingPolicy:(unsigned long long)a0;
+ (void)initialize;
+ (void)setTimeoutInSeconds:(int)a0;
+ (id)requestHeaders;

@end
