@class UILongPressGestureRecognizer, BDImageView, UIImageView, UIColor, UIView, UILabel, UITapGestureRecognizer;

@interface AWEVideoEffectViewCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *statusIndicator;
@property (retain, nonatomic) UIView *imageBackgroundView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UILongPressGestureRecognizer *longGes;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *colorView;
@property (retain, nonatomic) UIColor *coverColor;
@property (nonatomic) long long downloadStatus;

- (void)tapAnimation;
- (id)createRotationAnimation;
- (void)stopDownloadAnimation;
- (void)startDownloadAnimation;
- (void)longPressedAnimationWithGesture:(id)a0;
- (void)setCenterImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateText:(id)a0;

@end
