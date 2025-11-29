@class UIStackView, IESLiveWaitingListUser, UIImageView, IESLivePKGuestInteractiveNormalInfoView, UILabel, UIButton;

@interface IESLivePKGuestInteractiveApplyCell : UITableViewCell

@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ permitUserBlock;
@property (retain, nonatomic) IESLivePKGuestInteractiveNormalInfoView *normalInfoView;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *genderIcon;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) IESLiveWaitingListUser *userModel;
@property (retain, nonatomic) UIStackView *tagContainer;

- (void)removeAllTagViews;
- (void)updateWithModel:(id)a0 now:(id)a1 permitUserBlock:(id /* block */)a2 scene:(unsigned long long)a3 showPermit:(BOOL)a4 rank:(id)a5 sortByTime:(BOOL)a6;
- (void)didTapAcceptButton;
- (void)realHandleAccept;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutUI;

@end
