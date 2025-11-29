@class UIImageView, UIColor, UILabel;

@interface WCEditSelectedCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIColor *borderLineColor;
@property (retain, nonatomic) UIImageView *tagBgView;
@property (retain, nonatomic) UILabel *gifLogoView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)showGifLogo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hideGifLogo;
- (void)showBorder:(BOOL)a0;
- (void).cxx_destruct;

@end
