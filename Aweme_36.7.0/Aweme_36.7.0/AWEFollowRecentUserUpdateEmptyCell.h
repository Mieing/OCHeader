@class AWEUserModel, NSString, UIImageView, UIVisualEffectView, UIView, UILabel, UIButton;

@interface AWEFollowRecentUserUpdateEmptyCell : UITableViewCell <AWEFollowCommonEmptyCellProtocol>

@property (retain, nonatomic) UIImageView *bgAvatarImgView;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIView *primaryView;
@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) UILabel *bottomPromptLabel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isLastOne;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)emptyCell_configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2 referString:(id)a3;
- (void)emptyCell_cellWillDisplay:(id)a0 atIndexPath:(id)a1 tableView:(id)a2 enterFrom:(id)a3;
- (void)emptyCell_cellDidEndDisplay:(id)a0;
- (void)enterProfileAction;
- (id)labelWithFont:(id)a0 textColor:(id)a1;
- (void)layoutBottomPromptLabel;
- (void)eventTrack4EnterProfileWithMethod:(id)a0;
- (void)handleAvatarTapGestureRecognizer:(id)a0;
- (void)handleActionButtonEvent:(id)a0;
- (void)addBlurEffect;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
