@class NSString, NSArray, AWEIMSecurityGlobalToastContentConfigModel_UIConfig_OptionModel;

@interface AWEIMSecurityGlobalToastContentConfigModel_UIConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *headImageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descText;
@property (nonatomic) BOOL descTextNeedLeftAlignment;
@property (copy, nonatomic) NSArray *params;
@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) AWEIMSecurityGlobalToastContentConfigModel_UIConfig_OptionModel *option;

+ (id)paramsJSONTransformer;
+ (id)buttonsJSONTransformer;
+ (id)optionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
