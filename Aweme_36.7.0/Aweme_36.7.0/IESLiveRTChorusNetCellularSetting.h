@interface IESLiveRTChorusNetCellularSetting : NSObject

@property (nonatomic) BOOL cellularEnable;
@property (nonatomic) long long cellularMaxCount;
@property (nonatomic) long long dialogAutoHideDurationTime;
@property (nonatomic) unsigned long long txQualityLevel;
@property (nonatomic) long long txQualityCount;
@property (nonatomic) long long dialogShowDurationTime;

- (id)init;

@end
