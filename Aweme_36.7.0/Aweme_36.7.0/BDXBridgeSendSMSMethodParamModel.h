@class NSString;

@interface BDXBridgeSendSMSMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *content;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
