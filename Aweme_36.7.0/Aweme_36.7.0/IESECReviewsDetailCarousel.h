@class NSString, UICollectionView, IESECReviewsDetailPlayerManager, NSArray;
@protocol IESECReviewsDetailCarouselDelegate;

@interface IESECReviewsDetailCarousel : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    UICollectionView *_collectionView;
    NSArray *_pictures;
    NSArray *_videos;
}

@property (weak, nonatomic) id<IESECReviewsDetailCarouselDelegate> delegate;
@property (retain, nonatomic) IESECReviewsDetailPlayerManager *playerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithCarouselModel:(id)a0;
- (void)willBecomeMainResponder;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
