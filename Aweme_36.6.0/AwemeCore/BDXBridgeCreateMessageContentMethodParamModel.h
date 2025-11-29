@class NSNumber, NSDictionary;

@interface BDXBridgeCreateMessageContentMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *msgType;
@property (retain, nonatomic) NSNumber *aweType;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
