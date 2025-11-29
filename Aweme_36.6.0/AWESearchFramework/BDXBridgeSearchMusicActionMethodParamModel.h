@class NSDictionary, NSString, NSNumber;

@interface BDXBridgeSearchMusicActionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *media;
@property (copy, nonatomic) NSString *action;
@property (retain, nonatomic) NSNumber *playback_time;
@property (copy, nonatomic) NSDictionary *music_extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
