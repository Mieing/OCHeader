@class NSDictionary;

@interface BDXBridgePlayMusicMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *music;
@property (copy, nonatomic) NSDictionary *music_extra;
@property (copy, nonatomic) NSDictionary *log_extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
