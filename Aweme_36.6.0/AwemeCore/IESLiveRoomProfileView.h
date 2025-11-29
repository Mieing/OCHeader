@class UIView, IESLiveRoomProfileInfoView, NSString, HTSLiveAvatarImageView, IESLiveRoomProfileStore, UIButton, NSMutableArray, LOTAnimationView, UIColor;
@protocol IESLiveBubbleGuide, IESLiveRoomProfileButtonContainerDelegate;

@interface IESLiveRoomProfileView : UIView <IESLivePrivilegeEntranceProfileActions, IESLiveShowcaseGuideToastAction, IESLiveProfileCarouselLabelUpdateReaction, HTSLivePluginLayoutView>

@property (retain, nonatomic) IESLiveRoomProfileStore *store;
@property (retain, nonatomic) UIView *backGroundView;
@property (retain, nonatomic) HTSLiveAvatarImageView *avatarView;
@property (retain, nonatomic) IESLiveRoomProfileInfoView *infoView;
@property (retain, nonatomic) UIView<IESLiveRoomProfileButtonContainerDelegate> *operationBtn;
@property (retain, nonatomic) UIButton *avatarGestureButton;
@property (retain, nonatomic) LOTAnimationView *fansClubHeartLottieView;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *openBuffTipView;
@property (copy, nonatomic) id /* block */ profileViewMessageAnimCompleted;
@property (retain, nonatomic) NSMutableArray *crowedAnimationNodes;
@property (nonatomic) BOOL showingCrowdedAnimation;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *showcaseGuideToast;
@property (retain, nonatomic) UIColor *portraitBackColor;
@property (retain, nonatomic) UIColor *landscapeBackColor;
@property (retain, nonatomic) UIButton *tempInfoViewButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentAvatarView;
- (void)initBackgroundColor;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)infoViewTapped;
- (void)remakeLayout;
- (void)didUpdateRoom:(id)a0;
- (void)showDoubleDiggAnimationWithMainText:(id)a0 subText:(id)a1 repeat:(BOOL)a2;
- (void)showExchangeTopAndBottomLabelAnimation;
- (void)requestToShowTempInfoViewWithItem:(id)a0;
- (void)refreshRealEnterRoom;
- (void)screenOrientationChanged:(long long)a0;
- (void)showOpenBuffTipWithContent:(id)a0 fireCount:(id)a1 jumpToURL:(id)a2;
- (void)updateUserBorder:(id)a0;
- (void)showProfileViewAnimationWithMessage:(id)a0;
- (id)currentInfoView;
- (void)action_fansClubDataReadyWithCountNumber:(id)a0 isShowVip:(BOOL)a1 startCompletion:(id /* block */)a2 endCompletion:(id /* block */)a3;
- (void)dslLabelViewSizeUpdated:(struct CGSize { double x0; double x1; })a0;
- (void)showShowcaseGuideToast;
- (void)startFansClubHeartAnimationFloat;
- (void)endFansClubHeartAnimationFloat;
- (void)p_startCrowdedAnimationIfNeeded;
- (void)showOperationButtonExtraInfoAnimationWithCount:(long long)a0 isShowVip:(BOOL)a1 completion:(id /* block */)a2;
- (void)openFansClubView;
- (double)widthOfOperationButton;
- (void)disableShowcaseGuideToast:(id)a0;
- (void)tapGestureButtonAction;
- (void)tapAvatarViewTapped:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithStore:(id)a0;
- (void)addObserver;
- (void)clearObserver;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupAvatarView;
- (void)updateBackgroundColor:(long long)a0;
- (void)refreshLayout;

@end
