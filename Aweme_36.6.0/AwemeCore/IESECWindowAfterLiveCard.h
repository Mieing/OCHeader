@class NSString, UIImageView, UICollectionView, UILabel, UICollectionViewFlowLayout, IESECWindowAfterLiveCardModel;

@interface IESECWindowAfterLiveCard : UIView <UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *recommendTitleLabel;
@property (retain, nonatomic) UILabel *windowEntranceLabel;
@property (retain, nonatomic) UIImageView *windowEntranceImageView;
@property (retain, nonatomic) UICollectionView *colllectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) IESECWindowAfterLiveCardModel *entranceModel;
@property (copy, nonatomic) id /* block */ cardDidMoveToSuperview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getProdcutCardHeightWithContainerWidth:(double)a0;
+ (struct CGSize { double x0; double x1; })getCardSizeWithContainerWidth:(double)a0;

- (void)p_renderView;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
