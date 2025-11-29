@class NSString, NSDictionary, NSArray;

@interface BDXBridgeTextExtractionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *aweme_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSDictionary *log_extra;
@property (retain, nonatomic) NSArray *text;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
