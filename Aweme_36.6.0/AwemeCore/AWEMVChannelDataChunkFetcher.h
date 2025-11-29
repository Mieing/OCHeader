@class NSError, AWEMVCSPChunkRequestDelegateConverter, AWEMVChannelDataShardParser, NSNumber, NSString, CSPChunkRequestManager, NSObject, AWEAwemeResponseModel, AWEMVChannelDataControllerConfig, AWEMVDataRequestContext, AWEMVChannelDataChunkHelper;
@protocol OS_dispatch_queue;

@interface AWEMVChannelDataChunkFetcher : NSObject <AWEMVCSPChunkRequestDelegate, AWEMVChannelDataFetcher>

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *ttRequestTaskQueue;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *chunk0DataParserQueue;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *chunk1DataParserQueue;

@property (retain, nonatomic) AWEMVDataRequestContext *requestContext;
@property (copy, nonatomic) id /* block */ fetchCompletion;
@property (copy, nonatomic) id /* block */ perfMetricsBlock;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ loadmoreCompletion;
@property (retain, nonatomic) CSPChunkRequestManager *request;
@property (retain, nonatomic) AWEMVChannelDataChunkHelper *_chunkHelper;
@property (retain, nonatomic) AWEMVCSPChunkRequestDelegateConverter *delegateConverter;
@property BOOL isCanceled;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) long long retryIndex;
@property (nonatomic) BOOL willRetryFlag;
@property (retain, nonatomic) NSError *receiveChunkDataError;
@property (retain) NSError *completionError;
@property (retain) NSError *chunk0Error;
@property (retain) NSError *chunk1Error;
@property (retain, nonatomic) AWEAwemeResponseModel *chunk1Response;
@property (retain, nonatomic) AWEMVChannelDataShardParser *firstChunkDataParser;
@property (retain, nonatomic) AWEMVChannelDataShardParser *secondChunkDataParser;
@property (nonatomic) BOOL chunk1DataIsParsing;
@property (nonatomic) BOOL needCallbackUpdateBlockAfterFetchCompletion;
@property (nonatomic) BOOL fetchCompletionDidCallback;
@property (nonatomic) BOOL secondChunkDataDidCallback;
@property (nonatomic) BOOL perfMetricsDidCallback;
@property (retain, nonatomic) NSNumber *chunk0ModelizationDurationMS;
@property (retain, nonatomic) NSNumber *chunk1ModelizationDurationMS;
@property (nonatomic) BOOL isChunkResponse;
@property (nonatomic) BOOL enableRequestConcurrentControl;
@property (nonatomic) BOOL enableRequestDependencyPolicy;
@property (nonatomic) BOOL enableRequestLevelControl;
@property (nonatomic) BOOL needCloseRequestConcurrentControl;
@property (nonatomic) BOOL needCloseRequestDependencyPolicy;
@property (nonatomic) BOOL needCloseRequestLevelControl;
@property (readonly, nonatomic) AWEMVChannelDataControllerConfig *feedConfig;
@property (readonly, nonatomic) BOOL isFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isChunkResponse:(id)a0;

- (void)loadmoreWithCompletion:(id /* block */)a0;
- (void)callbackFetchCompletion:(id)a0 error:(id)a1;
- (BOOL)loadParsedDataWithCompletion:(id /* block */)a0;
- (void)fetchWithCompletion:(id /* block */)a0 perfMetricsBlock:(id /* block */)a1;
- (void)callbackUpdateBlock:(id)a0 error:(id)a1;
- (void)tryHandleFetchDidFinished;
- (void)resetTTNetRequestControl;
- (void)callbackPerfMetricsBlockIfNeeded;
- (void)callbackLoadmoreCompletionIfNeeded;
- (void)request:(id)a0 didReceiveChunkData:(id)a1 error:(id)a2 chunkIndex:(long long)a3;
- (void)request:(id)a0 didEndWithError:(id)a1 forceCanceled:(BOOL)a2;
- (id)initWithRequestContext:(id)a0 feedConfig:(id)a1;
- (BOOL)redirectCallbackWithRequestContext:(id)a0 completion:(id /* block */)a1 perfMetricsBlock:(id /* block */)a2;
- (void)setResponseDidUpdateBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)prepare;
- (BOOL)hasMoreData;
- (void)dealloc;
- (void)cancel;
- (void)retry;

@end
