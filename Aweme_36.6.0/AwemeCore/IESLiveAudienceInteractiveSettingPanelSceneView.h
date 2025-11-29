@class UIImageView, UILabel, UIView, IESLiveAudienceInteractiveSettingSceneConfiguration;

@interface IESLiveAudienceInteractiveSettingPanelSceneView : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveAudienceInteractiveSettingSceneConfiguration *configuration;
@property (retain, nonatomic) UILabel *tagLabel;

- (void)bindConfiguration;
- (id)initWithConfiguraion:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setupViews;
- (void)updateWithConfiguration:(id)a0;

@end
