@class NSString, NSDictionary;

@interface BDXBridgeSearchCreateEventSourceMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
