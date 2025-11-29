@class NSEnumerator, NSString, NSArray, BDXResourceLoaderTaskConfig, BDXResourceLoaderConfig, NSMutableArray, BDXRLUrlParamConfig;
@protocol BDXResourceLoaderProcessorProtocol;

@interface BDXRLPipeline : NSObject

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) BDXResourceLoaderConfig *loaderConfig;
@property (retain, nonatomic) BDXResourceLoaderTaskConfig *taskConfig;
@property (retain, nonatomic) id<BDXResourceLoaderProcessorProtocol> currentProcessor;
@property (copy, nonatomic) NSArray *processorArray;
@property (retain, nonatomic) NSEnumerator *enumerator;
@property (copy, nonatomic) id /* block */ rejectHandler;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) BOOL isCompleted;
@property (retain, nonatomic) NSMutableArray *debugInfoArray;
@property (nonatomic) double lastAbsoluteTime;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) BDXRLUrlParamConfig *paramConfig;

- (void)fetchResourceWithResolve:(id /* block */)a0 reject:(id /* block */)a1;
- (id)initWithProcessors:(id)a0 url:(id)a1 loaderConfig:(id)a2 taskConfig:(id)a3;
- (void)appendDebugInfoOfCurrentProcessor:(BOOL)a0 errorFlag:(id)a1;
- (void)_fetchResourceWithResolve:(id /* block */)a0 reject:(id /* block */)a1;
- (void)recordTimeForReportInReturn;
- (void)recordTimeForReport;
- (id)debugInfo;
- (void).cxx_destruct;
- (BOOL)cancelLoad;
- (void)dealloc;

@end
