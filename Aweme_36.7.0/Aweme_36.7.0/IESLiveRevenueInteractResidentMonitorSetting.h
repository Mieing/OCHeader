@interface IESLiveRevenueInteractResidentMonitorSetting : NSObject

@property (nonatomic) double checkInterval;
@property (nonatomic) double sampleInterval;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long sampleCount;

- (id)initWithSettingDict:(id)a0;

@end
