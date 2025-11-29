@class UIImageView, UILabel, UIView;

@interface IESLiveInteractionChatGroupUserCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *avatarBorderView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;

- (void)renderUser:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setupViews;

@end
