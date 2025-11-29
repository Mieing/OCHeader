@class NSString, NSDictionary;

@interface BDSetBcmParamsParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *paramType;
@property (copy, nonatomic) NSString *updateType;
@property (copy, nonatomic) NSDictionary *content;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
