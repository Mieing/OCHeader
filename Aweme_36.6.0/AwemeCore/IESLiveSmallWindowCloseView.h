@class UILabel, IESLiveCountTimer;

@interface IESLiveSmallWindowCloseView : UIView

@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) IESLiveCountTimer *timeoutTimer;
@property (copy, nonatomic) id /* block */ closeAction;

- (void)countDownWithTime:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
