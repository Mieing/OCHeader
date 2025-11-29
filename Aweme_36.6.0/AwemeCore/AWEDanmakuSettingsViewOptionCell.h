@class AWEDanamkuSettingsViewOptionCellConfigModel, NSString, DUXSwitch, UIImageView, UILabel, UIView, UIButton;

@interface AWEDanmakuSettingsViewOptionCell : UITableViewCell <AWEDanmakuSettingsViewOptionCellProtocol>

@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIButton *descButton;
@property (retain, nonatomic) UILabel *danmakuUnSupportMaskLabel;
@property (retain, nonatomic) DUXSwitch *danmakuMaskSwitch;
@property (retain, nonatomic) UILabel *danmakuCountLabel;
@property (retain, nonatomic) UIImageView *enterDanmakuListIcon;
@property (retain, nonatomic) UIView *bottomView;
@property (nonatomic) unsigned long long danmakuScene;
@property (retain, nonatomic) AWEDanamkuSettingsViewOptionCellConfigModel *config;
@property (nonatomic) BOOL showUnSupportMaskDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDanmakuCount:(id)a0;
- (void)updateDanmakuListUI;
- (void)updateDanmakuSwitchStyleUI;
- (void)handleDescButtonClick;
- (void)handleCellClick;
- (void)updateCellWithConfig:(id)a0 danmakuScene:(unsigned long long)a1;
- (void)updateDanmakuUIWithScene:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setUpUI;

@end
