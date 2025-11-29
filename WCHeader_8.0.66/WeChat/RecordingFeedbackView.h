@class MMUIActivityIndicatorView, UIImageView, UIView, UILabel, UIButton;

@interface RecordingFeedbackView : UIView

@property (nonatomic) BOOL bCanShowVoiceTrans;
@property (retain, nonatomic) UIView *bgBlurView;
@property (retain, nonatomic) UIView *recordTipContentView;
@property (retain, nonatomic) UIImageView *microphoneImageView;
@property (retain, nonatomic) UIImageView *cancelImageView;
@property (retain, nonatomic) UIImageView *recordSignalView;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) UIImageView *cancelTipImageView;
@property (retain, nonatomic) UIImageView *transTipImageView;
@property (retain, nonatomic) UILabel *operateTipsLabel;
@property (retain, nonatomic) UIButton *slideUpwardTipsBtn;
@property (retain, nonatomic) UIImageView *recordWarningView;
@property (retain, nonatomic) UILabel *warningMessageLabel;
@property (retain, nonatomic) UILabel *timeoutCountingLabel;
@property (nonatomic) BOOL bPreparing;
@property (nonatomic) BOOL bTimeOutCounting;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 CanShowVoiceTrans:(BOOL)a1;
- (void)reset;
- (void)setPeakPower:(float)a0;
- (void)setOperatTipLabelAlpha:(double)a0;
- (void).cxx_destruct;

@end
