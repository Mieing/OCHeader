@class NSString, NSDictionary;

@interface AWEAdPlayableMultifunctionParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *params;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
