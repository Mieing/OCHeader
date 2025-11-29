@class NSString, UIImageView, UILabel, UIView;

@interface AWEProfileHeaderGoldIconView : UIView

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long rewardNum;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *goldImageView;
@property (retain, nonatomic) UILabel *rewardLabel;

- (void)configWithText:(id)a0 rewardNum:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
