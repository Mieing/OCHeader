@class AWEIMLifeServiceChatMenuView, NSString, AWEIMConversationDynamicSettingViewModel, UIView, AWEIMLifeServiceChatSubmenuView;
@protocol AWEIMLifeServiceChatMenuViewModelInterface;

@interface AWEIMLifeServiceChatMenuInteractor : AWEIMComponentBase <AWEIMLifeServiceChatMenuViewModelDelegate, AWEIMSingleChatMenuProviderProtocol, AWEIMLifeServiceChatMenuInteractorInterface>

@property (retain, nonatomic) AWEIMLifeServiceChatMenuView *menuView;
@property (retain, nonatomic) AWEIMLifeServiceChatSubmenuView *subMenuView;
@property (nonatomic) BOOL hideMenuWhenMenuReady;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL hasTrackShowing;
@property (nonatomic) BOOL isInExperiment;
@property (copy, nonatomic) id /* block */ closeComplitionBlock;
@property (retain, nonatomic) UIView *subMenuMaskView;
@property (nonatomic) BOOL hasResolve;
@property (nonatomic) BOOL hasMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AWEIMLifeServiceChatMenuViewModelInterface> viewModel;
@property (retain, nonatomic) AWEIMConversationDynamicSettingViewModel *dynamicSettingViewModel;

+ (BOOL)enableLifeServiceMenuWithCon:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)vcParent;
- (void)didFetchUser:(id)a0;
- (void)hideInputVCAndDoThenShowInputVCWithAnimationOption:(unsigned long long)a0 hideCompletion:(id /* block */)a1;
- (long long)menuType;
- (BOOL)conformToMedicalIdentifyConv;
- (void)showMenuWithSyncHidingActionBarAndInputVC:(BOOL)a0 animationDuration:(double)a1;
- (BOOL)canSwitchToInputBar;
- (BOOL)tryFetchMenuWithUser:(id)a0;
- (void)tryShowMenu;
- (void)fetchLifeServiceWithCompletion:(id /* block */)a0;
- (BOOL)isMedicAccount;
- (void)hideInputVCAndDoThenShowInputVCWithAnimationOption:(unsigned long long)a0 duration:(double)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (void)__prepareAndShowMenu;
- (void)trackMenuShow;
- (void)__closeSubMenuView;
- (void)closeSubMenuWithCompletion:(id /* block */)a0;
- (void)showSubMenuFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)switchToInputBar;
- (void).cxx_destruct;
- (long long)priority;
- (void)showMenu;
- (id)identifier;

@end
