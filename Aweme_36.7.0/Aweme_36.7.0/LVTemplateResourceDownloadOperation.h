@class NSString, NSURLSessionTask, NSURLSession;

@interface LVTemplateResourceDownloadOperation : NSOperation <NSURLSessionDataDelegate>

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSURLSession *downloadSession;
@property (retain, nonatomic) NSURLSessionTask *downloadTask;
@property (readonly, copy, nonatomic) NSString *resourceUrlString;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *md5;
@property (readonly, copy, nonatomic) NSString *operationID;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_flex_swizzle_93bb9a7_URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)_flex_swizzle_35a4b562_URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_b9e9902f_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)starDownloadRequest;
- (id)initWithTemplateSourceURLString:(id)a0 md5:(id)a1 filePath:(id)a2;
- (void)removeOldReourceAfterFinishDownload;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (BOOL)isAsynchronous;
- (void)start;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)cancel;
- (void)finishOperation;

@end
