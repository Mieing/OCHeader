@class UIButton, UILabel, VrConfig_Limit_app_config;

@interface IESLiveMediaFisheyeContentPanelCell : UITableViewCell

@property (retain, nonatomic) UIButton *checkBoxBtn;
@property (retain, nonatomic) UILabel *channelLabel;
@property (retain, nonatomic) UIButton *helpBtn;
@property (retain, nonatomic) VrConfig_Limit_app_config *config;
@property (copy, nonatomic) id /* block */ completion;

+ (id)reuseIdentifier;

- (void)checkBoxClicked:(id)a0;
- (void)updateCheckStatus:(BOOL)a0;
- (void)helpBtnClicked:(id)a0;
- (void)showNotSupportToast:(id)a0;
- (void)updateWithLimitAppConfig:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
