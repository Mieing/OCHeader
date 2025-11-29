@interface BDPBannerFrequencyControlData : NSObject

@property (nonatomic) double lastCloseTime;
@property (nonatomic) long long closeTimes;

- (id)initWithTime:(double)a0;

@end
