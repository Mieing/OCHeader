@class NSString, NSMutableDictionary;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchCachalotPrerenderService : AWESearchVerticalContainerService <AWESearchGeneralPipelinePreRenderProvider>

@property (retain, nonatomic) NSMutableDictionary *chunkPreRenderCache;
@property (nonatomic) BOOL inCSP2PredictPhase;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> predictRootModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cachalotView;
- (id)getFingerprintFromCell:(id)a0;
- (void)preRenderWithModel:(id)a0;
- (id)fetchOffScreenLeafModels;
- (id)preRenderViewModel:(id)a0 isDeletedFingerprint:(id /* block */)a1;
- (void)preRenderTreeModel:(id)a0 dataPreHandleBlock:(id /* block */)a1 isDeletedFingerprint:(id /* block */)a2 completion:(id /* block */)a3;
- (void)preRenderPredictedTreeModel:(id)a0 isDeletedFingerprint:(id /* block */)a1 completion:(id /* block */)a2;
- (id)fetchPreRenderComponentWithViewModel:(id)a0;
- (void)clearAllPreRenderCache;
- (void)handlePredictTreeModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
