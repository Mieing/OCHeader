@class UIColor, NSString;

@interface IESGCPDetailTitleTestGameApplyButtonThemeConfig : NSObject

@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;

+ (id)applyButtonThemeConfigFrom:(id)a0 reserveButtonState:(unsigned long long)a1;

- (void)setupDarkBackgroundStyleButtonThemeFrom:(unsigned long long)a0;
- (void)setupLightBackgroundStyleButtonThemeFrom:(unsigned long long)a0;
- (void).cxx_destruct;

@end
