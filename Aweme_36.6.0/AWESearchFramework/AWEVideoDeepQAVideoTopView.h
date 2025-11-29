@class UILabel, UIImageView;

@interface AWEVideoDeepQAVideoTopView : UIView

@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *tipLable;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) double tipLabelWidth;

- (void)configWithCount:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
