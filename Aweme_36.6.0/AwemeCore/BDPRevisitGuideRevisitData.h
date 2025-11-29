@interface BDPRevisitGuideRevisitData : BDPBasePluginModel

@property (nonatomic) long long payment;
@property (nonatomic) double use_duration;
@property (nonatomic) long long ad_request_times;

- (void)reset;

@end
