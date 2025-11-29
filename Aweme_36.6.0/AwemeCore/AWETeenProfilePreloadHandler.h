@class NSString, UICollectionView;

@interface AWETeenProfilePreloadHandler : NSObject

@property (weak, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *preloadScene;
@property (nonatomic) BOOL enabled;

+ (id)handlerWithCollectionView:(id)a0 preloadScene:(id)a1;
+ (void)preloaderUpdateParallelNumberIfLeavePage:(BOOL)a0;

- (void)handleConnectionChanged:(id)a0;
- (void)cancelPreload;
- (id)preloaderForModel:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0 referString:(id)a1;
- (void)startVideoPreload:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1 referString:(id)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0 referString:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0 referString:(id)a1;
- (void)scrollViewDidScrollToTop:(id)a0 referString:(id)a1;
- (id)initWithCollectionView:(id)a0 preloadScene:(id)a1;
- (BOOL)shouldPreloadWithCell:(id)a0 collectionView:(id)a1;
- (void)preloadDataWithModel:(id)a0 completion:(id /* block */)a1;
- (long long)videoPreloadSize;
- (void)__preloadActionWithModel:(id)a0 bsModel:(id)a1 urlModel:(id)a2 preloadSize:(long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;

@end
