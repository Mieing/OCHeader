@class NSString, UICollectionView;
@protocol UICollectionViewDelegate;

@interface AWEMVPreloadInterceptor : NSObject <UICollectionViewDelegate>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<UICollectionViewDelegate> collectionViewDelegate;
@property (nonatomic) BOOL isScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)delayPreloadVisibleCardVideo;
- (id)acquirePreloadModelFromCell:(id)a0;
- (id)findCollectionViewBelongViewController:(id)a0;
- (void)preloadVideo:(id)a0;
- (void)cancelPreload:(id)a0;
- (void)cancelExecutePreloadVisibleCardVideo;
- (void)executePreloadVisibleCardVideo;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCollectionView:(id)a0 delegate:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
