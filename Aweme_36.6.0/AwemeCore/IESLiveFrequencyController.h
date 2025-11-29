@class NSMutableArray;

@interface IESLiveFrequencyController : NSObject

@property (retain, nonatomic) NSMutableArray *history;
@property (nonatomic) unsigned long long maximumTimes;
@property (nonatomic) unsigned long long unitTime;

+ (long long)_triggerWithMaximumTimes:(unsigned long long)a0 unitTime:(unsigned long long)a1 history:(id)a2;
+ (double)_currentTimestampInSeconds;

- (void).cxx_destruct;

@end
