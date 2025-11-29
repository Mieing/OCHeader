@class NSString, UIImageView, NSTimer, UILabel, UIButton;

@interface IESLiveGameOpenPlatformBottomAlertView : UIView

@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) UIButton *urlButton;
@property (weak, nonatomic) UIImageView *urlButtonArrowImage;
@property (weak, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSString *buttonDescString;
@property (copy, nonatomic) NSString *urlString;
@property (nonatomic) long long remainTime;
@property (copy, nonatomic) id /* block */ urlBlock;
@property (copy, nonatomic) id /* block */ countDownBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (void)didSetAttachingDIContext;
- (void)confirmButtonDidClick:(id)a0;
- (void)setupCountDownTimer;
- (void)urlButtonDidClick:(id)a0;
- (id)buttonDescWithSeconds:(long long)a0;
- (void)p_setupUI;
- (id)initWithOperation:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;

@end
