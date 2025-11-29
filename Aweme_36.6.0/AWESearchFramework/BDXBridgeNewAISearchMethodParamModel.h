@class NSString;

@interface BDXBridgeNewAISearchMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *clientServerExtra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
