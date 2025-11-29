@class NSString, NSDictionary;

@interface BDXBridgeBatchEventMethodActionParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSDictionary *params;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
