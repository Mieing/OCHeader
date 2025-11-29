@class UIImageView;

@interface AWESearchAdImagesSliderViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *linkIconImageView;

- (void)configBanner:(id)a0;
- (void)setLinkIconDisplay:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
