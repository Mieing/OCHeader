@class AWEIMSecurityGlobalToastContentConfigModel;

@interface AWEIMSecurityGlobalToastConfigResponse : AWEBaseApiModel

@property (nonatomic) long long process_type;
@property (copy, nonatomic) AWEIMSecurityGlobalToastContentConfigModel *contentConfig;

+ (id)contentConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
