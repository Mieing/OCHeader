@class MMUIActivityIndicatorView, MMWebImageView, UIView, MJImageMaterialItem;

@interface MJImageMaterialCell : UICollectionViewCell

@property (retain, nonatomic) MJImageMaterialItem *item;
@property (retain, nonatomic) UIView *thumbnailContainer;
@property (readonly, nonatomic) MMWebImageView *thumbnailImageView;
@property (retain, nonatomic) UIView *loadingMaskView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingIndicator;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupViews;
- (void)_layoutViews;
- (void)prepareForReuse;
- (void)setupWithItem:(id)a0;
- (void)syncWithStatus;
- (void)updateSelected:(BOOL)a0;
- (void)_startLoading;
- (void)_stopLoading;
- (void).cxx_destruct;

@end
