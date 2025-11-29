@class MMUIActivityIndicatorView, MMUIView, MMWebImageView, MJDecorPackageItem, MMUILabel;

@interface MJDecorPackageCell : UICollectionViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUIView *maskView;
@property (retain, nonatomic) MMUIView *iconContainerView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (readonly, nonatomic) MJDecorPackageItem *item;
@property (nonatomic) BOOL isCellSelected;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)prepareForReuse;
- (void)setupWithItem:(id)a0;
- (void)syncWithStatus;
- (void)setupMaskViewWithLoadingStyle;
- (void).cxx_destruct;

@end
