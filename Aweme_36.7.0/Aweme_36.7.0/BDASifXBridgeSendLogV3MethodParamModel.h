@class NSString, NSDictionary;

@interface BDASifXBridgeSendLogV3MethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
