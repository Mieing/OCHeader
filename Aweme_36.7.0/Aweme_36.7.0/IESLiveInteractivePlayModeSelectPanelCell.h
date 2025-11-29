@class UIImageView, UILabel, UIView;

@interface IESLiveInteractivePlayModeSelectPanelCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *redDot;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupViews;
- (void)updateWithConfiguration:(id)a0;

@end
