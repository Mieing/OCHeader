@interface IESLiveRevenueInteractPreMonitorSetting : NSObject

@property (nonatomic) double checkInterval;
@property (nonatomic) double duration;
@property (nonatomic) long long sampleCount;

- (id)initWithSettingDict:(id)a0;

@end
