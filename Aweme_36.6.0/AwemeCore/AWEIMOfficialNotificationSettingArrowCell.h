@class NSString, UIImageView, UILabel, AWEIMOfficialNotificationSettingCellViewModel, UIButton;

@interface AWEIMOfficialNotificationSettingArrowCell : UITableViewCell <AWENoticeRendererProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) AWEIMOfficialNotificationSettingCellViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)onTapSelection;
- (void)p_refreshSubscribeCellUI;
- (void)p_refreshConfigCellUI;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
