@class AWETeenPopover, NSString, UIView, AWEUserModel, AWETeenDiscoverButtonAnimationView;
@protocol AWETeenDiscoverTabButtonDelegate;

@interface AWETeenTabbarDiscoverButton : AWETeenModeTabBarGeneralButton <AWETeenPopoverDelegate, AWEAlertProtocol>

@property (retain, nonatomic) AWETeenPopover *popover;
@property (nonatomic) BOOL shouldPostTeenDiscoverNavClear;
@property (nonatomic) BOOL clickDiscoverTabToEnterTeenDiscover;
@property (copy, nonatomic) NSString *teenDiscoverButtonBubbleTitle;
@property (retain, nonatomic) AWETeenDiscoverButtonAnimationView *teenDiscoverButtonAnimationView;
@property (nonatomic) BOOL shouldShowIcon;
@property (nonatomic) BOOL shouldShowDot;
@property (nonatomic) BOOL shouldShowBubble;
@property (readonly, nonatomic) UIView *tabBar;
@property (readonly, nonatomic) AWEUserModel *currentTeenUser;
@property (copy, nonatomic) id /* block */ onCloseAlert;
@property (nonatomic) BOOL showRecommandRemind;
@property (copy, nonatomic) id /* block */ clickedBlock;
@property (nonatomic) BOOL isShowingBubble;
@property (weak, nonatomic) id<AWETeenDiscoverTabButtonDelegate> discoverTabDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithInnerView:(id)a0 viewController:(id)a1;
+ (void)clearIconMask:(BOOL)a0 andDotMask:(BOOL)a1 completion:(id /* block */)a2;

- (void)showWithCloseCallback:(id /* block */)a0;
- (void)popoverDidDisappear:(id)a0;
- (void)onTouchUpInside;
- (void)didEnterDiscover;
- (void)dismissTeenDiscoverBubbleIfNeed;
- (void)redoTeenDiscoverAnimations;
- (void)fetchTeenDiscoverNav;
- (BOOL)p_isWithinAntiAddictionTime;
- (void)p_resetTeenDiscoverButtonStatus;
- (BOOL)isInTeenDiscoverTab;
- (void)showTeenDiscoverBubbleIfNeed;
- (void)hideTeenDiscoverButtonYellowDotIfNeed;
- (void)showTeenDiscoverIconWithAnimation;
- (BOOL)shouldShowTeenDiscoverBubble;
- (void).cxx_destruct;

@end
