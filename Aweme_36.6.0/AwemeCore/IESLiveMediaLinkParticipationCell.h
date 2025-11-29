@class IESLiveMediaLinkParticipationCellItem, UIImageView, UILabel, UIButton;

@interface IESLiveMediaLinkParticipationCell : UITableViewCell

@property (retain, nonatomic) IESLiveMediaLinkParticipationCellItem *item;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *genderImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *locationIconView;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UIButton *operateButton;

- (void)p_setupViews;
- (void)p_setupConstraints;
- (void)p_setupBindings;
- (void)p_operate;
- (void)setupItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
