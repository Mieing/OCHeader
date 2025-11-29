@class NSRecursiveLock, NSString, NSMutableDictionary, TPWorkerQueue, TPDownloadParamData, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, TPAssetResourceLoaderDelegate;

@interface TPAssetResourceLoader : NSObject <TPAssetResourceLoadingRequestDelegate, TPAssetResourceLoadingDataRequestDelegate> {
    struct TPAssetProxyLoaderCallback { void /* function */ **x0; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x1; id x2; } *_proxyLoaderCallback;
}

@property (nonatomic) int taskId;
@property (nonatomic) int taskSequence;
@property (nonatomic) BOOL isOnSwitching;
@property (nonatomic) long long definitionId;
@property (retain, nonatomic) NSString *cacheDataDir;
@property (retain, nonatomic) NSRecursiveLock *recursiveLock;
@property (retain, nonatomic) NSMutableArray *loadingRequests;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) TPWorkerQueue *dataWriteQueue;
@property (retain, nonatomic) TPDownloadParamData *downloadParamData;
@property (retain, nonatomic) NSMutableDictionary *dicFileInfo;
@property (retain, nonatomic) NSMutableDictionary *dicDataRanges;
@property (retain, nonatomic) NSMutableArray *arrPendingMsg;
@property (nonatomic) long long lastLoadingRequestGroupTimestamp;
@property (nonatomic) long long currentLoadingRequestCount;
@property (readonly, weak, nonatomic) id<TPAssetResourceLoaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServiceType:(int)a0;
- (id)getFileInfoWithFileName:(id)a0;
- (BOOL)isUseAssetResourceLoader;
- (id)generateInformationRequest;
- (int)getDataReadyLenWithFileName:(id)a0 fileId:(int)a1 offset:(unsigned long long)a2;
- (int)getDataWithFileName:(id)a0 data:(char *)a1 offset:(long long)a2 size:(int)a3;
- (void)onProxyStart:(int)a0;
- (long long)getRequestLenWithFileName:(id)a0 start:(long long)a1 end:(long long)a2;
- (int)onReceiveRequestMsg:(long long)a0 end:(long long)a1 fileName:(id)a2;
- (int)onReceiveRequestMsg:(long long)a0 end:(long long)a1 fileName:(id)a2 requestMeta:(BOOL)a3;
- (id)getExistContainRequestWithOffset:(long long)a0 length:(long long)a1;
- (id)getCacheRangeInfoWithMsg:(id)a0;
- (id)getMergeLoadingRequest:(long long)a0 length:(long long)a1;
- (void)startRequestWithMsg:(id)a0;
- (void)cancelLoadingRequestWithNum:(int)a0;
- (void *)getAssetResourceloaderProxyCallback;
- (void *)getAssetResourceLoaderProxyCallback;
- (void)setVideoInfo:(id)a0;
- (long long)getDefinitionId;
- (int)getTaskId;
- (void)onStop;
- (void)dealloc;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)onLoadingRequestFinished:(id)a0;
- (void)onGetContentInfo:(id)a0;
- (void)onUpdateDataWithOffset:(unsigned long long)a0 length:(unsigned long long)a1 fileName:(id)a2;
- (BOOL)isOnSwitching;
- (void)setIsOnSwitching:(BOOL)a0;
- (void)setDefinitionId:(long long)a0;
- (void).cxx_destruct;

@end
