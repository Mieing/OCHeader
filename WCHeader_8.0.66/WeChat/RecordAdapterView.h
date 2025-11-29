@class NSString, MMNewVoiceInputReportObj, MMTransparentButton;
@protocol RecordViewDelegate;

@interface RecordAdapterView : UIView

@property (retain, nonatomic) NSString *chatUserName;
@property (weak, nonatomic) id<RecordViewDelegate> delegate;
@property (weak, nonatomic) MMTransparentButton *recordButton;
@property (nonatomic) BOOL isTouchEnd;
@property (nonatomic) BOOL bForbidVoiceTrans;
@property (nonatomic) BOOL bPreventRecordViewExit;
@property (retain, nonatomic) MMNewVoiceInputReportObj *reportObj;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ForbidVoiceTrans:(BOOL)a1 ChatName:(id)a2;
- (BOOL)canShowTransEntry;
- (BOOL)needPopUpBackgroundViewController;
- (BOOL)isRecordBkgShow;
- (void)onTouchBeginWithTouches:(id)a0;
- (void)onTouchMoveWithTouches:(id)a0;
- (void)onTouchEndWithTouches:(id)a0;
- (void)onTouchCancelWithTouches:(id)a0;
- (void)setPeakPower:(float)a0;
- (void)showPreparingTips;
- (void)showRecordCancelTips;
- (void)showRecordingTips;
- (void)showTooShortTips;
- (void)showTooLongTips;
- (void)showRecordStartFailTips:(id)a0;
- (void)hiddenRecordView;
- (void)cancelVoiceRecording;
- (void)forceCancelVoiceRecording;
- (void)forceStopVoiceRecording;
- (BOOL)changeStateWhenRecordEnd;
- (BOOL)onRecordCountRemainSec:(long long)a0 IsShow:(BOOL)a1;
- (unsigned long long)getRecordState;
- (BOOL)isPointInRecordButton:(struct CGPoint { double x0; double x1; })a0;
- (void)startRecordingWithRecordBtn:(id)a0;
- (void)startTextMsgAnimate:(id)a0;
- (void)onTouchEndSendVoiceMsg;
- (void).cxx_destruct;

@end
