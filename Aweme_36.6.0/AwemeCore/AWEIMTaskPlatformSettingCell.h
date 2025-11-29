@class AWEIMTaskPlatformSettingViewModel, DUXSettingSwitch, NSString, UILabel;

@interface AWEIMTaskPlatformSettingCell : UITableViewCell <AWEIMRendererProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXSettingSwitch *aSwitch;
@property (retain, nonatomic) AWEIMTaskPlatformSettingViewModel *viewModel;
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
