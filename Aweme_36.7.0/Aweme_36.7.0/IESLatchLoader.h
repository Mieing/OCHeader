@class NSString, NSMutableDictionary, IESLatchContext, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLatchLoader : NSObject <IESLatchProcessorDelegate, IESLatchNativePrefetchProcessorDelegate, IESLatchLoaderProtocol>

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *business;
@property (retain, nonatomic) IESLatchContext *context;
@property (retain, nonatomic) NSMutableDictionary *latchProcessorMap;
@property (retain, nonatomic) NSMutableArray *inferiorLatchIDs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processorQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loaderQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *npProcessorQueue;
@property (retain, nonatomic) NSError *npError;
@property (nonatomic) unsigned long long prefetchFrom;
@property (nonatomic) BOOL enableCheckVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)evaluatePrefetchForContainer:(id)a0;
- (BOOL)stopEvaluateIfNeededForLatchID:(id)a0;
- (id)initWithContext:(id)a0 forBusiness:(id)a1;
- (void)p_evaluatePrefetchForContainer:(id)a0 sync:(BOOL)a1 completion:(id /* block */)a2;
- (void)getProcessorForLatchID:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeProcessorForLatchID:(id)a0 withCompletion:(id /* block */)a1;
- (void)setProcessor:(id)a0 forLatchID:(id)a1 withCompletion:(id /* block */)a2;
- (void)monitorContainer:(id)a0 IODuration:(double)a1;
- (void)p_getJSDataWithContainer:(id)a0 sync:(BOOL)a1 completion:(id /* block */)a2;
- (id)safeQueue;
- (void)onLatchJobsFinishWithProcessor:(id)a0 latchID:(id)a1;
- (id)npSafeQueue;
- (void)onNativePrefetchProcessor:(id)a0 finishWithLatchID:(id)a1;
- (void)onNativePrefetchProcessor:(id)a0 url:(id)a1 errorOccured:(id)a2;
- (id)initWithJSDataProvider:(id)a0 business:(id)a1;
- (void)evaluateOnlinePrefetchForContainer:(id)a0 completion:(id /* block */)a1;
- (BOOL)attachForLatchID:(id)a0 withCompletion:(id /* block */)a1;
- (void)reportForLatchID:(id)a0 withPerfMetric:(id)a1;
- (void)reportForLatchID:(id)a0 withResult:(id)a1 url:(id)a2;
- (void)reportJsbPromiseResultForLatchID:(id)a0 withResult:(id)a1;
- (void)checkPrefetchTemplateVersion:(id)a0 url:(id)a1 latchID:(id)a2;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;

@end
