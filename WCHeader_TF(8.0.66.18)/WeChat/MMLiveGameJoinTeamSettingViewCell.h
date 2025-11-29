@class UIImageView, UILabel, MMCPLabel;

@interface MMLiveGameJoinTeamSettingViewCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *selectionIndicatorView;
@property (retain, nonatomic) UIImageView *coinView;
@property (retain, nonatomic) UILabel *coinValueLabel;
@property (retain, nonatomic) MMCPLabel *joinTeamModeNameLabel;
@property (nonatomic) unsigned int joinTeamMode;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithJoinTeamMode:(unsigned int)a0 joinTeamModeName:(id)a1 isSelected:(BOOL)a2 coinValue:(unsigned int)a3;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
