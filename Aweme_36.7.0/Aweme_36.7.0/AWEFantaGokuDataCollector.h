@interface AWEFantaGokuDataCollector : AWEFantaAbstractDataCollector

+ (void)_aweLazyRegisterStaticLoad_AWEClientAIAwemeHelper;
+ (id)sharedInstance;

- (void)didChangePlaybackStateWithAction:(id)a0;
- (void)onDataCollectorInit;
- (void)p_registerDataCollectorListenersIfNeeded;
- (void)awemePlayerWillLoopPlayingWith:(id)a0;
- (void)willDisplayCellWithContext:(id)a0;
- (void)didEndDisplayingCellWithContext:(id)a0;
- (void)detailTableVCWillDisplayCellWithContext:(id)a0;
- (void)detailTableVCWillDisappear:(id)a0;
- (void)detailTableVCDidEndDisplayCellBeforeResetWithContext:(id)a0;
- (void)liveStreamPrepareForDisPlay:(id)a0;
- (id)type;
- (unsigned long long)moduleNames;

@end
