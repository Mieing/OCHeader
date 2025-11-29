@class AWEProfileVideoPreloadHandler, NSString, AWEUIKitViewControllerEmptyPageConfig;

@interface AWEFavoriteController : AWEUserWorkController <AWEUserWorkControllerBatchCacheProtocol, AWEUserWorkControllerProtocol>

@property (retain, nonatomic) AWEUIKitViewControllerEmptyPageConfig *emptyPageConfig;
@property (retain, nonatomic) AWEUIKitViewControllerEmptyPageConfig *errorPageConfig;
@property (retain, nonatomic) AWEProfileVideoPreloadHandler *videoPreloadHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)modelForIndex:(id)a0;
- (id)batchCacheTitle;
- (id)batchCacheEnterFrom;
- (void)updateEmptyConfig:(id)a0;
- (void)updateErrorConfig:(id)a0;
- (id)vacantTrackParams;
- (void)syncEmptyState:(BOOL)a0;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
