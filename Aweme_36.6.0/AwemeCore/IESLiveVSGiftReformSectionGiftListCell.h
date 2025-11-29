@class NSString, UICollectionView, UIImageView, UIView, IESLiveGradientView, IESLiveVSGiftReformSectionGiftListItem;

@interface IESLiveVSGiftReformSectionGiftListCell : UIView <IESLiveVSGiftSectionCell>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *collectionViewMaskContainer;
@property (retain, nonatomic) IESLiveGradientView *coverView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (readonly, nonatomic) IESLiveVSGiftReformSectionGiftListItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_reloadData;
- (void)p_showEmptyView;
- (void)scrollToYOffset:(double)a0 withAnimation:(BOOL)a1;
- (void)scrollVerticalToRowIndex:(long long)a0 withAnimation:(BOOL)a1 isPreSelect:(BOOL)a2;
- (void)p_hideEmptyView;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
