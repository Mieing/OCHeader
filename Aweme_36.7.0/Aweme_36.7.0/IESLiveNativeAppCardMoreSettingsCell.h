@class UILabel, UIImageView, UIView;

@interface IESLiveNativeAppCardMoreSettingsCell : UITableViewCell

@property (retain, nonatomic) UIView *edgeView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImage;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateText:(id)a0;
- (void)setUpUI;

@end
