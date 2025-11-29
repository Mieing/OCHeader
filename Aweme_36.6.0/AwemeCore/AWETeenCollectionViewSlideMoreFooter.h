@class UIImageView, UILabel;

@interface AWETeenCollectionViewSlideMoreFooter : UICollectionReusableView

@property (retain, nonatomic) UIImageView *footerIcon;
@property (retain, nonatomic) UILabel *footerLabel;

+ (double)footerWidth;
+ (double)leftPadding;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
