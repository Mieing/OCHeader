@class UIImageView, UILabel, UIView;

@interface AWEIMGroupInviteBubbleMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UIImageView *groupOwnerAvatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (void)__updateColor;
- (void)__bubbleViewTapped:(id)a0;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;

@end
