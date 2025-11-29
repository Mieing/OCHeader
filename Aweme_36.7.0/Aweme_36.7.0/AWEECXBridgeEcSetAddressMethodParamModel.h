@class NSNumber, NSDictionary;

@interface AWEECXBridgeEcSetAddressMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *source_type;
@property (nonatomic) BOOL is_session;
@property (copy, nonatomic) NSDictionary *address;
@property (copy, nonatomic) NSDictionary *extra_params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
