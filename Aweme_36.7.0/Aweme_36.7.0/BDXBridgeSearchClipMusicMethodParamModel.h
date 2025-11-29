@class NSDictionary;

@interface BDXBridgeSearchClipMusicMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *music_info;
@property (copy, nonatomic) NSDictionary *log_params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
