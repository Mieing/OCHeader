@class UILabel, IESLiveCountTimer;

@interface IESLivePKFlexActivityCountDownView : UIView

@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *hourLabel;
@property (retain, nonatomic) UILabel *minuteLabel;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) IESLiveCountTimer *battleCountDownTimer;

- (void)stopCountdownTimer;
- (void)updateCountDownLabelWithTime:(unsigned long long)a0;
- (void)updateDescriptionLabelText:(id)a0;
- (void)startCountdownTimerWithTimeStamp:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
