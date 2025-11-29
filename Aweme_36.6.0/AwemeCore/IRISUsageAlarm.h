@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IRISUsageAlarm : NSObject {
    NSMutableArray *currentKeys;
    NSObject<OS_dispatch_queue> *queue;
    void *queue_tag;
}

@property (nonatomic) double period;
@property (nonatomic) double threshold;
@property (copy, nonatomic) id /* block */ notifier;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) unsigned long long leeway;

+ (id)alarmWithBlock:(id /* block */)a0 timeWindow:(double)a1 threshold:(unsigned long long)a2 options:(id)a3;

- (BOOL)isCurrentlyAlarmTriggered;
- (void).cxx_destruct;
- (id)init;
- (void)count:(id)a0;

@end
