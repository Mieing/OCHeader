@class IESLiveButton, IESLivePrivilegeEntranceProfileLiveVipViewModel, NSString, UIImage, IESLiveImageView, IESLivePrivilegeEntranceProfileAnimationFactory;

@interface IESLivePrivilegeEntranceProfileVipView : UIView <IESLivePrivilegeEntranceSubviewDelegate>

@property (retain, nonatomic) IESLiveImageView *container;
@property (retain, nonatomic) IESLiveButton *vipButton;
@property (retain, nonatomic) UIImage *activeFansBgImage;
@property (retain, nonatomic) UIImage *inActiveFansBgImage;
@property (nonatomic) BOOL isFirstShow;
@property (retain, nonatomic) IESLivePrivilegeEntranceProfileLiveVipViewModel *viewModel;
@property (retain, nonatomic) NSString *lastVipState;
@property (retain, nonatomic) IESLivePrivilegeEntranceProfileAnimationFactory *animationFactory;
@property (nonatomic) long long entranceType;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildCommonParams;
- (void)bindState;
- (void)viewDidShowOnContainer:(id)a0;
- (void)viewDidHideFromContainer:(id)a0;
- (void)playShowAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 entranceType:(long long)a2 diContext:(id)a3;
- (void)updateVIPState:(id)a0;
- (void)playVIPGuideAnimationIfNeeded;
- (void)playVIPActiveAnimation:(BOOL)a0;
- (void)setupNormalVipIconGrayStyle;
- (void)trackVIPClick;
- (void)trackVIPShow;
- (void)tapVIPButton;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })viewSize;
- (void)setupUI;

@end
