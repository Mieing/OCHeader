@class NSString, AWEListPreloadConfig, UICollectionView;
@protocol AWEListPreloadHandlerDelegate;

@interface AWEListPreloadHandler : NSObject <AWEListPreloadHandlerProtocol>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *preloadScene;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) AWEListPreloadConfig *preloadConfig;
@property (weak, nonatomic) id<AWEListPreloadHandlerDelegate> delegate;

+ (id)handlerWithCollectionView:(id)a0 preloadScene:(id)a1 preloadConfig:(id)a2;

- (void)handleConnectionChanged:(id)a0;
- (void)cancelPreload;
- (void)startVideoPreload:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1 referString:(id)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0 referString:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0 referString:(id)a1;
- (void)scrollViewDidScrollToTop:(id)a0 referString:(id)a1;
- (BOOL)shouldPreloadWithCell:(id)a0 collectionView:(id)a1;
- (void)preloadDataWithModel:(id)a0 completion:(id /* block */)a1;
- (long long)videoPreloadSize;
- (id)initWithCollectionView:(id)a0 preloadScene:(id)a1 preloadConfig:(id)a2;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;

@end
