@class NSString, NSURL, NSMutableData, NSURLRequest, NSObject;
@protocol OS_dispatch_queue, AWEVideoDownloadNetworkUtility, AWEVideoCacheRequestTaskDelegate;

@interface AWEVideoCacheRequestTask : NSObject

@property (retain, nonatomic) NSURL *requestURL;
@property (retain, nonatomic) NSURLRequest *videoRequest;
@property (copy, nonatomic) NSString *requestURLKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } requestRange;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long memCacheOffset;
@property (retain, nonatomic) NSMutableData *dataCache;
@property (retain, nonatomic) id<AWEVideoDownloadNetworkUtility> network;
@property (weak, nonatomic) id<AWEVideoCacheRequestTaskDelegate> delegate;
@property (nonatomic) unsigned long long fileLength;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) unsigned long long cacheLength;

- (void)didReceiveResponse:(id)a0 completion:(id /* block */)a1;
- (void)willPerformHTTPRedirection:(id)a0 newRequest:(id)a1;
- (void)cancelNetworkRequest;
- (BOOL)startTaskWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 priority:(float)a1;
- (id)initWithURL:(id)a0 cacheURL:(id)a1 queue:(id)a2;
- (void)__didReceiveResponse:(id)a0 completion:(id /* block */)a1;
- (void)__didCompleteWithError:(id)a0;
- (void)_doVideoDownloadDelegate;
- (void)__didReceiveData:(id)a0;
- (void)syncDataWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)didReceiveData:(id)a0;
- (id)initWithURL:(id)a0 queue:(id)a1;
- (void)didCompleteWithError:(id)a0;

@end
