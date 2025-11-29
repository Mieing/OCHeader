@class NSError, NSLock, NSString, NSURLSession, NSURLResponse, NSURLSessionUploadTask, NSObject, NSMutableData, NSURLSessionTask;
@protocol OS_dispatch_semaphore;

@interface BDiOSUploadTask : NSObject <NSURLSessionDelegate> {
    NSObject<OS_dispatch_semaphore> *_mCond;
    NSObject<OS_dispatch_semaphore> *_mLock;
}

@property (retain, nonatomic) NSURLSessionUploadTask *uploadTask;
@property (retain, nonatomic) NSURLSessionTask *dataTask;
@property (copy, nonatomic) id /* block */ taskCompletion;
@property (retain, nonatomic) NSURLResponse *response;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableData *mutableData;
@property (nonatomic) BOOL cancel;
@property (retain, nonatomic) NSURLSession *backgroundSession;
@property (copy, nonatomic) id /* block */ asynTaskCompletion;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)MD5WithData:(id)a0;
+ (id)getFilePathDir;
+ (long long)getFileSize:(id)a0;
+ (BOOL)createFile:(id)a0 data:(id)a1;
+ (long long)fileSizeByfilePath:(id)a0;
+ (void)removeFilePath:(id)a0;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)_flex_swizzle_f9514511_URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_39f9cd5e_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_e3b04c2a_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_9bf109a4_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)initSessionMd5:(id)a0 readTimeout:(double)a1 writeTimeout:(double)a2;
- (void)asynSendRequest:(id)a0 readTimeout:(double)a1 writeTimeout:(double)a2 completion:(id /* block */)a3;
- (void)asynSendRequest:(id)a0 readTimeout:(double)a1 writeTimeout:(double)a2 data:(id)a3 completion:(id /* block */)a4;
- (void)synSendRequest:(id)a0 readTimeout:(double)a1 writeTimeout:(double)a2 completion:(id /* block */)a3;
- (void)synSendRequest:(id)a0 readTimeout:(double)a1 writeTimeout:(double)a2 data:(id)a3 completion:(id /* block */)a4;
- (void)synSendRequest:(id)a0 readTimeout:(double)a1 writeTimeout:(double)a2 filePath:(id)a3 completion:(id /* block */)a4;
- (void)URLSession:(id)a0 taskIsWaitingForConnectivity:(id)a1;
- (void)URLSession:(id)a0 dataTask:(id)a1 willCacheResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeStreamTask:(id)a2;
- (id)init;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)cancelTask;

@end
