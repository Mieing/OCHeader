@class IESForestWorkflowTrace, NSArray, IESForestWorkflowStateManager, IESForestKit, IESForestRequest, NSString;
@protocol IESForestFetcherProtocol;

@interface IESForestWorkflow : NSObject <IESForestWorkflow>

@property (weak, nonatomic) IESForestKit *forestKit;
@property (retain, nonatomic) id<IESForestFetcherProtocol> currentFetcher;
@property (nonatomic) unsigned long long currentFetcherIndex;
@property (retain, nonatomic) NSArray *fetchers;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) IESForestWorkflowTrace *trace;
@property (retain, nonatomic) IESForestWorkflowStateManager *stateManager;
@property (retain, nonatomic) IESForestRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fixForestResponseWithFetcherResponse:(id)a0 request:(id)a1 redirectNewRequest:(id)a2 redirectOldResponse:(id)a3 responseHeader:(id)a4 data:(id)a5;

- (id)fetcherNames;
- (id)initWithFetchers:(id)a0 request:(id)a1 forestKit:(id)a2 completion:(id /* block */)a3;
- (void)_fetchResourceWithCompletion:(id /* block */)a0;
- (void)postProcessResponseIfNeeded:(id)a0 completion:(id /* block */)a1;
- (BOOL)needPostProcessResponse:(id)a0;
- (void)postProcessResponse:(id)a0 completion:(id /* block */)a1;
- (id)debugInfo;
- (void).cxx_destruct;
- (void)start;
- (BOOL)cancelFetch;

@end
