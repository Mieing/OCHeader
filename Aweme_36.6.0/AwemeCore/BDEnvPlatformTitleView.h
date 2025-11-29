@class UILabel, UIButton, UIView;

@interface BDEnvPlatformTitleView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *swimlaneLabel;
@property (retain, nonatomic) UIButton *envButton;
@property (retain, nonatomic) UILabel *geckoAKTitleLabel;
@property (retain, nonatomic) UILabel *geckoAKTypeLabel;
@property (retain, nonatomic) UILabel *geckoSwimlaneTitleLabel;
@property (retain, nonatomic) UILabel *geckoswimlaneLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *envConfigLabel;
@property (retain, nonatomic) UIButton *blueButton1;
@property (retain, nonatomic) UIButton *blueButton2;
@property (retain, nonatomic) UIView *lineView;

- (id)initWithConfigModel:(id)a0 GeckoModel:(id)a1;
- (void)setupViewWithModel:(id)a0 GeckoModel:(id)a1;
- (id)envLabelWithEnvType:(long long)a0;
- (id)swimlaneLabelWithSwimlaneName:(id)a0;
- (id)geckoAKTypeLabelWithModel:(id)a0;
- (id)geckoswimlaneLabelWithModel:(id)a0 GeckoModel:(id)a1;
- (void)setSwimlaneLabelMaxWidth;
- (void)updateConfigWithModel:(id)a0 GeckoModel:(id)a1;
- (id)initWithConfigModel:(id)a0;
- (void)updateConfigWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutView;

@end
