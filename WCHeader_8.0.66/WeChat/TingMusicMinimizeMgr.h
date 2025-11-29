@class TingMinimizeMgr;

@interface TingMusicMinimizeMgr : TingPlayAppMinimieBase

@property (retain, nonatomic) TingMinimizeMgr *minimizeMgr;

- (id)initWithTaskName:(id)a0 moduleScene:(int)a1;
- (void)activeMinimizeTask;
- (void)deactiveMinimizeTask;
- (BOOL)hasActiveMinimieTask;
- (id)minimizeTaskData;
- (BOOL)canAddMinimizeTask;
- (void)initUITask;
- (void)onTerminateMinimizeTask;
- (void)onMinimizeTaskInitInMainThread;
- (void)onForegroundStateChangedInMainThread:(BOOL)a0;
- (void)onPlayingInfoChangedInMainThread:(id)a0;
- (void).cxx_destruct;

@end
