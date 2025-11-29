@class NSString, UIImageView, UILabel, IESLiveUserCardStore, UIView;
@protocol IESLiveWebPPlayer;

@interface IESLiveUserCardFollowButton : UIView <IESLiveUserCardConfigProtocol>

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) UIView *containView;
@property (retain, nonatomic) UILabel *followLabel;
@property (retain, nonatomic) UIImageView *followIcon;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *commonBgView;
@property (nonatomic) long long state;
@property (nonatomic) long long configTag;
@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *functionType;
@property (nonatomic) BOOL liveAnchorProfileFansGroupEnhance;
@property (nonatomic) BOOL firstLayout;
@property (nonatomic) BOOL enableFansGroupOnlyText;
@property (nonatomic) BOOL hasJoinedFansClub;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithScene:(id)a0;
- (void)actionClicked;
- (void)setupImage:(id)a0 withFlexImage:(id)a1;
- (void)didFollowSuccess;
- (void)didUnfollowSuccess;
- (void)animatePhase2ShowFansGroupEntry;
- (void)animatePhase1HideFansGroupEntry;
- (void)switchToNextState;
- (void)configWithTag:(long long)a0 isShowWhite:(BOOL)a1;
- (void)configWithStore:(id)a0;
- (void)configForFansGroupEnhanceWithScene:(id)a0 store:(id)a1;
- (id)buildLabel;
- (void)refreshBorder:(BOOL)a0;
- (void)setToState:(long long)a0 animate:(BOOL)a1;
- (void)setUpState:(long long)a0 followStatus:(long long)a1 animate:(BOOL)a2;
- (void)updateFollowStateAnimate:(BOOL)a0;
- (void)cancelFollow;
- (void)setUpState:(long long)a0 followStatus:(long long)a1;
- (void)didAddFansClubSuccess;
- (void).cxx_destruct;
- (void)setToState:(long long)a0;
- (id)init;
- (void)layoutSubviews;
- (void)setup;
- (BOOL)shouldShow;

@end
