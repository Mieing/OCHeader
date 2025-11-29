@class NSString, IESLivePrivilegeEntranceProfileViewModel, UIImage, IESLiveButton, IESLivePrivilegeEntranceProfileAnimationFactory, IESLiveImageView, UILabel, NSNumber;

@interface IESLivePrivilegeEntranceFansClubView : UIView <IESLivePrivilegeEntranceSubviewDelegate>

@property (retain, nonatomic) IESLivePrivilegeEntranceProfileViewModel *viewModel;
@property (nonatomic) long long entranceType;
@property (nonatomic) BOOL isFirstShow;
@property (retain, nonatomic) IESLiveImageView *container;
@property (retain, nonatomic) IESLiveButton *fansclubButton;
@property (retain, nonatomic) UILabel *fansclubLevelLabel;
@property (retain, nonatomic) UIImage *activeFansBgImage;
@property (retain, nonatomic) UIImage *inActiveFansBgImage;
@property (retain, nonatomic) IESLivePrivilegeEntranceProfileAnimationFactory *animationFactory;
@property (retain, nonatomic) NSString *lastFansclubIconState;
@property (retain, nonatomic) NSNumber *isShowing;
@property (nonatomic) long long fansClubType;
@property (nonatomic) long long fansclubLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildCommonParams;
- (id)buttonBgImageWithColorArray:(id)a0;
- (void)bindState;
- (void)viewDidShowOnContainer:(id)a0;
- (void)viewDidHideFromContainer:(id)a0;
- (void)updateFansclubLevel:(id)a0;
- (void)updateStateEnableAnimation:(BOOL)a0 state:(id)a1;
- (void)playFansclubGuideAnimationIfNeeded;
- (void)fansClubViewTapped;
- (void)trackFansclubClick;
- (void)playFansclubActiveAnimation;
- (void)playShowAnimation;
- (void)trackFansclubShow;
- (id)initWithViewModel:(id)a0 entranceType:(long long)a1 fansClubType:(long long)a2 diContext:(id)a3;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })viewSize;
- (void)setupUI;
- (void)addAction;

@end
