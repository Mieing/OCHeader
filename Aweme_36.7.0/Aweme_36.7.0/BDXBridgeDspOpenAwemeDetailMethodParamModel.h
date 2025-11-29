@class NSString, NSDictionary;

@interface BDXBridgeDspOpenAwemeDetailMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *chartId;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
