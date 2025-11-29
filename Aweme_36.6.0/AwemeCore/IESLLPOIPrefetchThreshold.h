@class NSMutableArray, NSMutableDictionary;

@interface IESLLPOIPrefetchThreshold : NSObject

@property (nonatomic) long long totalLimit;
@property (nonatomic) long long individualLimit;
@property (nonatomic) double interval;
@property (retain, nonatomic) NSMutableArray *totalTimestamps;
@property (retain, nonatomic) NSMutableDictionary *individualTimestamps;
@property (nonatomic) long long totalOverflowCounter;
@property (retain, nonatomic) NSMutableDictionary *individualOverflowCounterDict;

- (id)initWithTotalLimit:(int)a0 individualLimit:(int)a1 interval:(double)a2;
- (BOOL)checkIfReachThreshold:(id)a0 error:(id *)a1;
- (BOOL)checkIfReachThreshold:(id)a0;
- (void).cxx_destruct;

@end
