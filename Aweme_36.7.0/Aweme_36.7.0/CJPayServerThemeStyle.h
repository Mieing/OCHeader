@class UIColor, NSString, CJPayButtonStyle, NSArray, CJPayCheckBoxStyle;

@interface CJPayServerThemeStyle : JSONModel

@property (copy, nonatomic) NSString *themeString;
@property (retain, nonatomic) CJPayButtonStyle *buttonStyle;
@property (retain, nonatomic) CJPayCheckBoxStyle *checkBoxStyle;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (retain, nonatomic) UIColor *agreementTextColor;
@property (nonatomic) unsigned long long theme;
@property (retain, nonatomic) UIColor *cursorColor;
@property (retain, nonatomic) UIColor *withdrawTipsColor;
@property (retain, nonatomic) UIColor *warningTextColor;
@property (copy, nonatomic) NSArray *themedH5PathList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (unsigned long long)themeFromString:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
