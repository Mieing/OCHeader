@class UILabel, UIImageView, MASConstraint;

@interface IESLiveGameOpenPlatformAudienceNotificationListCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) MASConstraint *descRightMarginConstraint;

- (void)setupWithNotification:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHidden:(BOOL)a0;
- (void)setup;

@end
