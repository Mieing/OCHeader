@class NSString, NSDictionary;

@interface BDXBridgeOnMessageFromWebviewMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
