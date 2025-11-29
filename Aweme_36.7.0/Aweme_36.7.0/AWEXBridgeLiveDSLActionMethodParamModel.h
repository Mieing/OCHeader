@class NSString, NSDictionary;

@interface AWEXBridgeLiveDSLActionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *fields;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
