@class NSString, UIImageView, AWEHomePageRemoteCommonRadioButtonDataModel, UILabel, AWEHomePageRemoteContext, DUXRadioBox;

@interface AWEHomePageRemoteRadioButton : UIView <AWEHomePageRemoteViewProtocol>

@property (retain, nonatomic) AWEHomePageRemoteContext *context;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) DUXRadioBox *radioBoxView;
@property (nonatomic) long long themeType;
@property (retain, nonatomic) AWEHomePageRemoteCommonRadioButtonDataModel *radioButtonDataModel;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageUrlArray;
- (void)updateImageAndColor;
- (void)updateWithItemDataModel:(id)a0;
- (void)updateWithItemDataModel:(id)a0 context:(id)a1;
- (void)homePageThemeDidChange:(long long)a0;
- (void)radioButtonDidSelected;
- (void)radioButtonDidUnselected;
- (id)getRadioBoxView;
- (void)landingToTargetChannelWithAnimateType:(long long)a0;
- (void).cxx_destruct;
- (id)placeholderImage;
- (id)initWithStyle:(long long)a0;
- (void)layoutSubviews;
- (id)titleLabelFont;
- (void)setupUI;
- (id)tabID;
- (id)titleLabelTextColor;

@end
