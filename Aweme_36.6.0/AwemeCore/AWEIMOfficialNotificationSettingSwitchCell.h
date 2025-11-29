@class UIStackView, NSString, UILabel, UIView, AWEIMOfficialNotificationSettingCellViewModel;
@protocol IESIMSettingSwitchProtocol;

@interface AWEIMOfficialNotificationSettingSwitchCell : UITableViewCell <AWENoticeRendererProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UIView<IESIMSettingSwitchProtocol> *aSwitch;
@property (retain, nonatomic) AWEIMOfficialNotificationSettingCellViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)switchControlDidChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
