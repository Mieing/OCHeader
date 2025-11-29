@class UIColor, UIImageView, IESEffectModel, UIView, UILabel;

@interface HTSVideoFilterTableViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *yesImageView;
@property (retain, nonatomic) UIImageView *statusIndicator;
@property (retain, nonatomic) IESEffectModel *filterModel;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIView *flagDotView;
@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) BOOL enableSliderMaskImage;
@property (nonatomic) long long downloadStatus;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) unsigned long long iconStyle;

- (double)indicatorWidth;
- (id)createRotationAnimation;
- (id)getEffectName;
- (void)configWithIconStyle:(unsigned long long)a0;
- (id)yesImage;
- (double)selectedIndicatorCornerRadius;
- (double)coverRadius;
- (double)indicatorBorderWidth;
- (void)stopDownloadAnimation;
- (void)startDownloadAnimation;
- (void)configWithFilter:(id)a0;
- (void)configWithFilter:(id)a0 completeHandler:(id /* block */)a1;
- (void)setFlagDotViewHidden:(BOOL)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (double)itemWidth;
- (void)setCenterImage:(id)a0;

@end
