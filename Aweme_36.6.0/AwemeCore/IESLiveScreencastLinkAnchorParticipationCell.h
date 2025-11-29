@class IESLiveScreencastLinkParticipationCellItem, UIImageView, UILabel, UIButton;

@interface IESLiveScreencastLinkAnchorParticipationCell : UITableViewCell

@property (retain, nonatomic) IESLiveScreencastLinkParticipationCellItem *item;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *genderImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *gameNameLabel;
@property (retain, nonatomic) UIButton *operateButton;

- (void)p_setupViews;
- (void)p_setupConstraints;
- (void)p_setupBindings;
- (void)p_operate;
- (void)setupItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
