@class NSString, AWEIMSecurityToastConfigModel;

@interface AWEIMSecurityToastConfigResponse : AWEBaseApiModel

@property (copy, nonatomic) NSString *bizScene;
@property (copy, nonatomic) NSString *toastCode;
@property (copy, nonatomic) AWEIMSecurityToastConfigModel *toastConfig;

+ (id)toastConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
