@class NSString, NSNumber;

@interface BDXBridgeOfShowRealNamePageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *client_key;
@property (copy, nonatomic) NSString *source_from;
@property (retain, nonatomic) NSNumber *is_landspace;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
