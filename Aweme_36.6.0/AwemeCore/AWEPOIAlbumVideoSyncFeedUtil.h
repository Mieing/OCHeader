@class NSString;
@protocol AWEPOIAlbumVideoSyncFeedUtilDelegate;

@interface AWEPOIAlbumVideoSyncFeedUtil : AWEListDataController <AWEModernFullscreenTransitionOuterContextProvider, AWEZoomTransitionOuterContextProvider, AWEPOITransitionProviderProtocol>

@property (nonatomic) long long enterIndex;
@property (nonatomic) long long targetIndex;
@property (copy, nonatomic) NSString *transitionClassName;
@property (weak, nonatomic) id<AWEPOIAlbumVideoSyncFeedUtilDelegate> delegate;
@property (nonatomic) BOOL isTransitionUpdating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)modernTransitionContext;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (void)transferToViewController:(id)a0 transitionClassName:(id)a1;
- (BOOL)shouldUseFullScreenShrinkTransitionWithOffset:(long long)a0 isLive:(BOOL)a1;
- (id)generateFeedVCWithEnterIndex:(long long)a0 referString:(id)a1 enterFrom:(id)a2 params:(id)a3;
- (void)fetchWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)refreshLoadMoreStatus;
- (void)fetchFilteredDataSource;
- (long long)calculateTargetIndexWhenReturnDetailPageWithOffset:(long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)resetData;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
