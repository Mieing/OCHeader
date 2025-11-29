@class IESLiveRoomPayFunctionViewModel, NSDictionary, UISwitch, UIView, UILabel, UIImageView;

@interface IESLiveRoomPayFunctionViewController : UIView

@property (nonatomic) long long type;
@property (retain, nonatomic) IESLiveRoomPayFunctionViewModel *viewModel;
@property (retain, nonatomic) NSDictionary *pageInfoDict;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *settingBgView;
@property (retain, nonatomic) UILabel *switchTitleLabel;
@property (retain, nonatomic) UISwitch *introductionSwitch;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UILabel *switchIntroduceLabel;
@property (retain, nonatomic) UILabel *fansClubModeTitleLabel;
@property (retain, nonatomic) UILabel *fansClubModeSubTextLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *switchInterceptView;

- (id)initWithViewModel:(id)a0 type:(long long)a1;
- (void)setupBaseView;
- (void)configPageData;
- (void)handleSwitchClick:(id)a0;
- (void)updateFansClubModeViews;
- (void)fansClubModeSetting:(id)a0;
- (void).cxx_destruct;

@end
