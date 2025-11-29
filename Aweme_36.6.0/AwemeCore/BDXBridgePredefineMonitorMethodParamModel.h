@class NSString, NSNumber;

@interface BDXBridgePredefineMonitorMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *timeCull;
@property (retain, nonatomic) NSNumber *feDuration;
@property (copy, nonatomic) NSString *schemaPkgs;
@property (retain, nonatomic) NSNumber *schemaPkgNum;
@property (copy, nonatomic) NSString *predefinePkgs;
@property (retain, nonatomic) NSNumber *predefinePkgNum;
@property (copy, nonatomic) NSString *predefineState;
@property (copy, nonatomic) NSString *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
