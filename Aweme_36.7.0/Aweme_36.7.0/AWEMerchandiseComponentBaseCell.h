@class UIView, AWESearchFilterBaseManager, CALayer, CABasicAnimation, YYAnimatedImageView, CAGradientLayer, AWEDoubleColumnSearchMerchandiseFilterComponentModel, UILabel;
@protocol AWEMerchandiseComponentBaseCellDelegate;

@interface AWEMerchandiseComponentBaseCell : UICollectionViewCell

@property (class, nonatomic) double innerWidthMargin;
@property (class, nonatomic) double fontSize;

@property (retain, nonatomic) YYAnimatedImageView *animationHeadIcon;
@property (retain, nonatomic) YYAnimatedImageView *animationTailIcon;
@property (retain, nonatomic) UILabel *animationTextLabel;
@property (retain, nonatomic) CALayer *textLayer;
@property (retain, nonatomic) CAGradientLayer *textGradientLayer;
@property (retain, nonatomic) CAGradientLayer *backgroundGradientLayer;
@property (retain, nonatomic) CABasicAnimation *textGradientAnimation;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *filterComponentModel;
@property (nonatomic) BOOL isOnlySupportLightMode;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) YYAnimatedImageView *headIcon;
@property (retain, nonatomic) YYAnimatedImageView *textIcon;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) YYAnimatedImageView *tailIcon;
@property (nonatomic) struct CGSize { double width; double height; } headIconSize;
@property (nonatomic) struct CGSize { double width; double height; } tailIconSize;
@property (nonatomic) struct CGSize { double width; double height; } textIconSize;
@property (retain, nonatomic) AWESearchFilterBaseManager *filterManager;
@property (retain, nonatomic) UIView *animationContainerView;
@property (weak, nonatomic) id<AWEMerchandiseComponentBaseCellDelegate> componentCellDelegate;

+ (id)textFontWithModel:(id)a0 filterManager:(id)a1;
+ (double)titleWidthWithModel:(id)a0 filterManager:(id)a1;
+ (BOOL)isSelectWithModel:(id)a0 filterManager:(id)a1;
+ (double)widthWithComponentModel:(id)a0 filterManager:(id)a1;
+ (long long)getFontClassWithSize:(long long)a0;
+ (id)selectingTextFontWithModel:(id)a0 filterManager:(id)a1;
+ (id)getAnimationConfigWithModel:(id)a0;
+ (double)animationViewWidthWithComponentModel:(id)a0;
+ (id)defaultHeadIconWithModel:(id)a0 filterManager:(id)a1;
+ (id)selectedHeadIconWithModel:(id)a0 filterManager:(id)a1;
+ (id)selectingHeadIconWithModel:(id)a0 filterManager:(id)a1;
+ (id)identifier;

- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void)startTextGradientAnimation;
- (void)stopTextGradientAnimation;
- (void)configDisplayUIForDefaultStyleWithModel:(id)a0;
- (void)configDisplayUIForSelectedStyleWithModel:(id)a0;
- (void)configDisplayUIForSelectingStyleWithModel:(id)a0;
- (void)updateUIDisplayStatusWithModel:(id)a0;
- (BOOL)isSelectingWithModel:(id)a0;
- (void)configAnimationViewWithComponentModel:(id)a0;
- (void)configDisplayUIWithDisplayStyle:(unsigned long long)a0 componentModelModel:(id)a1;
- (id)getBackgroundGradientColors;
- (id)getTextGradientColors;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (BOOL)isDarkMode;

@end
