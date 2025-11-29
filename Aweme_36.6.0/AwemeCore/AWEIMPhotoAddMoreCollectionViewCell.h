@class UIImageView, UIVisualEffectView, UILabel, UIView;

@interface AWEIMPhotoAddMoreCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIView *backgroundContainer;

- (void)addBlurView;
- (void)removeBlurView;
- (void)layoutViewWithIconWidth:(double)a0 labelFontSize:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
