@class NSDictionary, NSHashTable, NSLock, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface TTrackerPriorityTimer : NSObject {
    NSLock *locker;
    BOOL runing;
    _Atomic unsigned long long interval_multiple_count;
    NSObject<OS_dispatch_source> *priority_timer;
    NSObject<OS_dispatch_queue> *base_queue;
    double base_interval;
    NSHashTable *triggerList;
    NSDictionary *settingByPriority;
}

+ (id)pluginVersion;
+ (id)sharedTimer;
+ (id)plugin;

- (void)unregisterTimer:(id)a0;
- (void)registerTimer:(id)a0;
- (id)base_queue;
- (void).cxx_destruct;
- (void)suspend;
- (id)init;
- (void)resume;
- (void)notifyTimer;

@end
