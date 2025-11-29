@class NSMutableData, NSHTTPURLResponse, NSURLConnection;

@interface UPNetworkOperation : NSObject

@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSMutableData *mutableData;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSURLConnection *connection;

+ (id)getScanConfig:(id)a0;
+ (id)getConfig:(id)a0 encTn:(id)a1;
+ (id)sendCallApp:(id)a0 encTn:(id)a1 schema:(id)a2 universalLink:(id)a3;
+ (id)uuidString;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)_flex_swizzle_7970a9a9_connection:(id)a0 didFailWithError:(id)a1;
- (void)_flex_swizzle_f93309a8_connectionDidFinishLoading:(id)a0;
- (void)_flex_swizzle_fd65cb97_connection:(id)a0 didReceiveResponse:(id)a1;
- (void)_flex_swizzle_c9fcf4e5_connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)setCompletionBlockWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;

@end
