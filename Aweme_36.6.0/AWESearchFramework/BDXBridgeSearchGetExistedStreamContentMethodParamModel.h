@class NSString;

@interface BDXBridgeSearchGetExistedStreamContentMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *cardID;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
