@class RichTextView, NSString, MMLivePauseViewModel, UILabel, UIView, UIButton;
@protocol MMLivePauseViewDelegate;

@interface MMLivePauseView : UIView <ILinkEventExt, MMLivePauseViewModelDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *accumulatedTimeLabel;
@property (retain, nonatomic) UIButton *resumeButton;
@property (retain, nonatomic) RichTextView *contentLabel;
@property (retain, nonatomic) UILabel *subdescriptionLabel;
@property (retain, nonatomic) MMLivePauseViewModel *viewModel;
@property (nonatomic) long long maxCountdown;
@property (nonatomic) long long buttonMaxCountdown;
@property (nonatomic) unsigned int lastType;
@property (weak, nonatomic) id<MMLivePauseViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateAccumulatedTime:(long long)a0;
- (void)clearAccumulatedTime;
- (void)resumeButtonDidClick:(id)a0;
- (id)realButtonTitle:(long long)a0;
- (id)realSubDescTitle:(long long)a0;
- (void)updateCountdownDesc:(long long)a0;
- (void)clearCountdownDesc;
- (void)updateViewModel:(id)a0;
- (void)updateContentForceIfNeeded:(id)a0;
- (void)updateResumeButtonEnabled:(BOOL)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onUpdateEnableResumeButton:(BOOL)a0;
- (void)onStopCountdown;
- (void)clearPauseView;
- (void).cxx_destruct;

@end
