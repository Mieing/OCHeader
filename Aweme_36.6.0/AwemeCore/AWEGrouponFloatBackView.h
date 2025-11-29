@class NSString, UIVisualEffectView, UIImageView, UILabel, UIView, NSTimer;

@interface AWEGrouponFloatBackView : UIControl

@property (nonatomic) long long backViewStatus;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *leftArrowImageView;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (weak, nonatomic) UIView *attachView;
@property (copy, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ backClickedHandler;

- (id)initWithAttachView:(id)a0;
- (void)startFloatBackTiming;
- (void)updateBackViewStatus:(long long)a0 title:(id)a1 completion:(id /* block */)a2;
- (void)updateBackViewPosition:(double)a0 animation:(BOOL)a1;
- (void)backViewClicked:(id)a0;
- (BOOL)isReturnButtonUIOpt;
- (void)floatBackTimingCompleted;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;
- (void)setupLayout;

@end
