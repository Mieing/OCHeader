@class TingTapePlayingInfo, TingMinimizeStayStatics;
@protocol TingMinimizeTaskDelegate;

@interface TingMinimizeBaseTask : NSObject

@property (nonatomic) BOOL bActive;
@property (nonatomic) BOOL bFold;
@property (retain, nonatomic) TingTapePlayingInfo *playingInfo;
@property (nonatomic) BOOL disableOpenMinimizeTask;
@property (retain, nonatomic) TingMinimizeStayStatics *statics;
@property (weak, nonatomic) id<TingMinimizeTaskDelegate> delegate;

- (void)reportTaskFoldStateChangedForReason:(long long)a0;
- (void)reportTaskCloseEventForReason:(long long)a0;
- (void)reportTaskCloseEventForReason:(long long)a0 outterPremptReason:(id)a1;
- (void)reportTaskActiveEvent;
- (void)reportTaskViewClickEvent:(long long)a0;
- (void)reportTaskViewExpEvent;
- (id)baseReportParams;
- (void)dealloc;
- (BOOL)hasMinimizeTask;
- (BOOL)disableMinimizeTask;
- (void)addMinimizeTaskAnimiated:(BOOL)a0;
- (void)addMinimizeTaskAnimiated:(BOOL)a0 voiceTic:(BOOL)a1 fold:(BOOL)a2;
- (void)removeMinimizeTaskAnimiated:(BOOL)a0 onlyFade:(BOOL)a1;
- (void)callMinimizeTaskOpen;
- (BOOL)isTingViewControllerTop:(id)a0;
- (BOOL)canAddMinimization;
- (BOOL)isModuleActive;
- (id)currentPlayer;
- (BOOL)isFold;
- (void)updatePlayingInfo:(id)a0;
- (void)restoreStateFromPlayingInfo:(id)a0;
- (void)onMinimizeTaskActive;
- (void)onMinimizeTaskEngagedForReason:(long long)a0;
- (BOOL)shouldStopPlayWhenTaskEngagedForReason:(long long)a0;
- (void)onMinimizeTaskEngagedForReason:(long long)a0 premptReason:(id)a1;
- (void)onMinimizeTaskTerminate;
- (void)onMinimizeTaskFoldedStateChanged:(BOOL)a0 reason:(long long)a1;
- (void)updateMinimizeTaskStateWithContext:(id)a0 animated:(BOOL)a1;
- (void)updateMinimizeTaskStateWithContext:(id)a0 animated:(BOOL)a1 voiceTic:(BOOL)a2;
- (void)tryShowTaskAnimated:(BOOL)a0 voiceTic:(BOOL)a1;
- (void)hideTaskAnimated:(BOOL)a0;
- (BOOL)isTaskActive;
- (id)copyContainerView;
- (void)openTask;
- (id)taskContainerView;
- (void)updateContentViewIfNeedWithForce:(BOOL)a0;
- (BOOL)canMinimizeBecomeActive:(id)a0;
- (void)onStateViewPlayPauseBtnClick:(BOOL)a0;
- (void)onStateViewNextBtnClick;
- (void)updateTaskDataBeforeMinimize:(id)a0;
- (void)foldTask;
- (void)startAutoFoldTask;
- (void)cancelAutoFoldTask;
- (BOOL)handleOpenTask:(id)a0 completion:(id /* block */)a1;
- (BOOL)isMinimizationToFullScreenPlayerEnabled;
- (void).cxx_destruct;

@end
