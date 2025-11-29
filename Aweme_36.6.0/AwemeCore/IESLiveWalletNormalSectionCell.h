@class IESLiveWalletNormalItem, NSString, UICollectionView, UILabel, UICollectionViewFlowLayout, UIView;

@interface IESLiveWalletNormalSectionCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) IESLiveWalletNormalItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldSetUpScreenShield;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
