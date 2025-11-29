@class NSDictionary, NSNumber;

@interface BDXBridgePlayMusicWithActionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *music;
@property (copy, nonatomic) NSDictionary *music_extra;
@property (retain, nonatomic) NSNumber *current_time;
@property (copy, nonatomic) NSDictionary *log_extra;
@property (nonatomic) long long action;

+ (id)requiredKeyPaths;
+ (id)actionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
