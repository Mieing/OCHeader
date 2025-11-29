@class UISwitch, UIImageView, UILabel, UIView, IESLivePublicScreenSettingItem;

@interface IESLivePublicScreenSettingPanelCellView : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UISwitch *switchBtn;
@property (retain, nonatomic) UIImageView *helpBar;
@property (retain, nonatomic) UILabel *settingLabel;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) IESLivePublicScreenSettingItem *item;
@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIView *topSeparator;

- (void)refreshWithItem:(id)a0;
- (void)tapSwitch:(id)a0;
- (void)tapHelpBar:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupViews;

@end
