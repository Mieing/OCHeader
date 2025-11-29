@class IESLiveAnchorMultiLinkParticipationCellItem, UIImageView, IESLiveMultiLinkerExtraInfoView, UILabel, UIView, UIButton;

@interface IESLiveAnchorMultiLinkParticipationCell : UITableViewCell

@property (retain, nonatomic) IESLiveAnchorMultiLinkParticipationCellItem *item;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *genderImageView;
@property (retain, nonatomic) UIImageView *userCountIconImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) UILabel *followedCountLabel;
@property (retain, nonatomic) UIImageView *locationIconView;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UIView *userTagContainerView;
@property (retain, nonatomic) IESLiveMultiLinkerExtraInfoView *extraInfoView;
@property (retain, nonatomic) UIButton *operateButton;
@property (retain, nonatomic) UILabel *disabledLabel;
@property (nonatomic) BOOL shouldRecoverConstraintsWhenUserTagsArrayEmpty;

- (void)p_setupViews;
- (void)p_setupConstraints;
- (void)p_setupBindings;
- (void)p_operate;
- (void)setupItem:(id)a0;
- (struct CGSize { double x0; double x1; })tagContentSize4Text:(id)a0 font:(id)a1;
- (void)setupTagContainerView:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
