@class NSTimer, NSNumber;

@interface LynxMemoryReportTimer : NSObject

@property (nonatomic) int repeatCount;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ reportBlock;
@property (readonly, nonatomic) unsigned long long reportIntervalSec;
@property (readonly, nonatomic) int triggerCount;
@property (readonly, nonatomic) unsigned long long survivalDurationSec;
@property (readonly, nonatomic) NSNumber *instanceId;

+ (id)startWithInstanceId:(id)a0 reportBlock:(id /* block */)a1;

- (id)initWithInstanceId:(id)a0;
- (void)startWithReportBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stop;

@end
