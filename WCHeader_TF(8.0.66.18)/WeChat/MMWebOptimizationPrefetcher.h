@class NSURLSession, NSMutableDictionary, NSString, NSMutableArray;

@interface MMWebOptimizationPrefetcher : MMObject <NSURLSessionTaskDelegate, MMWebOptimizationPrefetchTaskDelegate>

@property (retain, nonatomic) NSMutableArray *waitingQueue;
@property (retain, nonatomic) NSMutableDictionary *waitingDic;
@property (retain, nonatomic) NSMutableArray *prefetchingQueue;
@property (retain, nonatomic) NSMutableDictionary *prefetchingDic;
@property (retain, nonatomic) NSMutableArray *a8keyLiteTaskQueue;
@property (retain, nonatomic) NSMutableDictionary *a8keyLiteTaskDic;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prefetchUserAgent;

- (id)init;
- (void)dealloc;
- (void)addPrefetchTaskWithRequest:(id)a0;
- (void)cancelAllPrefetchTask;
- (BOOL)hasPrefetchingTaskWithIdentifier:(id)a0;
- (void)setupURLSession;
- (void)checkWaitingQueue;
- (void)onInsertRedirectPrefetchTaskWithUrl:(id)a0 fromUrl:(id)a1 scene:(unsigned int)a2 subScene:(unsigned int)a3;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;

@end
