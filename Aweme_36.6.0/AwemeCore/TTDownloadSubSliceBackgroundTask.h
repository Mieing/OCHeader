@class NSURLSessionDownloadTask, NSString, NSURLSession;

@interface TTDownloadSubSliceBackgroundTask : TTDownloadSliceTask <NSURLSessionDelegate, NSURLSessionDownloadDelegate>

@property (retain) NSURLSession *backgroundSession;
@property (retain) NSURLSessionDownloadTask *task;
@property (copy) NSString *urlKey;
@property (copy) NSString *secondUrl;
@property (copy) NSString *sliceStorageDir;
@property long long currRangeEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_flex_swizzle_f36e97c9_URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)_flex_swizzle_abe52515_URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_f22c3801_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (id)getUrl;
- (void)initSession;
- (void)setHttpHeaderField:(id)a0;
- (id)getTempFilePath:(id)a0;
- (BOOL)moveTempToTaskDir:(id)a0 to:(id)a1;
- (void)clearReferenceCount;
- (id)initWhithSliceConfig:(id)a0 downloadTask:(id)a1;
- (void)setInvaildForBgTask;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didResumeAtOffset:(long long)a2 expectedTotalBytes:(long long)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)start;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)cancel;

@end
