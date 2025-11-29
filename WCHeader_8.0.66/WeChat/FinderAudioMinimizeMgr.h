@interface FinderAudioMinimizeMgr : TingPlayAppMinimieBase

- (void)dealloc;
- (void)updatePlayingInfo:(id)a0;
- (void)onMinimizeTaskInitInMainThread;
- (void)onForegroundStateChangedInMainThread:(BOOL)a0;
- (BOOL)shouldTurnMinimizeActive;
- (void)onPlayingInfoChangedInMainThread:(id)a0;

@end
