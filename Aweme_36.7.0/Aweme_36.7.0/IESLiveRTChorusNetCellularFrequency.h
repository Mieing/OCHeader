@interface IESLiveRTChorusNetCellularFrequency : NSObject

- (BOOL)canShowViewWithMaxCount:(long long)a0 dialogShowDurationTime:(long long)a1;
- (void)updateKV;
- (double)getCurrTimeStampMs;
- (void)reset;

@end
