@class UIColor, NSString;

@interface IESGCPDetailTitleReserveButtonThemeConfig : NSObject

@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;

+ (id)reserveButtonThemeConfigFrom:(id)a0 reserveButtonState:(long long)a1;

- (void)setupOldDetailReserveButtonThemeFrom:(long long)a0;
- (void)setupDarkBackgroundStyleButtonThemeFrom:(long long)a0;
- (void)setupLightBackgroundStyleButtonThemeFrom:(long long)a0;
- (void).cxx_destruct;

@end
