@class NSArray, UICollectionView, NSString, UIView;
@protocol IESECGoodsFeedImmersiveCarouselViewDelegate, IESECGoodsFeedImmersiveContainerDelegate;

@interface IESECGoodsFeedImmersiveCarouselView : IESECGoodsFeedImmersiveBaseView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *URLModels;
@property (retain, nonatomic) UIView *popoverViewMask;
@property (weak, nonatomic) id<IESECGoodsFeedImmersiveCarouselViewDelegate> delegate;
@property (weak, nonatomic) id<IESECGoodsFeedImmersiveContainerDelegate> ecomContainerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLayoutWithIsFullMode:(BOOL)a0 animationTime:(double)a1;
- (void)updateLayoutWithPreviewPercent:(double)a0;
- (void)showPopoverViewMask;
- (void)hidePopoverViewMask;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;
- (void)enumerateCellsUsingBlock:(id /* block */)a0;

@end
