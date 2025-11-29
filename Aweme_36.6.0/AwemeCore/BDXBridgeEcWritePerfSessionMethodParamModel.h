@class NSString, NSDictionary;

@interface BDXBridgeEcWritePerfSessionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *stage;
@property (copy, nonatomic) NSString *stage_type;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSDictionary *stage_data;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
