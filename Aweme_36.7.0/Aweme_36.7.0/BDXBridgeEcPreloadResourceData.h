@class NSString;

@interface BDXBridgeEcPreloadResourceData : BDXBridgeModel

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
