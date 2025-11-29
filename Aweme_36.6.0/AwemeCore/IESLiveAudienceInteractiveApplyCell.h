@class IESLiveWaitingListUser, UIStackView, IESLiveInteractionListUserTagView, UIImageView, UIButton, IESLiveAudienceInteractiveKTVInfoView, IESLiveAudienceInteractiveInfoView, UILabel, IESLiveAudienceInteractiveNormalInfoView;

@interface IESLiveAudienceInteractiveApplyCell : UITableViewCell

@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ permitUserBlock;
@property (retain, nonatomic) IESLiveAudienceInteractiveKTVInfoView *ktvInfoView;
@property (retain, nonatomic) IESLiveAudienceInteractiveNormalInfoView *normalInfoView;
@property (retain, nonatomic) IESLiveAudienceInteractiveInfoView *infoView;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *genderIcon;
@property (retain, nonatomic) UILabel *deLabel;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) IESLiveWaitingListUser *userModel;
@property (nonatomic) BOOL isInPaidLinkmic;
@property (nonatomic) BOOL isAddPrice;
@property (nonatomic) BOOL showPayAmount;
@property (nonatomic) BOOL isSelfAnchor;
@property (retain, nonatomic) UIStackView *tagContainer;
@property (retain, nonatomic) IESLiveInteractionListUserTagView *invitationTagView;

- (void)didSetAttachingDIContext;
- (void)updateAttributedString:(id)a0;
- (void)removeAllTagViews;
- (void)didTapAcceptButton;
- (void)updateWithModel:(id)a0 now:(id)a1 permitUserBlock:(id /* block */)a2 scene:(unsigned long long)a3 showPermit:(BOOL)a4 rank:(id)a5 sortStrategy:(long long)a6;
- (void)updateWithIsInPaidLinkmic:(BOOL)a0 isAddPrice:(BOOL)a1 showPayAmount:(BOOL)a2;
- (void)updateWithModel:(id)a0 now:(id)a1 permitUserBlock:(id /* block */)a2 scene:(unsigned long long)a3 showPermit:(BOOL)a4 rank:(id)a5 sortStrategy:(long long)a6 isSelfAnchor:(BOOL)a7;
- (void)updateInfoViewWithModel:(id)a0 now:(id)a1 sortStrategy:(long long)a2;
- (void)updateRankLabelWithRank:(id)a0;
- (BOOL)shouldFilterEventInfo:(id)a0;
- (void)p_showUserProfile:(id)a0;
- (void)updateSimplifiedCellWithSearchModel:(id)a0 now:(id)a1 permitUserBlock:(id /* block */)a2 scene:(unsigned long long)a3 sortStrategy:(long long)a4;
- (void)makeUserProfileAvailable;
- (void)makeButtonStatusClicked;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutUI;

@end
