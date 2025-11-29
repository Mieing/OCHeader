@class NSString, NSNumber, NSDictionary;

@interface IESECXBridgeEcMallOpenSchemaMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *btm;
@property (nonatomic) BOOL autoHalfPage;
@property (copy, nonatomic) NSString *mallSchema;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *deliverySessionId;
@property (retain, nonatomic) NSNumber *jsb_call_time;
@property (copy, nonatomic) NSDictionary *bcm;
@property (copy, nonatomic) NSDictionary *transitionInfo;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
