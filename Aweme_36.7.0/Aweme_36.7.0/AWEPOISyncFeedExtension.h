@class DitoPageContext, NSString, NSDictionary, NSMutableArray;
@protocol DitoExtensionContainerProtocol, AWEPOISyncFeedExtensionDelegateProtocol;

@interface AWEPOISyncFeedExtension : AWEListDataController <AWEModernFullscreenTransitionOuterContextProvider, AWEZoomTransitionOuterContextProvider, AWEPOITransitionProviderProtocol, DitoExtensionProtocol, AWEPOISyncFeedExtensionProtocol>

@property (copy, nonatomic) NSString *enterNodeGroupTag;
@property (retain, nonatomic) NSMutableArray *packedModelArray;
@property (copy, nonatomic) NSString *transitionClassName;
@property (copy, nonatomic) id /* block */ loadDataCompletion;
@property (copy, nonatomic) NSString *targetNodeFromFeed;
@property (weak, nonatomic) id<AWEPOISyncFeedExtensionDelegateProtocol> delegate;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (nonatomic) BOOL isTransitionUpdating;
@property (copy, nonatomic) NSString *enterNodeTag;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)modernTransitionContext;
- (void)calculateFilteredDataSource;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (void)didEndReload;
- (void)initializeExtension;
- (id)generalContext;
- (id)generateFeedVCWithEnterNodeTag:(id)a0 referString:(id)a1 enterFrom:(id)a2 logExtraDict:(id)a3 didLoadDataBlock:(id /* block */)a4;
- (void)transferToViewController:(id)a0 transitionClassName:(id)a1;
- (BOOL)shouldUseFullScreenShrinkTransitionWithOffset:(long long)a0 isLive:(BOOL)a1;
- (void)fetchWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)refreshLoadMoreStatus;
- (void)insertAwemeListOnTop:(id)a0;
- (void)fetchPackedModel;
- (long long)indexWithNodeTag:(id)a0;
- (id)calculateNodeTagWhenReturnDetailPageWithOffset:(long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)resetData;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
