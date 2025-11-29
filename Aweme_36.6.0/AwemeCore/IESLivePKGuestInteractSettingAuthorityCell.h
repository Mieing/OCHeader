@class IESLivePKGuestInteractSettingAuthorityItem, UISwitch, UIImageView, UILabel, UIView, UIButton;

@interface IESLivePKGuestInteractSettingAuthorityCell : UITableViewCell

@property (retain, nonatomic) UIButton *onOffSwitchTouchButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UILabel *indicateLabel;
@property (retain, nonatomic) UIButton *moreDetailButton;
@property (retain, nonatomic) UISwitch *onOffSuperficialSwitch;
@property (retain, nonatomic) UIImageView *indicateImageView;
@property (retain, nonatomic) IESLivePKGuestInteractSettingAuthorityItem *item;
@property (retain, nonatomic) UIView *separator;
@property (nonatomic) BOOL isAvailable;

- (void)didClickMoreDetailButton;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateItem:(id)a0;
- (void)setupViews;
- (void)tapAction;

@end
