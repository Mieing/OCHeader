@class NSString, NSMutableDictionary, NSMutableData, NSURLConnection;
@protocol TencentRequestDelegate;

@interface TencentRequest : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>

@property (weak, nonatomic) id<TencentRequestDelegate> delegate;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *httpMethod;
@property (readonly, nonatomic) NSMutableDictionary *params;
@property (readonly, nonatomic) NSURLConnection *connection;
@property (readonly, nonatomic) NSMutableData *responseText;
@property (readonly, nonatomic) NSMutableDictionary *httpHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializeURL:(id)a0 params:(id)a1 httpMethod:(id)a2;
+ (id)getRequestWithParams:(id)a0 httpMethod:(id)a1 delegate:(id)a2 requestURL:(id)a3;
+ (id)serializeURL:(id)a0 params:(id)a1;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)_flex_swizzle_8b8f1f6f_connection:(id)a0 didFailWithError:(id)a1;
- (void)_flex_swizzle_4745f64d_connectionDidFinishLoading:(id)a0;
- (void)_flex_swizzle_536f22ef_connection:(id)a0 didReceiveResponse:(id)a1;
- (void)_flex_swizzle_315d5b07_connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)utfAppendBody:(id)a0 data:(id)a1;
- (id)formError:(long long)a0 userInfo:(id)a1;
- (id)parseJsonResponse:(id)a0 error:(id *)a1;
- (id)generatePostBody;
- (id)generateOtherPostBody;
- (void)connectWithRequest:(id)a0;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (BOOL)loading;
- (void)connect;
- (void)failWithError:(id)a0;
- (void)dealloc;
- (void)cancel;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void)connection:(id)a0 didWriteData:(long long)a1 totalBytesWritten:(long long)a2 expectedTotalBytes:(long long)a3;
- (id)connection:(id)a0 willCacheResponse:(id)a1;
- (void)handleResponseData:(id)a0;

@end
