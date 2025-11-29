@class NSURLSession, NSString, NSURLSessionDownloadTask, NSMutableArray;

@interface DTFDownloadManager : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionDownloadTask *downloadTask;
@property (copy, nonatomic) NSString *downloadPath;
@property (copy, nonatomic) NSString *fileName;
@property (nonatomic) BOOL isDownloading;
@property (retain, nonatomic) NSMutableArray *blockList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_flex_swizzle_866f741_URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_5c39cb02_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (id)initWithDownloadPath:(id)a0 fileName:(id)a1;
- (void)startDownloadWithURL:(id)a0 completion:(id /* block */)a1;
- (void)finishAndCallbackWithResult:(id)a0;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
