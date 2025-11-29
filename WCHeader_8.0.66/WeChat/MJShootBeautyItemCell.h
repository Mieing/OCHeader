@class MMUIImageView, MMUIView, MJShootBeautyItem, MMUILabel;

@interface MJShootBeautyItemCell : UICollectionViewCell

@property (retain, nonatomic) MMUIImageView *iconImageView;
@property (retain, nonatomic) MMUIView *iconContainerView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIView *borderView;
@property (retain, nonatomic) MMUIView *blurView;
@property (retain, nonatomic) MMUIView *dotView;
@property (retain, nonatomic) MJShootBeautyItem *item;
@property (nonatomic) BOOL isCellSelected;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)setupViews;
- (void)prepareForReuse;
- (void)reset;
- (void)updateModifyState;
- (void)configCellWithItem:(id)a0 isAdjustable:(BOOL)a1;
- (void).cxx_destruct;

@end
