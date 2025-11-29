@class NSMutableArray;

@interface WCFinderIntervalManager : NSObject

@property (retain, nonatomic) NSMutableArray *intervals;

- (id)init;
- (void)addIntervalFrom:(long long)a0 to:(long long)a1;
- (void)removeAllInterval;
- (BOOL)isNumberInIntervals:(long long)a0;
- (void).cxx_destruct;

@end
