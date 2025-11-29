@class NSString, NSDictionary, BDXBridgeOpenEpisodeSheetParams;

@interface BDXBridgeOpenEpisodeSheetMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *log_extra;
@property (copy, nonatomic) NSDictionary *schema_log_extra;
@property (retain, nonatomic) BDXBridgeOpenEpisodeSheetParams *params;

+ (id)requiredKeyPaths;
+ (id)paramsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
