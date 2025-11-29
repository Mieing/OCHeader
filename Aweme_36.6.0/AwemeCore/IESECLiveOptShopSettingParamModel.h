@class NSString;

@interface IESECLiveOptShopSettingParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *defaultValue;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
