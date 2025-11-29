@class VoiceRecordView, NSString;

@interface RecordViewV2 : RecordAdapterView <VoiceRecordViewDelegate>

@property (retain, nonatomic) VoiceRecordView *recordView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ForbidVoiceTrans:(BOOL)a1 ChatName:(id)a2;
- (void)setDelegate:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)deviceDidRotate:(id)a0;
- (void)setReportObj:(id)a0;
- (BOOL)bPreventRecordViewExit;
- (BOOL)needPopUpBackgroundViewController;
- (void)setBPreventRecordViewExit:(BOOL)a0;
- (void)onTouchBeginWithTouches:(id)a0;
- (void)onTouchMoveWithTouches:(id)a0;
- (void)onTouchEndWithTouches:(id)a0;
- (void)onTouchCancelWithTouches:(id)a0;
- (void)setPeakPower:(float)a0;
- (void)showPreparingTips;
- (void)showRecordingTips;
- (void)showTooShortTips;
- (void)showRecordStartFailTips:(id)a0;
- (void)showTooLongTips;
- (void)hiddenRecordView;
- (BOOL)onRecordCountRemainSec:(long long)a0 IsShow:(BOOL)a1;
- (BOOL)changeStateWhenRecordEnd;
- (void)cancelTrans;
- (void)cancelVoiceRecording;
- (void)startRecordingWithRecordBtn:(id)a0;
- (void)startTextMsgAnimate:(id)a0;
- (void)onExit;
- (void)forceCancelVoiceRecording;
- (void)forceStopVoiceRecording;
- (void)onTouchEndSendVoiceMsg;
- (void).cxx_destruct;

@end
