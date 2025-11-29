@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenImageFullPageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sessionid;
@property (retain, nonatomic) NSNumber *aweme_index;
@property (retain, nonatomic) NSNumber *is_auto_play_music;
@property (copy, nonatomic) NSDictionary *log_extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
