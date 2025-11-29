@class NSString;

@interface AWEPostWorkPlayerPrepareController : AWEPostWorkBaseController <AWEPostWorkPlayerPrepareProtocol, AWEUserWorkCoverTrackerControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerCollectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)prerenderPlayerIfNeeded:(id)a0 prerenderTime:(unsigned long long)a1;
- (unsigned long long)prerenderTimeForPlayer;
- (id)padService;
- (id)awemeSectionViewModel;
- (void)cellDidDisplay:(id)a0 indexPath:(id)a1 extraParams:(id)a2;
- (void)preparePlayerAfterJustWatchScrolledIfNeeded:(long long)a0 indexPath:(id)a1;
- (void)removePreparedPlayerIfNeeded:(id)a0;
- (void)activePlayerCoverImageIfNeeded:(id)a0;
- (void)preparePlayerAfterCellHighlightIfNeeded:(id)a0;
- (void)preloadPlayerCover:(id)a0 indexPath:(id)a1;
- (BOOL)enablePreloadVideoPlayerCoverImage;
- (BOOL)isValidDataToEnterDetailPage:(id)a0 indexPath:(id)a1;
- (BOOL)enablePrepareVideoPlayer;
- (BOOL)enableOptimizePrerenderVideoPlayer;
- (id)awemeSectionManager;
- (void)containerViewDidLoad;

@end
