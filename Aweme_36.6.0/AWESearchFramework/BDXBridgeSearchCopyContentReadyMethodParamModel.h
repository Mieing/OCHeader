@class NSString;

@interface BDXBridgeSearchCopyContentReadyMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *data;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
