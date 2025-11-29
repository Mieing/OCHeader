@class NSArray, AWEIMSecurityGlobalToastContentConfigModel_UIConfig;

@interface AWEIMSecurityGlobalToastContentConfigModel : AWEBaseApiModel

@property (nonatomic) long long toastID;
@property (nonatomic) long long toastUIType;
@property (retain, nonatomic) AWEIMSecurityGlobalToastContentConfigModel_UIConfig *toastUIConfig;
@property (copy, nonatomic) NSArray *contentConfigs;

+ (id)contentConfigsJSONTransformer;
+ (id)toastUIConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
