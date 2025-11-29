@interface MMLiveUIPerfStatisticResult : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double duration;
@property (nonatomic) double sumComposeArea;
@property (nonatomic) double sumComposeAreaPercent;
@property (nonatomic) int sumRecordCnt;

- (void)updateStartTime:(double)a0 endTime:(double)a1;
- (void)addComposeArea:(struct CGSize { double x0; double x1; })a0;
- (void)addComposeAreaPercent:(double)a0;

@end
