@class NSString, NSNumber;

@interface BDXBridgeEcBindTencentAccountMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *miniId;
@property (copy, nonatomic) NSString *miniPath;
@property (retain, nonatomic) NSNumber *platform;
@property (retain, nonatomic) NSNumber *miniProgramType;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
