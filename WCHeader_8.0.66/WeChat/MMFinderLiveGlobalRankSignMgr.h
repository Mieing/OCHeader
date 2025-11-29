@class NSString, NSMutableDictionary, MMLiveTask;

@interface MMFinderLiveGlobalRankSignMgr : MMUserService <MMLiveTaskMgrExt, MMServiceProtocol>

@property (readonly, nonatomic) unsigned long long maxAnimationInvokeCnt;
@property (nonatomic) unsigned long long currAnimatedRankSignCnt;
@property (retain, nonatomic) NSMutableDictionary *animatingRankSignDict;
@property (retain, nonatomic) NSMutableDictionary *pendingRankSignDict;
@property (readonly, nonatomic) MMLiveTask *currentLiveTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)applyToInvokeAnimation:(id)a0 maxDuration:(double)a1 taskId:(id)a2 callback:(id /* block */)a3;
- (void)cancelApplyAndInvoke:(id)a0 taskId:(id)a1;
- (void)increaseAnimatedRankSignCnt;
- (void)decreaseAnimatedRankSignCnt;
- (BOOL)checkRankSignViewIsAnimating:(id)a0 taskId:(id)a1;
- (void)innerApplyToInvokeAnimation:(id)a0 maxDuration:(double)a1 taskId:(id)a2 callback:(id /* block */)a3;
- (void)tryToInvokeNextAnimationWithTaskId:(id)a0;
- (BOOL)isAnimatingRankSignListOverMaxLimit:(id)a0;
- (void)removeRankSignViewFromAnimatingList:(id)a0 taskId:(id)a1;
- (void)removeRankSignViewFromPendingList:(id)a0 taskId:(id)a1;
- (void)checkCurrentRankSignRecordsValid:(id)a0;
- (id)getAnimatingRankSignListWithTaskId:(id)a0 autoCreate:(BOOL)a1;
- (id)getPendingRankSignListWithTaskId:(id)a0 autoCreate:(BOOL)a1;
- (void)onLiveTaskEnterLive:(id)a0;
- (void)onExitLiveSuccessWithLiveTaskId:(id)a0;
- (void)startMonitor;
- (void)stopMonitor;
- (void)contineMonitor;
- (void)invokeMonitor;
- (void).cxx_destruct;

@end
