@class BattleLinkerInviteMessageExtra, UIImageView, UILabel, UIView, IESLivePKConnectingInfoViewConifg;

@interface IESLivePKConnectingInfoView : UIView

@property (retain, nonatomic) BattleLinkerInviteMessageExtra *battleInfo;
@property (retain, nonatomic) IESLivePKConnectingInfoViewConifg *config;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *audienceNumIconImageView;
@property (retain, nonatomic) UILabel *audienceNumLabel;
@property (retain, nonatomic) UIImageView *rivalInfoIconView;
@property (retain, nonatomic) UILabel *rivalInfoLabel;
@property (retain, nonatomic) UILabel *battleReserveLabel;
@property (retain, nonatomic) UIImageView *genderImage;
@property (retain, nonatomic) UIView *userTagContainerView;
@property (retain, nonatomic) UIView *halfFriendContainerView;
@property (retain, nonatomic) UIView *matchTagContainerView;
@property (retain, nonatomic) UIView *roomTagContainerView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *recommendReasonBackground;
@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) UILabel *multiInviteLabel;
@property (retain, nonatomic) UIView *basicInfoContainerView;
@property (retain, nonatomic) UIView *decisionInfoContainerView;

- (struct CGSize { double x0; double x1; })tagContentSize4Text:(id)a0 font:(id)a1;
- (id)initWithBattleInfo:(id)a0 config:(id)a1 context:(id)a2;
- (void)trackWithTags:(id)a0;
- (void)layoutLegacyRoomTag;
- (void)updateMultiInviteText:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
