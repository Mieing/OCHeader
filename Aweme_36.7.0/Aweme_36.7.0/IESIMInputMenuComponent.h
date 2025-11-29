@class NSString, UIVisualEffectView, UIView, AWEIMInputVCBadgeButton;
@protocol IESIMEnterpriseCompanyMenuProtocol, AWEIMSingleChatMenuDispatcherInterface;

@interface IESIMInputMenuComponent : AWEIMComponentBase <AWEIMSingleChatMenuProviderProtocol, IESIMInputMenuComponentInterface, IESIMInputThemeChangedAction, IESIMInputStateChangedActionProtocol, IESIMInputLayoutAction>

@property (retain, nonatomic) id<IESIMEnterpriseCompanyMenuProtocol> companyMenuFeature;
@property (nonatomic) BOOL isNotFristShowMenu;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (retain, nonatomic) UIView *menuView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isShowingMenu;
@property (weak, nonatomic) id<AWEIMSingleChatMenuDispatcherInterface> menuDispatcher;
@property (retain, nonatomic) AWEIMInputVCBadgeButton *switchToMenuButton;
@property (nonatomic) BOOL shouldShowSwitchToMenuButton;
@property (copy, nonatomic) id /* block */ menuDidTapped;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)menuShowInputViews:(BOOL)a0;
- (void)hideAllSubMenus:(id /* block */)a0;
- (void)fetchMenuForCompany:(id)a0;
- (void)showBlurView:(BOOL)a0;
- (void)setupMenuView:(id)a0 withSwitchBlockForMenu:(id /* block */)a1;
- (BOOL)shouldShowMenuInitiallyForFullDetailUser:(id)a0;
- (void)replaceInputViewControllerLeftButtonType:(unsigned long long)a0;
- (void)hideInputVCAndDoThenShowInputVC:(id /* block */)a0;
- (void)didSendMenuSilentMessageWithEvent:(id)a0 menuKey:(id)a1;
- (long long)menuType;
- (void)showMenu:(BOOL)a0;
- (BOOL)hasMenuData;
- (void)showInputViews:(BOOL)a0;
- (BOOL)tryFetchMenuWithUser:(id)a0;
- (void)tryShowMenu;
- (void)hideMenuWhenMoveUP;
- (void)hideMenu:(BOOL)a0;
- (void)p_setupMenuAndSwitchWithCompanyMenuView:(id)a0 companyUser:(id)a1;
- (void)switchToMenuBtnClicked:(id)a0;
- (void)prepareAndShowMenu;
- (void)updateComponentFromState:(long long)a0 toState:(long long)a1;
- (void)inputThemeChangedWithThemeStyle:(long long)a0;
- (void)refreshBackgroundWithBackGroundImage:(BOOL)a0;
- (void)triggerLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputBarHeight:(double)a1 animated:(BOOL)a2 refreshContext:(id)a3;
- (void).cxx_destruct;
- (long long)priority;
- (id)identifier;

@end
