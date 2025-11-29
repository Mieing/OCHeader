@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenSearchSharePanelMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *aweme_id;
@property (retain, nonatomic) NSNumber *aweme_index;
@property (copy, nonatomic) NSString *sessionid;
@property (copy, nonatomic) NSDictionary *log_extra;
@property (nonatomic) long long type;

+ (id)requiredKeyPaths;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
