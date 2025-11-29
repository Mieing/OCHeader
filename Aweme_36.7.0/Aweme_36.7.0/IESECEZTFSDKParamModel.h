@class NSString, NSDictionary;

@interface IESECEZTFSDKParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *module;
@property (copy, nonatomic) NSDictionary *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
