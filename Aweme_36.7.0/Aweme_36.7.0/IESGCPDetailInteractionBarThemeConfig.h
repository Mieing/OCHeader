@class UIColor;

@interface IESGCPDetailInteractionBarThemeConfig : NSObject

@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *teamStatusTitleColor;
@property (retain, nonatomic) UIColor *teamStatusBackColor;
@property (retain, nonatomic) UIColor *subtitleColor;
@property (retain, nonatomic) UIColor *extImgBgColor;

+ (id)gradientThemeConfigWithProgress:(double)a0;
+ (id)detailDarkStyleConfig;
+ (id)detailLightStyleConfig;
+ (id)interactinBarThemeConfigFrom:(id)a0;

- (void).cxx_destruct;

@end
