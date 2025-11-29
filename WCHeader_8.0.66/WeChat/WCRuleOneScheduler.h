@interface WCRuleOneScheduler : WCBaseScheduler

@property (nonatomic) double lapseRate;
@property (nonatomic) double sliceTime;

- (double)getNextDownloadTimeWhenPlaying;

@end
