@class NSString;

@interface AWEIMSecurityGlobalToastContentConfigModel_UIConfig_OptionModel_CheckboxModel : AWEBaseApiModel

@property (nonatomic) BOOL selectValue;
@property (nonatomic) long long checkboxID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *reportValue;
@property (nonatomic) BOOL defaultChoose;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;

@end
