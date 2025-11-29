@class NSMutableDictionary;

@interface AWEMVChannelCardPerformanceMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *loadTimeMap;

- (void)startLoadCard:(id)a0;
- (void)finishLoadCard:(id)a0 cardType:(unsigned long long)a1 isPreloaded:(BOOL)a2;
- (void).cxx_destruct;
- (double)currentDate;

@end
