@class NSNumber, NSDictionary, NSString;

@interface BDXBridgeLoadMoreSearchVideoListMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *enable_new_error_code;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *sessionid;
@property (nonatomic) long long type;

+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
