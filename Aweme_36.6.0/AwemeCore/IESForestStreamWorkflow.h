@class IESForestWorkflowTrace, NSArray, IESForestWorkflowStateManager, IESForestKit, IESForestRequest, NSString, IESForestWorkflow;
@protocol IESForestStreamFetcherProtocol;

@interface IESForestStreamWorkflow : NSObject <IESForestWorkflow>

@property (weak, nonatomic) IESForestKit *forestKit;
@property (retain, nonatomic) id<IESForestStreamFetcherProtocol> currentFetcher;
@property (retain, nonatomic) NSArray *fetchers;
@property (copy, nonatomic) id /* block */ redirectHandler;
@property (copy, nonatomic) id /* block */ headerHandler;
@property (copy, nonatomic) id /* block */ dataHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) IESForestWorkflowTrace *trace;
@property (retain, nonatomic) IESForestWorkflowStateManager *stateManager;
@property (retain, nonatomic) IESForestWorkflow *nonStreamWorkFlow;
@property (retain, nonatomic) IESForestRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetcherNames;
- (id)initWithFetchers:(id)a0 request:(id)a1 forestKit:(id)a2 redirectHandler:(id /* block */)a3 headerHandler:(id /* block */)a4 dataHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (id)nonStreamFetcherSequence:(id)a0;
- (id)streamFetcherSequence:(id)a0;
- (void)_threadFetchResourceWithStreamFetcher:(id)a0 needDispatch:(BOOL)a1;
- (void)_fetchResourceWithStreamFetcher:(id)a0;
- (id)debugInfo;
- (void).cxx_destruct;
- (void)start;
- (BOOL)cancelFetch;

@end
