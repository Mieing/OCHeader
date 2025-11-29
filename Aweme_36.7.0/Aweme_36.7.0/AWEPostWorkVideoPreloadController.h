@class NSMutableDictionary, NSString, AWEProfileVideoPreloadHandler, NSMutableArray;

@interface AWEPostWorkVideoPreloadController : AWEPostWorkBaseController <AWEPostWorkVideoPreloadProtocol>

@property (retain, nonatomic) NSMutableDictionary *preloadedAwemeInfo;
@property (retain, nonatomic) NSMutableArray *touchPreloadingVideoList;
@property (retain, nonatomic) AWEProfileVideoPreloadHandler *videoPreloadHandler;
@property (retain, nonatomic) NSMutableArray *clickedItemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerCollectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)preloadSize;
- (void)enterVideoDetailPageWith:(id)a0;
- (void)preloadVideoAfterJustWatchScrolledIfNeeded:(long long)a0;
- (void)reportPostVideoPreloadIfNeed;
- (void)preloadVideoAfterCellHighlightIfNeeded:(id)a0;
- (void)preload:(id)a0 group:(id)a1 touchPreload:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
