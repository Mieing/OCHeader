@class NSString, AWENetworkRequest, AWENetworkPerfromanceMetrics, AWEMVDataRequestContext, AWEMVChannelDataControllerConfig;
@protocol AWEHttpTask;

@interface AWEMVChannelDataNormalFetcher : NSObject <AWEMVChannelDataFetcher>

@property (retain, nonatomic) AWEMVDataRequestContext *requestContext;
@property (copy, nonatomic) id /* block */ fetchCompletion;
@property (copy, nonatomic) id /* block */ perfMetricsBlock;
@property (retain, nonatomic) AWENetworkRequest *request;
@property BOOL isCanceled;
@property (retain) id<AWEHttpTask> httpTask;
@property (retain, nonatomic) id completionBlockModel;
@property (retain, nonatomic) id completionBlockError;
@property (retain, nonatomic) AWENetworkPerfromanceMetrics *metrics;
@property (nonatomic) BOOL enableRequestConcurrentControl;
@property (nonatomic) BOOL enableRequestDependencyPolicy;
@property (nonatomic) BOOL enableRequestLevelControl;
@property (readonly, nonatomic) AWEMVChannelDataControllerConfig *feedConfig;
@property (readonly, nonatomic) BOOL isFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadmoreWithCompletion:(id /* block */)a0;
- (void)fetchWithCompletion:(id /* block */)a0 perfMetricsBlock:(id /* block */)a1;
- (id)initWithRequestContext:(id)a0 feedConfig:(id)a1;
- (BOOL)redirectCallbackWithRequestContext:(id)a0 completion:(id /* block */)a1 perfMetricsBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)prepare;
- (BOOL)hasMoreData;
- (void)dealloc;
- (void)cancel;

@end
