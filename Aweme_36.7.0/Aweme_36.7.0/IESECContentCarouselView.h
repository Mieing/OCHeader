@class NSArray, IESECURLModel, UICollectionView, NSString, UIView;
@protocol IESECContentCarouselViewDelegate;

@interface IESECContentCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    UIView *_frontCustomView;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<IESECContentCarouselViewDelegate> delegate;
@property (nonatomic) double itemSpacing;
@property (nonatomic) BOOL pagingEnabel;
@property (nonatomic) unsigned long long roundingCorners;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL isShowActivityImage;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (copy, nonatomic) NSArray *URLModels;
@property (retain, nonatomic) IESECURLModel *activityURLModel;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (readonly, nonatomic) BOOL hasCustomFrontView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTrailerContentView:(id)a0 withRefreshingBlock:(id /* block */)a1;
- (void)setTrailerContentOffsetDidChangeBlock:(id /* block */)a0;
- (Class)collectionIdentifierClass;
- (Class)cellIdentifierClass;
- (void)configCustomViewAtFront:(id)a0;
- (void)removeCustomFrontView;
- (void)tapGestureRecognizerHandler:(id)a0;
- (unsigned long long)imageIndexWithCurrentPageOffset:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)setupAccessibility;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;
- (void)_setupUI;

@end
