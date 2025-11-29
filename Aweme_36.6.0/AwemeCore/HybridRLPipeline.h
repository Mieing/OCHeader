@class NSEnumerator, NSString, HybridResourceLoaderTaskConfig, NSArray, HybridResourceLoaderConfig, NSMutableArray, HybridRLUrlParamConfig;
@protocol HybridResourceLoaderProcessorProtocol;

@interface HybridRLPipeline : NSObject

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) HybridResourceLoaderConfig *loaderConfig;
@property (retain, nonatomic) HybridResourceLoaderTaskConfig *taskConfig;
@property (retain, nonatomic) id<HybridResourceLoaderProcessorProtocol> currentProcessor;
@property (copy, nonatomic) NSArray *processorArray;
@property (retain, nonatomic) NSEnumerator *enumerator;
@property (copy, nonatomic) id /* block */ rejectHandler;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) BOOL isCompleted;
@property (retain, nonatomic) NSMutableArray *debugInfoArray;
@property (nonatomic) double lastAbsoluteTime;
@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) NSString *errorDescription;
@property (retain, nonatomic) HybridRLUrlParamConfig *paramConfig;

- (id)initWithProcessors:(id)a0 url:(id)a1 loaderConfig:(id)a2 taskConfig:(id)a3;
- (void)appendDebugInfoOfCurrentProcessor:(BOOL)a0 errorFlag:(id)a1;
- (void)recordTimeForReportInReturn;
- (void)recordTimeForReport;
- (void)fetchResourceWithContainer:(id)a0 resolve:(id /* block */)a1 reject:(id /* block */)a2;
- (void)_fetchResourceWithContainer:(id)a0 resolve:(id /* block */)a1 reject:(id /* block */)a2;
- (id)debugInfo;
- (void).cxx_destruct;
- (BOOL)cancelLoad;
- (void)dealloc;

@end
