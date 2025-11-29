@class NSString, NSArray, NSURLSession, NSURL, NSOperationQueue, NSDictionary, NSMutableDictionary, NSMutableArray;
@protocol HMDLoadUploadBackgroundSessionProtocol;

@interface HMDLoadUploadBackgroundSession : NSObject <NSURLSessionDataDelegate> {
    BOOL _previousTaskQueried;
    NSArray *_previousUploading;
    id<HMDLoadUploadBackgroundSessionProtocol> _delegate;
    NSURL *_uploadURL;
    NSDictionary *_headFields;
    NSDictionary *_queryItems;
    NSOperationQueue *_queue;
    NSURLSession *_session;
    NSString *_loadPrepared;
    NSMutableDictionary *_dataDictionary;
    NSMutableArray *_previousUploadingOnQueue;
    NSMutableArray *_retriedUploadingOnQueue;
    NSArray *_previousUploadingAsync;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithContext:(id)a0 delegate:(id)a1;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)_flex_swizzle_b4a76ac2_URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_flex_swizzle_a517a217_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)previousUploadingTask;
- (void)appendHeaderField:(id)a0;
- (id)requestForFileName:(id)a0;
- (BOOL)logTaskReturnPrevious:(id)a0;
- (void)uploadSuccess:(id)a0;
- (void)uploadFailed:(id)a0 needRetry:(BOOL)a1;
- (void)taskFinished:(id)a0 success:(BOOL)a1 responseData:(id)a2;
- (void)uploadPath:(id)a0 name:(id)a1;
- (void)markAsFinish;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)initWithContext:(id)a0 delegate:(id)a1;

@end
