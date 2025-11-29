@class NSString, MJRecordingControl;
@protocol MJRecordingControlViewDelegate;

@interface MJRecordingControlView : UIView <MJRecordingControlDelegate>

@property (nonatomic) BOOL isHoldRecording;
@property (nonatomic) unsigned long long backingControlOptions;
@property (retain, nonatomic) MJRecordingControl *backingControl;
@property (weak, nonatomic) id<MJRecordingControlViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOptions:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)reset;
- (void)impactFeedback;
- (void)updateLevelMeterWithPeakPower:(float)a0;
- (void)recordingControlDidStartRecording:(id)a0;
- (void)recordingControlDidStopRecording:(id)a0;
- (void)recordingControlDidCancelRecording:(id)a0;
- (void)beginHoldRecordingImpl;
- (void)endHoldRecordingImpl;
- (void)cancelHoldRecordingImpl;
- (void).cxx_destruct;

@end
