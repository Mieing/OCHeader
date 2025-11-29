@class NSMutableDictionary;

@interface SLIXCountdownTimeCenter : NSObject

@property (nonatomic) unsigned long long initialMachTimeInMs;
@property (nonatomic) double initialRealTime;
@property (retain, nonatomic) NSMutableDictionary *timersByKey;
@property (readonly, nonatomic) double currTimestamp;

+ (id)shared;

- (id)init_private;
- (void)removeTimerListener:(id)a0;
- (double)currTimestampWithServerTimeDelta:(long long)a0;
- (id)keyWithInterval:(double)a0;
- (void)addTimerListener:(id)a0 interval:(double)a1;
- (void).cxx_destruct;

@end
