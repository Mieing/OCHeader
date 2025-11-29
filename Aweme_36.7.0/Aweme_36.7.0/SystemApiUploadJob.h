@class NSURLSession, NSFileManager, NSString, NSURLSessionUploadTask, SliceInfo, NSData, NSObject;
@protocol OS_dispatch_source;

@interface SystemApiUploadJob : NetJob <NSURLSessionDelegate, NSURLSessionTaskDelegate>

@property (retain) NSURLSession *backgroundSession;
@property (retain) NSURLSessionUploadTask *uploadTask;
@property (retain) SliceInfo *sliceInfo;
@property long long lastStep;
@property (copy) id /* block */ resultBlock;
@property long long state;
@property (retain, nonatomic) NSFileManager *fileManager;
@property BOOL isCancel;
@property BOOL isJobInvalid;
@property (retain) NSData *responseBody;
@property (retain) NSObject<OS_dispatch_source> *cancelTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_973d5a2e_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_269cdee5_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)initSession;
- (void)setHttpHeaderField:(id)a0;
- (void)clearBackgroundResource;
- (BOOL)isUploadFinished;
- (void)stopCancelTimer;
- (void)startCancelTimer;
- (void)startWithInfo:(id)a0 jobResultBlock:(id /* block */)a1 progressBlock:(id /* block */)a2 isCompletedMsg:(BOOL)a3;
- (void)doLoop:(long long)a0 serverResponse:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (void)reset;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)cancel;

@end
