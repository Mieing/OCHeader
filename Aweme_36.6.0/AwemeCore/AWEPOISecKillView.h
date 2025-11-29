@class NSString, UIImageView, NSTimer, UILabel;

@interface AWEPOISecKillView : UIView

@property (retain, nonatomic) UIImageView *backGroundView;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (nonatomic) long long targetTime;
@property (copy, nonatomic) NSString *countDownText;
@property (retain, nonatomic) NSTimer *countDownTimer;

- (void)loadCountdownTimer;
- (id)timeText:(long long)a0;
- (void)updateCountdownNumber;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 secKillInfo:(id)a1;
- (void).cxx_destruct;
- (void)cleanTimer;
- (void)setupUI;

@end
