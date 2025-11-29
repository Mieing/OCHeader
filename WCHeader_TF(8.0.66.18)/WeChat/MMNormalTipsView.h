@class NSAttributedString, NSString, UIImageView, MMNormalTipsViewCloseButtonConfig, UIColor, MMUIButton, MMUILabel;

@interface MMNormalTipsView : MMRectTriangleArrowView

@property (retain, nonatomic) MMNormalTipsViewCloseButtonConfig *closeButtonConfig;
@property (readonly, nonatomic) MMUILabel *titleLabel;
@property (readonly, nonatomic) MMUILabel *descLabel;
@property (readonly, nonatomic) MMUILabel *giftDescLabel;
@property (readonly, nonatomic) MMUIButton *closeButton;
@property (readonly, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSAttributedString *attriButedDesc;
@property (nonatomic) unsigned int payment;
@property (retain, nonatomic) NSString *giftDesc;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *descColor;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) BOOL showArrowImage;
@property (nonatomic) double edgeTop;
@property (nonatomic) double edgeLR;
@property (retain, nonatomic) id userInfo;
@property (copy, nonatomic) id /* block */ tapAction;

+ (struct CGSize { double x0; double x1; })viewSizeByTitle:(id)a0 desc:(id)a1 minWidth:(double)a2 maxWidth:(double)a3;
+ (struct CGSize { double x0; double x1; })viewSizeByTitle:(id)a0 desc:(id)a1 payment:(unsigned int)a2 giftDesc:(id)a3 minWidth:(double)a4 maxWidth:(double)a5;
+ (struct CGSize { double x0; double x1; })viewSizeByTitle:(id)a0 desc:(id)a1 withCloseButton:(BOOL)a2 minWidth:(double)a3 maxWidth:(double)a4;
+ (struct CGSize { double x0; double x1; })viewSizeByTitle:(id)a0 desc:(id)a1 withCloseButton:(BOOL)a2 minWidth:(double)a3 maxWidth:(double)a4 titleFont:(id)a5;
+ (struct CGSize { double x0; double x1; })viewSizeByTitle:(id)a0 desc:(id)a1 payment:(unsigned int)a2 giftDesc:(id)a3 withCloseButton:(BOOL)a4 minWidth:(double)a5 maxWidth:(double)a6;
+ (struct CGSize { double x0; double x1; })viewSizeByTitle:(id)a0 desc:(id)a1 payment:(unsigned int)a2 giftDesc:(id)a3 withCloseButton:(BOOL)a4 minWidth:(double)a5 maxWidth:(double)a6 titleFont:(id)a7;
+ (struct CGSize { double x0; double x1; })viewSizeByTitle:(id)a0 desc:(id)a1 payment:(unsigned int)a2 giftDesc:(id)a3 withCloseButton:(BOOL)a4 minWidth:(double)a5 maxWidth:(double)a6 titleFont:(id)a7 edgeTop:(double)a8 edgeLR:(double)a9;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1 titleColor:(id)a2 withCloseButtonConfig:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1 titleColor:(id)a2 edgeTop:(double)a3 edgeLR:(double)a4 withCloseButtonConfig:(id)a5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1 withCloseButtonConfig:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1 withCloseButton:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1;
- (void)initUI;
- (void)setAttributeTitle:(id)a0;
- (void)removeAllSubViews;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (void).cxx_destruct;

@end
