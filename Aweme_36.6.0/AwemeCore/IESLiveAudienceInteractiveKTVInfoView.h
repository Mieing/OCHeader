@class UIImageView, UILabel;

@interface IESLiveAudienceInteractiveKTVInfoView : UIView

@property (retain, nonatomic) UIImageView *ktvIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *inviteStatusLabel;

- (void)setupConstraints;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;
- (void)updateWithModel:(id)a0;

@end
