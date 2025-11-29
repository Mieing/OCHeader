@class UIButton, BDPNavigationBar, BDPCutLossesInfoModel, BDPToolbarViewV2, BDPUniqueID, BDPPageConfig;

@interface BDPCutLossesTopView : UIView

@property (retain, nonatomic) BDPCutLossesInfoModel *info;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPPageConfig *pageConfig;
@property (retain, nonatomic) BDPNavigationBar *navigationBar;
@property (retain, nonatomic) UIButton *leftBtn;
@property (retain, nonatomic) BDPToolbarViewV2 *rightView;
@property (copy, nonatomic) id /* block */ goBackBlock;
@property (copy, nonatomic) id /* block */ goHomeBlock;

- (void)setupNormalUI;
- (void)setupUIWithType:(unsigned long long)a0;
- (void)updateNavigationBarStyle;
- (void)updateNavigationBarItemColor:(id)a0;
- (void)updateNavigationBarTitleTheme:(id)a0;
- (void)updateTitleLabel:(id)a0 TextAttributes:(id)a1;
- (void)homeButtonOnClicked;
- (void)adjustCustomLabel:(id)a0;
- (void)updateNavigationBarItem;
- (id)initWithUniqueID:(id)a0 info:(id)a1 type:(unsigned long long)a2;
- (void)setupXScreenUI;
- (void)updateNavigationBarItemTheme:(id)a0 isBackButton:(BOOL)a1;
- (void)backButtonOnClicked;
- (void).cxx_destruct;
- (id)backButton;
- (id)titleLabel;
- (id)homeButton;

@end
