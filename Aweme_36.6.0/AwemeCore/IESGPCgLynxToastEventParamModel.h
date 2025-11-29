@class NSDictionary;

@interface IESGPCgLynxToastEventParamModel : IESLiveBridgeModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSDictionary *extraInfo;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
