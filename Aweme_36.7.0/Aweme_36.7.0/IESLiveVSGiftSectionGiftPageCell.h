@class CAGradientLayer, NSString, UICollectionView, IESLiveVSGiftSectionGiftPageItem, UIView, NSMutableArray, IESLiveVSGiftPageCollectionViewLayout;

@interface IESLiveVSGiftSectionGiftPageCell : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveVSGiftSectionCell>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *giftListCells;
@property (retain, nonatomic) IESLiveVSGiftPageCollectionViewLayout *collectionViewLayout;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) CAGradientLayer *bottomMaskLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IESLiveVSGiftSectionGiftPageItem *item;

- (void)p_loadListItems;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
