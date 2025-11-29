@class NSMutableOrderedSet;
@protocol AppMonitorTask;

@interface AppMonitorTaskPool : NSThread {
    NSMutableOrderedSet<AppMonitorTask> *taskList;
    float miniInterval;
}

+ (id)sharedAppMonitorTaskPool;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)addTask:(id)a0 forKey:(id)a1;
- (void)startMainLoop;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)main;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeTaskForKey:(id)a0;

@end
