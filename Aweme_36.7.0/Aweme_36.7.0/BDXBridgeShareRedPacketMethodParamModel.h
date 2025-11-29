@class NSString;

@interface BDXBridgeShareRedPacketMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *identifyId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
