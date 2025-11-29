@class UnitRCWeakPtr, NSString, TingPlayAppMinimizeTask;
@protocol TingPlayAppConfig;

@interface TingPlayAppMinimieHelperImpl : NSObject <MinimizeTaskContainerInfoDelegate, TingPlayAppMinimizeTaskDelegate, IMinimizeTaskDelegateInterface, MinimizeTaskStateInfoDelegate, TingPlayAppMinimizeDelegate, TingMinimizeModule, TingPlayAppAudioFocusDelegate>

@property (nonatomic) int moduleScene;
@property (nonatomic) BOOL isForeground;
@property (retain, nonatomic) id<TingPlayAppConfig> playAppConfig;
@property (retain, nonatomic) UnitRCWeakPtr *playApp;
@property (retain, nonatomic) TingPlayAppMinimizeTask *task;
@property (copy, nonatomic) NSString *taskBizName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initUITask;
- (id)initWithPlayAppConfig:(id)a0 playApp:(id)a1;
- (void)dealloc;
- (void)activeMinimizeTask;
- (void)deactiveMinimizeTask;
- (BOOL)hasActiveMinimieTask;
- (void)updatePlayingInfo:(id)a0;
- (void)tingPlayAppAudioFocus:(id)a0 hasFocus:(BOOL)a1;
- (void)setMinimizeTaskFold:(BOOL)a0 animated:(BOOL)a1 interrupted:(BOOL)a2;
- (void)onMinimizeTaskInitInMainThread;
- (void)onForegroundStateChangedInMainThread:(BOOL)a0;
- (BOOL)shouldTurnMinimizeActive;
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
- (id)customMinimizeStateInfoDelegate;
- (void)onNextBtnClicked:(id)a0;
- (id)copyContainerView;
- (id)minimizeTaskDataForPlayApp;
- (void).cxx_destruct;

@end
