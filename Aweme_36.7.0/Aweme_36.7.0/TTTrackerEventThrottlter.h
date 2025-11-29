@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TTTrackerEventThrottlter : NSObject {
    NSMutableArray *currentEvents;
    NSObject<OS_dispatch_queue> *queue;
}

@property (nonatomic) double period;
@property (nonatomic) double threshold;
@property (copy, nonatomic) id /* block */ notifier;
@property (retain, nonatomic) NSDictionary *options;

+ (id)throttlterWithNotifier:(id /* block */)a0 period:(double)a1 threshold:(unsigned long long)a2 options:(id)a3;

- (BOOL)isAvalible;
- (void)waitDone;
- (void).cxx_destruct;
- (id)init;
- (BOOL)addEvent:(id)a0;

@end
