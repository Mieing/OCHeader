@class NSMutableArray;

@interface IESLiveInnerFeedEventMonitorQueue : NSObject

@property (nonatomic) double preTime;
@property (retain, nonatomic) NSMutableArray *queue;

- (void)pushTime:(id)a0;
- (void)recordPreEventTime;
- (void)recordAfterEventTime;
- (id)avgTime;
- (void).cxx_destruct;
- (id)init;

@end
