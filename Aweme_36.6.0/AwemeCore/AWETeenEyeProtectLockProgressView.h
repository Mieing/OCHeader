@class UILabel, UIView;

@interface AWETeenEyeProtectLockProgressView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (double)eyeProtectionCountDownTime;
+ (double)eyeProtectionProgressInterval;

- (void)setProgress:(double)a0 finished:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
