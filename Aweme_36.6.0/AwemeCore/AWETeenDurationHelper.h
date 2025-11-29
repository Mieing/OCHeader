@interface AWETeenDurationHelper : NSObject

@property (nonatomic) double startTime;

- (double)durationTime;
- (void)startCounting;
- (double)durationTimeAndResetStart:(BOOL)a0;

@end
