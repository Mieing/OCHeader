@class NSString, UIFont;

@interface CJPayStandardKeyboardConfigModel : NSObject

@property (nonatomic) unsigned long long keyboardType;
@property (nonatomic) double buttonGap;
@property (nonatomic) double buttonCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) double keyboardWidth;
@property (nonatomic) unsigned long long rowItemCounts;
@property (nonatomic) unsigned long long columnItemCounts;
@property (nonatomic) BOOL disableSecure;
@property (nonatomic) BOOL enableLocalThemeAdp;
@property (copy, nonatomic) NSString *deleteImageName;
@property (copy, nonatomic) NSString *confirmBtnText;
@property (retain, nonatomic) UIFont *confirmBtnTextFont;

+ (id)defaultModelWithKeyboardType:(unsigned long long)a0;

- (void).cxx_destruct;

@end
