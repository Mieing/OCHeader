@class NSDictionary;

@interface BDXBridgeLoginMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *context;
@property (nonatomic) BOOL keepOpen;

+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
