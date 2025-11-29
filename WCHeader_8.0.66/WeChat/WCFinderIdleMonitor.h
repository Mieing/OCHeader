@class WCFinderPriorityTask, MMTimer, NSString, WCFinderPriorityQueue;

@interface WCFinderIdleMonitor : MMUserService <CNetworkStatusExt, VoipUIManagerExt, WCFinderVideoTaskInfoExt, MMLiveTaskMgrExt, MMServiceProtocol>

@property (retain, nonatomic) WCFinderPriorityQueue *priorityQueue;
@property (retain, nonatomic) WCFinderPriorityTask *currentTask;
@property (retain, nonatomic) MMTimer *checkIdleTimer;
@property (copy, nonatomic) id /* block */ defaultMediaWrapCreateBlock;
@property (copy, nonatomic) id /* block */ firstFrameMediaWrapCreateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onEnterBackground:(id)a0;
- (void)onEnterForeground:(id)a0;
- (void)addTaskInfoWithTidArray:(id)a0 commentScene:(int)a1 priority:(unsigned long long)a2 groupID:(id)a3 preserveOldTask:(BOOL)a4 taskInfoType:(unsigned long long)a5;
- (void)addTaskInfoWithTidArray:(id)a0 commentScene:(int)a1 priority:(unsigned long long)a2 groupID:(id)a3 preserveOldTask:(BOOL)a4 customMediaWrap:(id /* block */)a5;
- (void)cancelGroupIDTask:(id)a0;
- (void)checkIdleAndExecuteTask;
- (void)excuteTask:(id)a0;
- (void)startCheckIdleTimer;
- (void)stopCheckIdleTimer;
- (void)pauseCurrentTask;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)onSimCardNetTypeChange;
- (void)handleNetworkChange;
- (BOOL)_canDownloadByCurrentNetWork;
- (void)UIManagerWillOpenWindowWithContact:(id)a0 isCaller:(BOOL)a1 monoMsg:(id)a2 startInApp:(BOOL)a3 isEarMode:(BOOL)a4 isAudioMode:(BOOL)a5 from:(unsigned long long)a6 isIlink:(BOOL)a7;
- (void)UIManagerDidCloseCompletely;
- (void)onLiveTaskEnterLive:(id)a0;
- (void)onExitLiveSuccessWithLiveTaskId:(id)a0;
- (void)videoTaskInfoStatusChange:(unsigned long long)a0 mediaWrap:(id)a1;
- (void)downloadTaskDidFinishWithMediaWrap:(id)a0;
- (void)reportIdleMonitorInterruptedAction:(unsigned long long)a0 isInterrupted:(BOOL)a1;
- (void)reportIdleMonitorWithTid:(id)a0 commentScene:(unsigned long long)a1 priority:(unsigned long long)a2 actionType:(unsigned long long)a3;
- (void)reportIdleMonitorWithTid:(id)a0 commentScene:(unsigned long long)a1 priority:(unsigned long long)a2 actionType:(unsigned long long)a3 interruptedType:(unsigned long long)a4;
- (void).cxx_destruct;

@end
