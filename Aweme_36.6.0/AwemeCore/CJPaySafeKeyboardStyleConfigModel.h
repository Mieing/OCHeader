@class NSString, UIFont;

@interface CJPaySafeKeyboardStyleConfigModel : NSObject

@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *deleteImageName;
@property (nonatomic) double rowGap;
@property (nonatomic) double buttonCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) BOOL enableSecure;

+ (id)modelWithType:(unsigned long long)a0;
+ (id)p_configDenoiseKeyboardTypeModelV2;
+ (id)p_configDenoiseKeyboardTypeModel;
+ (id)defaultModel;

- (void).cxx_destruct;

@end
