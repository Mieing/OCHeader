@class UIColor, NSString;

@interface IESGCPDetailTestGameApplyButtonThemeConfig : NSObject

@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;

+ (id)testGameApplyButtonThemeConfigWithState:(unsigned long long)a0 contentStyle:(id)a1 themeConfig:(id)a2 useHalfScreenConfig:(BOOL)a3;

- (void)setupDarkBackgroundStyleButtonThemeFrom:(unsigned long long)a0 contentStyle:(id)a1;
- (void)setupLightBackgroundStyleButtonThemeFrom:(unsigned long long)a0 contentStyle:(id)a1;
- (void).cxx_destruct;

@end
