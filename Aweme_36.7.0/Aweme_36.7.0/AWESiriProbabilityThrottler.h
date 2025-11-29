@class NSDate;

@interface AWESiriProbabilityThrottler : NSObject

@property long long totalRequests;
@property long long droppedRequests;
@property (retain, nonatomic) NSDate *startTime;

- (BOOL)shouldDropForResourceLevel:(unsigned long long)a0;
- (double)getDropProbabilityForLevel:(unsigned long long)a0;
- (BOOL)shouldDropWithProbability:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
