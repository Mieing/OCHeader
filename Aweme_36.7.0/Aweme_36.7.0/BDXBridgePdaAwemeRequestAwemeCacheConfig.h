@class NSString;

@interface BDXBridgePdaAwemeRequestAwemeCacheConfig : BDXBridgeModel

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *containerID;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
