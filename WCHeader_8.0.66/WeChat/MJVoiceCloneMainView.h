@class MMUILabel, NSString, MJRecordingControlView, MMUIButton, MJMessageBubbleView;
@protocol MJVoiceCloneMainViewDelegate;

@interface MJVoiceCloneMainView : UIView <MJRecordingControlViewDelegate>

@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *instructionLabel;
@property (retain, nonatomic) MJMessageBubbleView *contentBubbleView;
@property (retain, nonatomic) MJRecordingControlView *recordingControlView;
@property (weak, nonatomic) id<MJVoiceCloneMainViewDelegate> delegate;
@property (retain, nonatomic) NSString *regText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)closeButtonDidTouchUpInside:(id)a0;
- (void)recordingControlViewDidStartRecording:(id)a0;
- (void)recordingControlViewDidStopRecording:(id)a0;
- (void)recordingControlViewDidCancelRecording:(id)a0;
- (void).cxx_destruct;

@end
