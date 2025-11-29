@class NSString, NSArray;

@interface AWEXBridgePdaUpdateAwemeCacheMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSArray *aweme;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
