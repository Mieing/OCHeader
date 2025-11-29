@class NSDictionary;

@interface BDSetBcmPageParamsV2ParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *bcm;
@property (nonatomic) BOOL clearOldValue;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
