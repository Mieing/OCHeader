@class UIImageView, UILabel, NSDictionary;

@interface AWEPOIShelfCarouselItemView : UIView

@property (weak, nonatomic) UIImageView *avatarImgView;
@property (weak, nonatomic) UILabel *descLabel;
@property (copy, nonatomic) NSDictionary *data;

+ (id)descLabelFont;
+ (double)estimateCarouselViewWidthWithData:(id)a0;

- (void)loadUI;
- (void)fillData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
