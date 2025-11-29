@class CAGradientLayer, IESLiveGroupInfo, UIImageView, IESLiveUserCardStore, UILabel, UIButton;

@interface IESLiveUserCardShowcaseEntranceView : UIView

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) IESLiveGroupInfo *groupInfo;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *enterLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *enterShowcaseView;
@property (retain, nonatomic) UIImageView *enterShowcaseIndicator;
@property (retain, nonatomic) UIImageView *iconImageView;

- (void)shopItemDidClicked;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)layoutSubviews;
- (void)setupViews;
- (void)setupData;

@end
