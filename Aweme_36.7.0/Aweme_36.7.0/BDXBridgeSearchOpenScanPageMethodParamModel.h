@class NSNumber, NSString;

@interface BDXBridgeSearchOpenScanPageMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *cameraOnly;
@property (retain, nonatomic) NSNumber *autoJump;
@property (retain, nonatomic) NSNumber *avoidLogin;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *landingTab;
@property (retain, nonatomic) NSNumber *enableAnalysis;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
