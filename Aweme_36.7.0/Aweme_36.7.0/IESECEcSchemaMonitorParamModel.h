@class NSString;

@interface IESECEcSchemaMonitorParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *params;
@property (copy, nonatomic) NSString *contextProvider;
@property (copy, nonatomic) NSString *scriptPath;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
