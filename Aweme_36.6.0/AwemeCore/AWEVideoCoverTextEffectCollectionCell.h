@class UIImageView, AWEScrollStringLabel, UIView;

@interface AWEVideoCoverTextEffectCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIImageView *effectImageView;
@property (retain, nonatomic) UIImageView *statusIndicator;
@property (retain, nonatomic) AWEScrollStringLabel *nameLabel;
@property (nonatomic) long long downloadStatus;

- (id)createRotationAnimation;
- (void)stopDownloadAnimation;
- (void)startDownloadAnimation;
- (void)configCellWithModel:(id)a0 selected:(BOOL)a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
