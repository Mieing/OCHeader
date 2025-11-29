@class NSMutableArray, NSString, ContactsViewController, MoreViewController, MMTabbarItem, NewMainFrameViewController, FindFriendEntryViewController;
@protocol MainTabBarControllerDelegate;

@interface MainTabBarViewController : MMTabBarController <MMTabBarControllerDelegate, WCLazyInitObjectProtocol, MMNewTipsMgrExt, MMUIHookViewDelegate> {
    unsigned int m_whatHasInit;
    NewMainFrameViewController *m_mainFrameViewController;
    MMTabbarItem *m_mainFrameTabItem;
    ContactsViewController *m_contactsViewController;
    MMTabbarItem *m_contacsTabItem;
    FindFriendEntryViewController *m_findFriendEntryViewController;
    MMTabbarItem *m_findFrientTabItem;
    MoreViewController *m_moreViewController;
    MMTabbarItem *m_moreTabItem;
    NSMutableArray *m_arrViewController;
}

@property (nonatomic) BOOL recoverTabBarItems;
@property (weak, nonatomic) id<MainTabBarControllerDelegate> mainDelegate;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL haveLazyInit;

- (void)moveFromToTabIndex:(unsigned long long)a0 lastSelectedIsFindPage:(BOOL)a1;
- (double)timeToLazyInitAfterOpenFirstView;
- (void)goToLazyInitObject;
- (id)getNewMainFrameViewController;
- (id)getContactsViewController;
- (id)getTabBarBaseViewController:(unsigned long long)a0;
- (id)getAllTabBaseViewControllersIfExist;
- (id)getNavigationContollerAtIndex:(unsigned long long)a0;
- (id)getAllNavigationControllers;
- (void)OnMainFrameDoubleClicked:(id)a0;
- (void)OnMainFrameSingleClicked:(id)a0;
- (void)OnMainTabBarHiddenChange:(BOOL)a0;
- (BOOL)tabBarController:(id)a0 shouldSelectViewController:(id)a1;
- (void)tabBarController:(id)a0 didSelectViewController:(id)a1;
- (void)preloadRedDotLogic:(BOOL)a0 selectedIndex:(unsigned long long)a1 findFriendPageIndex:(long long)a2;
- (void)checkDBCorrupt;
- (id)tabBarController:(id)a0 animationControllerForTransitionFromViewController:(id)a1 toViewController:(id)a2;
- (id)init;
- (void)p_tryToInitAllControllers;
- (void)p_createTabBarItems;
- (void)p_createSlimViewControllers;
- (id)p_getNewMainFrameViewController;
- (void)p_createNewMainFrameViewController;
- (id)p_getContactsViewController;
- (void)p_createContactsViewController;
- (id)findFriendEntryViewController;
- (id)p_getFindFriendEntryViewController;
- (void)p_createFindFriendViewController;
- (id)p_getMoreViewController;
- (void)p_createMoreViewController;
- (void)recreateFindFriendViewController;
- (void)removeAllTabBarBaseViewController;
- (void)onCaptureScreen:(id)a0;
- (void).cxx_destruct;

@end
