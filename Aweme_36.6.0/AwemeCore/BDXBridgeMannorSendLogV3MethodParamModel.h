@class NSString, NSDictionary;

@interface BDXBridgeMannorSendLogV3MethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
