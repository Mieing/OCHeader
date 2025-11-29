@class AWEShakeShareAwemeSettingItemView, UIImageView, DUXContentSheet, UILabel;

@interface AWEShakeShareAwemeSettingPanel : UIViewController

@property (retain, nonatomic) UIImageView *iconImageView;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEShakeShareAwemeSettingItemView *settingItemView;

+ (void)showPanel;

- (void)initView;
- (void)shakeItemSwitched:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupLayout;

@end
