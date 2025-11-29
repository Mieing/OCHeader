@class AWETokamakRelaunchReason, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AWETokamakRelaunchReasonDetector : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_group> *_trackerReadyGroup;
    AWETokamakRelaunchReason *_reason;
    NSMutableArray *_callbacks;
}

+ (id)shared;

- (void)onAppWillTerminate:(id)a0;
- (void)onHMDOOMCrashDetectionFinished:(id)a0;
- (void)onHMDOOMCrashDetectionFinished_I:(id)a0;
- (BOOL)shouldReportByReason:(unsigned int)a0;
- (void)onTrackerReady;
- (void)queryReason:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
