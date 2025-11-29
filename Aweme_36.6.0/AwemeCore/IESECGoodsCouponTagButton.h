@class UIView, NSString, NSArray, IESECURLModel, UIImageView, CAShapeLayer, CAGradientLayer, IESECContentEdgeInsetLabel, UIColor;

@interface IESECGoodsCouponTagButton : IESECGoodsActivityTagButton

@property (retain, nonatomic) IESECContentEdgeInsetLabel *tagHeaderLabel;
@property (retain, nonatomic) UIImageView *tagHeaderIconView;
@property (retain, nonatomic) CAShapeLayer *dashline;
@property (retain, nonatomic) UIView *tagGradientView;
@property (retain, nonatomic) CAGradientLayer *tagGradientLayer;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIColor *themeColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (copy, nonatomic) NSString *tagHeader;
@property (copy, nonatomic) NSString *tagHeaderBGColor;
@property (copy, nonatomic) NSString *tagIcon;
@property (copy, nonatomic) NSString *tagContentBGColor;
@property (copy, nonatomic) NSString *dashLineColor;
@property (copy, nonatomic) NSArray *lineDashPattern;
@property (retain, nonatomic) IESECURLModel *tagHeaderIcon;
@property (nonatomic) unsigned long long gradientStyle;
@property (nonatomic) BOOL useTagArrowIcon;
@property (retain, nonatomic) IESECURLModel *imageButton;

- (void)setTagContent:(id)a0;
- (id)tagFont;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tagEdgeInsets;
- (double)tagTextPadding;
- (double)tagFullHeight;
- (void)updateContentWithFlag:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dashLineFrameCreate:(double)a0;
- (void)iesec_setRoundedToLeft:(double)a0 right:(double)a1 top:(double)a2 bottom:(double)a3 cornersRadius:(double)a4 atCorners:(unsigned long long)a5;
- (void)updateFanCouponStyle;
- (void)updateArrowImageView;
- (double)dashLineHeight;
- (void)updateCouponTagBtnWithConfig:(id)a0;
- (void)setCouponTagStyleSmall;
- (void)setCouponTagStyleMedium;
- (void)setCouponTagStyleNormal;
- (void)setDashlineHidden:(BOOL)a0;
- (void)setDashlineColor:(struct CGColor { } *)a0;
- (double)buttonBorderWidth;
- (void).cxx_destruct;
- (void)updateContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)tagBackgroundColor;

@end
