@class NSString, MJRecordingControl, MMUIButton;
@protocol MJNarrationRecordingControlViewDelegate;

@interface MJNarrationRecordingControlView : UIView <MJRecordingControlDelegate>

@property (nonatomic) BOOL isHoldRecording;
@property (retain, nonatomic) MJRecordingControl *backingControl;
@property (nonatomic) unsigned long long narrationType;
@property (retain, nonatomic) MMUIButton *typeSwitchButton;
@property (weak, nonatomic) id<MJNarrationRecordingControlViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithNarrationType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 narrationType:(unsigned long long)a1;
- (void)layoutSubviews;
- (void)setupViews;
- (void)setupBackingControl;
- (void)setupTypeSwitchButton;
- (void)layoutViews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)reset;
- (void)impactFeedback;
- (void)updateLevelMeterWithPeakPower:(float)a0;
- (void)forceStopRecordingManually;
- (void)recordingControlDidStartRecording:(id)a0;
- (void)recordingControlDidStopRecording:(id)a0;
- (void)recordingControlDidCancelRecording:(id)a0;
- (void)beginHoldRecordingImpl;
- (void)endHoldRecordingImpl;
- (void)cancelHoldRecordingImpl;
- (id)_getReportNameWithNarrationType:(unsigned long long)a0;
- (void)switchToNarrationType:(unsigned long long)a0;
- (void)typeSwitchButtonDidTouchUpInside:(id)a0;
- (void).cxx_destruct;

@end
