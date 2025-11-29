@class UIColor, NSString;

@interface IESGCPDetailReserveButtonThemeConfig : NSObject

@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) UIColor *subTitleColor;

+ (id)reserveButtonThemeConfigFrom:(id)a0 contentStyle:(id)a1 reserveButtonState:(unsigned long long)a2 reserveButtonData:(id)a3 useHalfScreenConfig:(BOOL)a4;

- (void)setupOldDetailReserveButtonThemeFrom:(unsigned long long)a0;
- (void)setupDarkBackgroundStyleButtonThemeFrom:(unsigned long long)a0 contentStyle:(id)a1 isV3StructureConfig:(BOOL)a2 reserveButtonData:(id)a3;
- (void)setupLightBackgroundStyleButtonThemeFrom:(unsigned long long)a0 contentStyle:(id)a1 reserveButtonData:(id)a2;
- (void).cxx_destruct;

@end
