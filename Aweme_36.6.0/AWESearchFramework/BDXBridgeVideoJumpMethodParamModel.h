@class NSNumber, NSString;

@interface BDXBridgeVideoJumpMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSString *searchScene;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
