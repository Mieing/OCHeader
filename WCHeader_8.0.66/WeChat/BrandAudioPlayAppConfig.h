@class NSString;
@protocol TingPlayAppMinimizeDelegate;

@interface BrandAudioPlayAppConfig : NSObject <MinimizeTaskStateInfoDelegate, TingPlayAppConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TingPlayAppMinimizeDelegate> minimizeDelegate;

- (int)audioModuleScene;
- (void)onMinimizeTap;
- (void)updateTaskDataBeforeMinimize:(id)a0;
- (id)minimizeStateDelegate;
- (void)onTerminateMinimizeTask;
- (BOOL)standaloneReportInstance;
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
