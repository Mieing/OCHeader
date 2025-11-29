@class NSString, NSDictionary, NSURLSessionDataTask, NSMutableData;
@protocol WBHttpRequestDelegate;

@interface WBHttpRequest : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {
    NSURLSessionDataTask *sessionDataTask;
    NSMutableData *responseData;
}

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *httpMethod;
@property (retain, nonatomic) NSDictionary *params;
@property (weak, nonatomic) id<WBHttpRequestDelegate> delegate;
@property (retain, nonatomic) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithAccessToken:(id)a0 url:(id)a1 httpMethod:(id)a2 params:(id)a3 delegate:(id)a4 withTag:(id)a5 isGuest:(BOOL)a6;
+ (void)cleanSubCookies;
+ (id)requestWithAccessToken:(id)a0 url:(id)a1 httpMethod:(id)a2 params:(id)a3 queue:(id)a4 withCompletionHandler:(id /* block */)a5;
+ (id)requestWithURL:(id)a0 httpMethod:(id)a1 params:(id)a2 queue:(id)a3 withCompletionHandler:(id /* block */)a4;
+ (id)requestWithAccessToken:(id)a0 url:(id)a1 httpMethod:(id)a2 params:(id)a3 delegate:(id)a4 withTag:(id)a5;
+ (id)requestWithAccessToken:(id)a0 url:(id)a1 httpMethod:(id)a2 params:(id)a3 queue:(id)a4 withCompletionHandler:(id /* block */)a5 isGuest:(BOOL)a6;
+ (id)requestWithURL:(id)a0 httpMethod:(id)a1 params:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (id)requestWithURL:(id)a0 httpMethod:(id)a1 params:(id)a2 delegate:(id)a3 withTag:(id)a4;
+ (id)serializeURL:(id)a0 params:(id)a1 httpMethod:(id)a2;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_8e3db013_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_flex_swizzle_531bd4ba_URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_d7269c2c_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_dfd62d69_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connectOnQueue:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithURL:(id)a0 httpMethod:(id)a1 params:(id)a2 queue:(id)a3 withCompletionHandler:(id /* block */)a4;
- (id)initWithURL:(id)a0 httpMethod:(id)a1 params:(id)a2 withCompletionHandler:(id /* block */)a3;
- (id)serializeParams:(id)a0;
- (id)initWithURL:(id)a0 httpMethod:(id)a1 params:(id)a2 delegate:(id)a3 withTag:(id)a4;
- (void)appendUTF8Body:(id)a0 dataString:(id)a1;
- (void)setHttpHeaderForRequest:(id)a0;
- (id)postBodyHasRawData:(BOOL *)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 willCacheResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)disconnect;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)connect;
- (void)connectWithCompletionHandler:(id /* block */)a0;
- (void)failedWithError:(id)a0;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)handleResponseData:(id)a0;

@end
