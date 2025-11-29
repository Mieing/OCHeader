@class NSString, AWESearchEcommerceInfoAnchorModel, NSArray, UIImageView, AWESearchEcommerceAnchorModel, UIButton, UICollectionView, UILabel;

@interface AWESearchEcommerceMultiGoodsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (copy, nonatomic) NSArray *showModels;
@property (retain, nonatomic) AWESearchEcommerceAnchorModel *moreModel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) unsigned long long showMaxGoods;
@property (readonly, nonatomic) AWESearchEcommerceInfoAnchorModel *model;
@property (copy, nonatomic) id /* block */ clickCallBack;
@property (copy, nonatomic) id /* block */ clickGoodsCallBack;
@property (copy, nonatomic) id /* block */ clickMoreCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickSelf;
- (void)reloadEcommerceModel:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
