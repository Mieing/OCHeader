@class AWEDoubleColumnSearchMerchandiseModel, NSDictionary, UILabel, YYAnimatedImageView;

@interface AWEMerchandiseIndustryCouponCell : AWESearchCachalotECommerceBaseCell

@property (retain, nonatomic) YYAnimatedImageView *backgroundImage;
@property (retain, nonatomic) YYAnimatedImageView *headIcon;
@property (retain, nonatomic) UILabel *headTextSymbolLabel;
@property (retain, nonatomic) UILabel *headTextLabel;
@property (retain, nonatomic) UILabel *marketingLabel;
@property (retain, nonatomic) UILabel *trailLabel;
@property (retain, nonatomic) YYAnimatedImageView *trailIcon;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (copy, nonatomic) NSDictionary *searchInfoDict;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)trackCardShow;
- (id)fontWithFontSize:(double)a0 isBold:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
