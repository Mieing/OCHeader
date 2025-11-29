@class WifiStrategy, ExpireTimeStrategy, NSMutableArray, BatteryStrategy;

@interface MessageExposureStrategy : NSObject

@property (retain, nonatomic) NSMutableArray *history_message_list;
@property (nonatomic) unsigned int exposure_count;
@property (retain, nonatomic) WifiStrategy *wifi_strategy;
@property (retain, nonatomic) ExpireTimeStrategy *expire_time_strategy;
@property (retain, nonatomic) BatteryStrategy *battery_strategy;
@property (nonatomic) unsigned int channel;
@property (nonatomic) float click_score;
@property (nonatomic) int ignore_exceed_exposure;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
