@class UnitRCWeakPtr, NSString, TingMinimizeBaseTask;
@protocol TingFlowPlayerProtocol;

@interface TingPlayAppMinimieBase : NSObject <MinimizeTaskContainerInfoDelegate, TingMinimizeTaskDelegate, IMinimizeTaskDelegateInterface, MinimizeTaskStateInfoDelegate, TingMinimizeModule, TingPlayerMinimizeHelperDelegate>

@property (nonatomic) int moduleScene;
@property (nonatomic) BOOL isForeground;
@property (weak, nonatomic) id<TingFlowPlayerProtocol> player;
@property (retain, nonatomic) UnitRCWeakPtr *weakApp;
@property (retain, nonatomic) TingMinimizeBaseTask *task;
@property (copy, nonatomic) NSString *taskBizName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initUITask;
- (id)initWithTaskName:(id)a0 moduleScene:(int)a1;
- (void)dealloc;
- (void)activeMinimizeTask;
- (void)deactiveMinimizeTask;
- (BOOL)hasActiveMinimieTask;
- (void)updatePlayingInfo:(id)a0;
- (void)setMinimizeTaskFold:(BOOL)a0 animated:(BOOL)a1 interrupted:(BOOL)a2;
- (void)onMinimizeTaskInitInMainThread;
- (void)onForegroundStateChangedInMainThread:(BOOL)a0;
- (void)onPlayingInfoChangedInMainThread:(id)a0;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onPlayingInfoUpdate:(id)a0;
- (BOOL)hasMinimizeTask;
- (BOOL)disableMinimizeTask;
- (id)nextLaunchOptionForClientId:(id)a0;
- (void)onAddMinimizeTaskAnimiated:(BOOL)a0 voiceTic:(BOOL)a1 fold:(BOOL)a2;
- (void)onRemoveMinimizeTaskAnimiated:(BOOL)a0 onlyFade:(BOOL)a1;
- (void)onFoldMinimizeTask;
- (void)onTerminateMinimizeTask;
- (id)minimizeTaskData;
- (BOOL)isPlayerInForground;
- (BOOL)canAddMinimizeTask;
- (BOOL)isPlayerModuleActive;
- (void)willOpenMinimizeTask;
- (void)onActiveMinimizeTask;
- (void)onOpenTask;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (BOOL)isMinimizeTaskPlaying:(id)a0;
- (void)onOutContentTask:(id)a0 replacedByAnotherTaskData:(id)a1;
- (void)onOuterContentTaskFoldStateChanged:(id)a0 fold:(BOOL)a1;
- (void)onPlayPauseBtnClicked:(id)a0 isToPlay:(BOOL)a1;
- (void)onNextBtnClicked:(id)a0;
- (void).cxx_destruct;

@end
