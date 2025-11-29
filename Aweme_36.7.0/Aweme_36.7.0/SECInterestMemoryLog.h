@class NSString, NSMutableArray, YYMemoryCache;

@interface SECInterestMemoryLog : NSObject

@property (retain, nonatomic) NSMutableArray *timeSeries;
@property (retain, nonatomic) YYMemoryCache *log;
@property (copy, nonatomic) NSString *logType;

- (void)addLogItem:(id)a0;
- (id)searchLogsBetween:(double)a0 andTime:(double)a1;
- (void).cxx_destruct;
- (id)initWithType:(id)a0;
- (id)cacheWithName:(id)a0;

@end
