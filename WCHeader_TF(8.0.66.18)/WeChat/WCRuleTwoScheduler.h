@interface WCRuleTwoScheduler : WCBaseScheduler

@property (nonatomic) double lapseRate;
@property (nonatomic) double sliceTime;
@property (nonatomic) double secondFuncLapseRate;
@property (nonatomic) double limitTimes;
@property (nonatomic) double connectPointX;

- (double)getFuncLapseRate:(struct CGPoint { double x0; double x1; })a0;
- (double)getFirstFuncYWithX:(double)a0;
- (double)getNextDownloadTimeWhenPlaying;

@end
