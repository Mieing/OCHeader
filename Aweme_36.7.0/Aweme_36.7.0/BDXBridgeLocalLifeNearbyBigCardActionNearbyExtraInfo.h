@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeLocalLifeNearbyBigCardActionNearbyExtraInfo : BDXBridgeModel

@property (copy, nonatomic) NSString *cid;
@property (retain, nonatomic) NSNumber *playbackRate;
@property (retain, nonatomic) NSNumber *isPlaying;
@property (retain, nonatomic) NSNumber *enableAnimation;
@property (copy, nonatomic) NSDictionary *contextParams;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
