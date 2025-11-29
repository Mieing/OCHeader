@class NSString, NSDictionary;

@interface BDXBridgeMannorSendMannorEventMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventAreaKey;
@property (copy, nonatomic) NSString *eventNameKey;
@property (copy, nonatomic) NSDictionary *extraData;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
