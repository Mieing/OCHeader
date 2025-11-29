@class NSString;
@protocol TingPlayAppConfig;

@interface TingCustomMinizeMgr : TingPlayAppMinimieBase <TingPlayAppMinimizeDelegate>

@property (retain, nonatomic) id<TingPlayAppConfig> playAppConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePlayingInfo:(id)a0;
- (void)onTerminateMinimizeTask;
- (void)onMinimizeTaskInitInMainThread;
- (void)onForegroundStateChangedInMainThread:(BOOL)a0;
- (BOOL)shouldTurnMinimizeActive;
- (void)onPlayingInfoChangedInMainThread:(id)a0;
- (id)copyContainerView;
- (id)minimizeTaskDataForPlayApp;
- (id)customMinimizeStateInfoDelegate;
- (void)onNextBtnClicked:(id)a0;
- (void)onVoiceControlRecordStart:(id)a0;
- (void)onVoiceControlRecordEnd:(id)a0;
- (void)onVoiceControlRecordCancalled:(id)a0;
- (void)setVoicePeakPowerCallback:(id)a0;
- (void)resetVoicePeakPowerCallback;
- (void)onPreviousBtnClicked:(id)a0;
- (void)onBackwards15s:(id)a0;
- (void)onForward30s:(id)a0;
- (void)onSpeedFactorClicked:(id)a0 currentFactor:(long long)a1;
- (void).cxx_destruct;

@end
