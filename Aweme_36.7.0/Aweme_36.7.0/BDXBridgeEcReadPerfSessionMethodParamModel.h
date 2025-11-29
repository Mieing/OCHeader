@class NSString;

@interface BDXBridgeEcReadPerfSessionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *stage;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
