@class UILabel, UIView;

@interface IESLiveVSGiftComboCountDownView : UIView

@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *dormantLabel;
@property (retain, nonatomic) UILabel *crypticLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) long long currentCount;

- (void)hideBackground;
- (void).cxx_destruct;
- (id)initWithCount:(long long)a0;
- (void)setupUI;
- (void)increase;

@end
