@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveTaskScheduleMonitor : NSObject {
    BOOL _enable;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *manageDurationTasks;
@property (retain, nonatomic) NSMutableArray *managingTasks;

- (void)reportIfNeeded;
- (void)manageBegin:(id)a0;
- (void)manageEnd:(id)a0;
- (void)manageEndMoreTasks:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
