@class NSString, NSDictionary;

@interface BDXBridgeMannorSendEventMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *data;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
