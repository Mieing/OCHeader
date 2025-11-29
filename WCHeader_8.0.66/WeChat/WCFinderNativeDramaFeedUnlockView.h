@class MMTimer, UIImageView, WCFinderNativeDramaFeedUnlockViewModel, UIView, UILabel;

@interface WCFinderNativeDramaFeedUnlockView : UIView

@property (retain, nonatomic) WCFinderNativeDramaFeedUnlockViewModel *model;
@property (nonatomic) long long countDown;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *maskBackground;
@property (retain, nonatomic) UIView *unlockButtonBackground;
@property (retain, nonatomic) UILabel *unlockButtonTitleLabel;
@property (retain, nonatomic) UILabel *countDownTipsLabel;
@property (retain, nonatomic) MMTimer *timer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;
- (void)startCountDown;
- (void)stopCountDown;
- (void)_onTapUnlockButton:(id)a0;
- (void)_unlockAction;
- (void)_updateCountDown;
- (void)_updateCountDownLabel;
- (void).cxx_destruct;

@end
