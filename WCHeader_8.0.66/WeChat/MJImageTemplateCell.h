@class MJImageTemplateItem, MMUIActivityIndicatorView, UIView, MMWebImageView, UILabel;

@interface MJImageTemplateCell : UICollectionViewCell

@property (retain, nonatomic) MJImageTemplateItem *item;
@property (retain, nonatomic) UIView *coverImageContainer;
@property (retain, nonatomic) UIView *loadingMaskView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingIndicator;
@property (readonly, nonatomic) MMWebImageView *coverImageView;
@property (readonly, nonatomic) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupViews;
- (void)_layoutViews;
- (void)prepareForReuse;
- (void)setupWithItem:(id)a0;
- (void)syncWithStatus;
- (void)syncWithSelected;
- (void)_startLoading;
- (void)_stopLoading;
- (void).cxx_destruct;

@end
