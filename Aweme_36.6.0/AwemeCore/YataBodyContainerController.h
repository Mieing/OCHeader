@class YataRenderNode, IGListAdapter, UICollectionView, YataBodyContainerDataSource;

@interface YataBodyContainerController : YataABSContainerController

@property (readonly, nonatomic) UICollectionView *collectionContainer;
@property (retain, nonatomic) IGListAdapter *adapter;
@property (retain, nonatomic) YataBodyContainerDataSource *dataSource;
@property (nonatomic) BOOL isFirstReload;
@property (weak, nonatomic) id scrollDelegate;
@property (weak, nonatomic) YataRenderNode *anchorNode;

- (void)registerSectionViewModels:(id)a0;
- (void)performSectionUpdatesAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateYataSection;
- (void)clearBodySectionData;
- (void)onViewHolderContainerChanged:(id)a0 viewHolderSeqKey:(id)a1 viewHolderDict:(id)a2 animationIntermediateSeqKey:(id)a3 animationChangingSeqKey:(id)a4 completion:(id /* block */)a5;
- (void)setupWithView:(id)a0 instance:(id)a1 viewSource:(id)a2;
- (void)reloadRegistedObject:(id)a0 isBodyError:(BOOL)a1;
- (void)refreshBodyWithEstimateSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)refreshBodyWithCompletion:(id /* block */)a0;
- (void)tryPreLoadAsyncNodeTemplate:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)tryLoadAnchorNodeTemplate:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)preloadView:(id)a0 estimateSize:(struct CGSize { double x0; double x1; })a1 loadCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)position;
- (id)sectionControllerForSection:(long long)a0;

@end
