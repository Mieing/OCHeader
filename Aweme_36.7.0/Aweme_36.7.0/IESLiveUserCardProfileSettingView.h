@class IESLiveUserCardStore, UIView, UIImageView, IESLiveProfileStyleTemplate, UIButton, IESLiveUserProfile, CAGradientLayer, IESLiveUserCardProfileSettingItemView, UILabel;

@interface IESLiveUserCardProfileSettingView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *styleImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) IESLiveUserCardProfileSettingItemView *honorItemView;
@property (retain, nonatomic) IESLiveUserCardProfileSettingItemView *shopItemView;
@property (retain, nonatomic) IESLiveUserCardProfileSettingItemView *showcaseItemView;
@property (retain, nonatomic) UIView *selectView;
@property (retain, nonatomic) IESLiveProfileStyleTemplate *honorTemplate;
@property (retain, nonatomic) IESLiveProfileStyleTemplate *shopTemplate;
@property (retain, nonatomic) IESLiveProfileStyleTemplate *showcaseTemplate;
@property (retain, nonatomic) IESLiveUserProfile *userProfile;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (nonatomic) BOOL smartSwitchIsOn;
@property (retain, nonatomic) UIButton *smartSwitch;
@property (nonatomic) long long profileStyle;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) id /* block */ selectedBlock;

- (void)setupData:(id)a0;
- (void)setupSelectView;
- (void)handleItemView;
- (void)setupSmartSwitchView;
- (void)switchTipButtonTapped:(id)a0;
- (void)disableSmartSwitch;
- (void)smartSwitchTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
