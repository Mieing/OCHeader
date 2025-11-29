@class NSString, NSProgress, NSURL, NSMutableData, BU_AFURLSessionManager;

@interface BU_AFURLSessionManagerTaskDelegate : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>

@property (weak, nonatomic) BU_AFURLSessionManager *manager;
@property (retain, nonatomic) NSMutableData *mutableData;
@property (retain, nonatomic) NSProgress *uploadProgress;
@property (retain, nonatomic) NSProgress *downloadProgress;
@property (copy, nonatomic) NSURL *downloadFileURL;
@property (copy, nonatomic) id /* block */ downloadTaskDidFinishDownloading;
@property (copy, nonatomic) id /* block */ uploadProgressBlock;
@property (copy, nonatomic) id /* block */ downloadProgressBlock;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_flex_swizzle_91b328e7_URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)_flex_swizzle_cf2fc9b9_URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_33bef166_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_ac465105_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didResumeAtOffset:(long long)a2 expectedTotalBytes:(long long)a3;
- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
