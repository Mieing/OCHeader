@class UIView, NSString, UICollectionViewFlowLayout, UIImageView, UIButton, NSMutableArray, UICollectionView, IESLiveChargeCustomViewModel;

@interface IESLiveChargeKeyBoardView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) IESLiveChargeCustomViewModel *viewModel;
@property (retain, nonatomic) NSMutableArray *recommendButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) UIView *deleteView;
@property (retain, nonatomic) UIButton *chargeButton;
@property (retain, nonatomic) UIButton *zeroButton;
@property (retain, nonatomic) UIImageView *deleteImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateButtonWithChargeModel:(id)a0;
- (void)tapRecommendButtonWithButton:(id)a0;
- (void)tapDelete;
- (void)tapChargeButton;
- (void)tapZero;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
