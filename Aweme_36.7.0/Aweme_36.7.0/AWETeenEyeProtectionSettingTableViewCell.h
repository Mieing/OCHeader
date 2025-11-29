@class NSString, TTTAttributedLabel, AWETeenEyeProtectionSettingModel, UILabel, UIView;
@protocol AWESettingSwitchProtocol;

@interface AWETeenEyeProtectionSettingTableViewCell : UITableViewCell <TTTAttributedLabelDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) TTTAttributedLabel *attSubTitleLabel;
@property (retain, nonatomic) UIView *sepLine;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *switcher;
@property (retain, nonatomic) AWETeenEyeProtectionSettingModel *model;
@property (copy, nonatomic) id /* block */ onSwitcherToggled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWithModel:(id)a0;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)configWithModel:(id)a0;
- (void)onSwitcherToggled:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
