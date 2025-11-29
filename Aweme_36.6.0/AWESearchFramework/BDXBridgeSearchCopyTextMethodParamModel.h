@class NSString;

@interface BDXBridgeSearchCopyTextMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *containerID;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
