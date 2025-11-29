@class NSString, NSNumber;

@interface BDXBridgeCollectMusicMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *music_id;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *position;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
