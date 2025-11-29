@class NSNumber;

@interface BDXBridgeScanCodeMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL cameraOnly;
@property (retain, nonatomic) NSNumber *autoJump;
@property (nonatomic) BOOL enableAnalysis;

+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
