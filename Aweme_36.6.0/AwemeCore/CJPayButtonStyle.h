@class NSString, UIColor;

@interface CJPayButtonStyle : JSONModel

@property (copy, nonatomic) NSString *disabledAlphaString;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) double disabledAlpha;
@property (retain, nonatomic) UIColor *normalBackgroundColorStart;
@property (retain, nonatomic) UIColor *normalBackgroundColorEnd;
@property (retain, nonatomic) UIColor *disabledBackgroundColorStart;
@property (retain, nonatomic) UIColor *disabledBackgroundColorEnd;
@property (retain, nonatomic) UIColor *highlightColorStart;
@property (retain, nonatomic) UIColor *highlightColorEnd;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
