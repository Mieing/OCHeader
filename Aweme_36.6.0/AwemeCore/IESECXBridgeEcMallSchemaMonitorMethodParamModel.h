@class NSString;

@interface IESECXBridgeEcMallSchemaMonitorMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *params;
@property (copy, nonatomic) NSString *contextProvider;
@property (copy, nonatomic) NSString *scriptPath;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
