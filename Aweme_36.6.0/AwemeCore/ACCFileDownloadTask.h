@class NSURLSession, NSArray, NSDictionary, NSString, NSError;

@interface ACCFileDownloadTask : NSOperation <NSURLSessionDownloadDelegate> {
    BOOL executing;
    BOOL finished;
}

@property (copy, nonatomic) NSArray *requests;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSURLSession *downloadSession;
@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) NSDictionary *extraInfoDict;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_flex_swizzle_a8f7bfee_URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)_flex_swizzle_61007635_URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_8ab1b4c5_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)downloadRequestAtIndex:(unsigned long long)a0;
- (id)initWithURLRequests:(id)a0 filePath:(id)a1;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (BOOL)isAsynchronous;
- (void)start;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (BOOL)isExecuting;
- (void)main;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (BOOL)isFinished;

@end
