@class NSString;

@interface BDXBridgeGetLastVsVideoIdMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *episode_id;
@property (copy, nonatomic) NSString *current_period;
@property (copy, nonatomic) NSString *watch_duration;
@property (copy, nonatomic) NSString *watch_ratio;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
