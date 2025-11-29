@class NSString;
@protocol BDSCSearchMutuallyExclusiveTask, AWESCSearchMutuallyExclusiveTaskDelegate;

@interface AWESCDefaultMutuallyExclusiveTask : NSObject <BDSCSearchMutuallyExclusiveTaskDelegate, AWESCSearchMutuallyExclusiveTask>

@property (readonly, nonatomic) id<BDSCSearchMutuallyExclusiveTask> task;
@property (weak, nonatomic) id<AWESCSearchMutuallyExclusiveTaskDelegate> searchMEDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canStopOtherTask:(id)a0;
- (void)willChangeState:(unsigned long long)a0 task:(id)a1;
- (BOOL)canStopSearchMETaskNow;
- (void)stopSearchMETask;
- (void).cxx_destruct;
- (id)init;

@end
