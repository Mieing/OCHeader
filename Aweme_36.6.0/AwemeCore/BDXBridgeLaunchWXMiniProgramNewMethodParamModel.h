@class NSString, NSNumber;

@interface BDXBridgeLaunchWXMiniProgramNewMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *programID;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *miniProgramType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
