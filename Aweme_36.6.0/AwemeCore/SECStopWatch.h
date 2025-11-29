@class SECMetricsItem, NSString, NSMutableDictionary, NSMutableArray;

@interface SECStopWatch : NSObject {
    NSMutableDictionary *_itemMap;
    NSMutableArray *_itemList;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *currentTask;
@property (retain, nonatomic) SECMetricsItem *globalTask;
@property (retain, nonatomic) SECMetricsItem *pauseTask;

- (BOOL)metricsItemNotEnding:(id)a0;
- (id)subDurations;
- (void)start:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (id)initWithName:(id)a0;
- (unsigned long long)totalDuration;
- (id)allMetrics;

@end
