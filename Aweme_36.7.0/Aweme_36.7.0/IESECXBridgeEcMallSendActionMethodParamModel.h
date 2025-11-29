@class NSString;

@interface IESECXBridgeEcMallSendActionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *action;
@property (nonatomic) BOOL instant_or_wind;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
