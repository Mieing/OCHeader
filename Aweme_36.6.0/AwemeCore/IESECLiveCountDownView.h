@class UILabel, NSString, UIView;

@interface IESECLiveCountDownView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (nonatomic) long long currentNum;
@property (retain, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) id /* block */ completeHandle;
@property (nonatomic) BOOL isCountingDown;

- (void)refreshLabel;
- (id)initWithTime:(long long)a0 description:(id)a1 completion:(id /* block */)a2;
- (void)animateBegin;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)start;
- (void)layoutSubviews;

@end
