@class NSString, NSDictionary;

@interface BDXBridgeSearchSendAIImageQueryMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSDictionary *imageUrl;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
