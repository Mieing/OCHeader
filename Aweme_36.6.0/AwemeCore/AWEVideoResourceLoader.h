@class NSString, AWEVideoCachePlayTask, NSURL, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AWEVideoPlayerInternalDelegate, AWEVideoResourceLoaderDelegate;

@interface AWEVideoResourceLoader : NSObject <AWEVideoCacheRequestTaskDelegate, AVAssetResourceLoaderDelegate>

@property (retain, nonatomic) NSURL *requestURL;
@property (copy, nonatomic) NSString *requestURLKey;
@property (retain, nonatomic) NSMutableArray *requestList;
@property (retain, nonatomic) AWEVideoCachePlayTask *playTask;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (nonatomic) BOOL stopped;
@property (weak, nonatomic) id<AWEVideoPlayerInternalDelegate> internalDelegate;
@property (nonatomic) long long errorTryCount;
@property (weak, nonatomic) id<AWEVideoResourceLoaderDelegate> delegate;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long errorStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceLoaderWithURL:(id)a0 queue:(id)a1 internalDelegate:(id)a2;

- (id)initWithURL:(id)a0 queue:(id)a1 internalDelegate:(id)a2;
- (void)requestTask:(id)a0 didReceiveData:(id)a1;
- (void)requestTask:(id)a0 didReceiveResponse:(id)a1;
- (void)requestTask:(id)a0 didFailWithError:(id)a1;
- (void)requestTaskDidFinishLoading:(id)a0;
- (id)dataRequestDescription:(id)a0;
- (void)addLoadingRequest:(id)a0;
- (void)removeLoadingRequest:(id)a0;
- (void)processRequestList;
- (BOOL)requestedDataCached:(id)a0;
- (void)finishLoadingWithLoadingRequest:(id)a0;
- (void)getCacheLengthWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void)stopLoading;
- (void)resourceLoader:(id)a0 didCancelLoadingRequest:(id)a1;

@end
