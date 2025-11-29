@class UIView, MMLoadingIndicatorView, NSDate, UILabel, WCRecordFBNormalView, UIButton;

@interface TouchRecordCardView : UIView

@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIButton *roundedButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *cancelLabel;
@property (retain, nonatomic) WCRecordFBNormalView *voiceControlPeakView;
@property (retain, nonatomic) WCRecordFBNormalView *cancelStateVoiceControlPeakView;
@property (retain, nonatomic) MMLoadingIndicatorView *loadingIndicatorView;
@property (nonatomic) BOOL showHintLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSDate *firstShowHintLabelDate;
@property (nonatomic) unsigned long long recordMode;
@property (nonatomic) BOOL isLoading;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)updateDisplay;
- (void)layoutSubviews;
- (void)handleTouches:(id)a0;
- (void)setPeakPower:(float)a0;
- (void)triggerVibrationFeedback;
- (void).cxx_destruct;

@end
