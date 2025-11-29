@class NSString, AWEDoubleColumnSearchMerchandiseModel, UICollectionView, UICollectionViewFlowLayout, AWEOriginalAdModel, NSIndexPath;
@protocol AWESearchAdProductViewDelegate;

@interface AWESearchAdProductView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *productListCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *searchMerchandiseModel;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (nonatomic) BOOL isFromECommerce;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<AWESearchAdProductViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)configUI;
- (void)trackWithLabel:(id)a0 refer:(id)a1 adExtraData:(id)a2;
- (id)ironManURLWithURL:(id)a0;
- (void)trackAdOtherShow;
- (void)trackWithLabel:(id)a0;
- (id)ironManScene;
- (id)commonParamsForTrack;
- (void)trackIronManShow:(id)a0;
- (void)trackIronManClick:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
