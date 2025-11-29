@class NSString;

@interface WCLoopActionMetrics : NSObject {
    double _beginTimeInCurrentLoop;
    double _averageDuration;
}

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) double accumulatedDuration;
@property (readonly, nonatomic) double maxDuration;
@property (readonly, nonatomic) double minDuration;
@property (readonly, nonatomic) unsigned long long accumulatedCount;
@property (readonly, nonatomic) double averageDuration;

- (id)init;
- (id)initWithKey:(id)a0;
- (void)didBeginInCurrentLoop:(double)a0;
- (void)didEndInCurrentLoop:(double)a0;
- (void)didEndInCurrentLoop:(double)a0 actionCount:(unsigned long long)a1;
- (void)didRecordDurationInCurrentLoop:(double)a0;
- (void)didRecordDurationInCurrentLoop:(double)a0 actionCount:(unsigned long long)a1;
- (void).cxx_destruct;

@end
