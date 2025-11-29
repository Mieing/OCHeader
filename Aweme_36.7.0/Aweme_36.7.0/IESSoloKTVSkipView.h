@class UIButton, IESLiveGCDTimer;

@interface IESSoloKTVSkipView : UIView

@property (retain, nonatomic) UIButton *skipBtn;
@property (retain, nonatomic) IESLiveGCDTimer *skipTimer;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) id /* block */ onCountDownFire;

- (void)closeTimer;
- (void)showWithSecond:(double)a0;
- (void)didClickSkipButton:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startTimer:(double)a0;

@end
