@class DUXTeenPopover, NSString, AWETeenUserHomeViewController, UIButton;
@protocol AWETeenModeTabBarGeneralButtonProtocol;

@interface AWEBizTabBarTeenHomePageItemConfig : NSObject <AWETeenAlbumCollectMessage, AWEUserMessage, AWEAlertProtocol, DUXPopoverDelegate, AWETeenShowPrivateWorkPopoverMessage, AWETeenModeTabBarItemConfigProtocol>

@property (retain, nonatomic) UIButton<AWETeenModeTabBarGeneralButtonProtocol> *teenHomePageButton;
@property (retain, nonatomic) AWETeenUserHomeViewController *teenUserHomeController;
@property (retain, nonatomic) DUXTeenPopover *popover;
@property (copy, nonatomic) id /* block */ onCloseAlert;
@property (nonatomic) BOOL isShowingBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)popoverDidDisappear:(id)a0;
- (id)tabBarItemViewController;
- (id)tabBarItemButton;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (void)tabBarDidSelectItemFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (BOOL)loginIfNeededAtTabBarItemSelection:(BOOL)a0;
- (id)loginInfoAtTabBarItemSelectionFromPreviousSelectedType:(long long)a0;
- (void)dismissPopoverIfNeeded;
- (void)didUpdateAlbumCollectStatus:(long long)a0 albumID:(id)a1;
- (void)showPrivateWorkPopoverIfNeeded;
- (void)p_tryToShowAlbumCollectRedDot;
- (void)tryToShowPrivateWorkPopover;
- (void)showPrivateWorkPopover;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (void)dealloc;
- (void)setupConfig;

@end
