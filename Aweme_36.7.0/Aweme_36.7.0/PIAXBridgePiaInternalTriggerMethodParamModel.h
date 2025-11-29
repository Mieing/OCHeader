@class NSString, NSDictionary;

@interface PIAXBridgePiaInternalTriggerMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *ext;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
