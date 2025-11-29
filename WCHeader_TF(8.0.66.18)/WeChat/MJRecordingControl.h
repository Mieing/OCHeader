@class NSString, MJGradientView, UIImageView, UIImage, UIView, UILabel, UIImpactFeedbackGenerator;
@protocol MJRecordingControlDelegate;

@interface MJRecordingControl : UIControl

@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) MJGradientView *recordingBackgroundView;
@property (retain, nonatomic) UIImageView *recordingIconView;
@property (retain, nonatomic) UIView *recordingShadowView;
@property (retain, nonatomic) MJGradientView *cancelBackgroundView;
@property (retain, nonatomic) UIImageView *cancelIconView;
@property (retain, nonatomic) UIView *cancelShadowView;
@property (retain, nonatomic) UILabel *initialTitleLabel;
@property (retain, nonatomic) UILabel *initialTipsLabel;
@property (retain, nonatomic) UILabel *recordingTitleLabel;
@property (retain, nonatomic) UILabel *cancelTitleLabel;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedback;
@property (weak, nonatomic) id<MJRecordingControlDelegate> delegate;
@property (retain, nonatomic) UIImage *initialIcon;
@property (retain, nonatomic) UIImage *recordingIcon;
@property (retain, nonatomic) UIImage *cancelIcon;
@property (retain, nonatomic) NSString *initialTitle;
@property (retain, nonatomic) NSString *initialTips;
@property (retain, nonatomic) NSString *recordingTitle;
@property (retain, nonatomic) NSString *cancelTitle;
@property (readonly, nonatomic) unsigned long long recordingControlState;

- (id)initWithOptions:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)commonLayout;
- (void)resetToInitialState;
- (void)impactFeedback;
- (void)updateLevelMeterWithPeakPower:(float)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)_beginWithTouch:(id)a0 withEvent:(id)a1;
- (void)_continueWithTouch:(id)a0 withEvent:(id)a1;
- (void)_endWithPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_cancel;
- (BOOL)_touchInsideRecording:(id)a0 withEvent:(id)a1;
- (BOOL)_touchInsideCancel:(id)a0 withEvent:(id)a1;
- (void)_updateIcons;
- (void)_setupAllToInitialState;
- (void)_updateRecordingControlState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_updateRecordingControlFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2;
- (void)_setupRecordingViewsToInitial;
- (void)_setupRecordingViewsToHold;
- (void)_setupRecordingViewsToCancel;
- (void)_setupCancelViewsToInitial;
- (void)_setupCancelViewsToHold;
- (void)_setupCancelViewsToHidden;
- (void)forceStopRecordingManually;
- (void).cxx_destruct;

@end
