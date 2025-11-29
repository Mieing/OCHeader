@class NSString, MMBadgeView, RightTopMenuData, NSMutableDictionary, MMBarButton;
@protocol NewMainFrameRightTopMenuBtnDelegate;

@interface NewMainFrameRightTopMenuBtn : MMBarItemCustomView <MMNewTipsMgrExt, MMConfigMgrExt, WCPayLogicMgrExt, WCLazyInitObjectProtocol> {
    MMBadgeView *m_showNewView;
    RightTopMenuData *m_data;
    NSMutableDictionary *m_dicItems;
}

@property (weak, nonatomic) id<NewMainFrameRightTopMenuBtnDelegate> delegate;
@property (retain, nonatomic) MMBarButton *m_addButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL haveLazyInit;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)timeToLazyInitAfterOpenFirstView;
- (void)goToLazyInitObject;
- (void)onItemAction:(id)a0;
- (BOOL)isTopRightMenuShowID:(id)a0;
- (void)updateImageColor:(id)a0 alpha:(double)a1 animated:(BOOL)a2;
- (void)showRightTopMenuBtn;
- (id)checkIfNeedAddOfflinePayItem:(id)a0;
- (void)saveArchive;
- (void)reloadMenuItems;
- (void)checkRedDot;
- (void)showRedDot:(BOOL)a0;
- (BOOL)isRedDotShowed;
- (void)reloadAllItems;
- (void)reloadData;
- (void)onMMDynamicConfigUpdated;
- (void)OnGetReceiveOrPayReddotData;
- (void)ReloadWallet;
- (void)ReloadOfflineCodeData;
- (void)onTipsShowInfoChangeWithPathKey:(id)a0;
- (void).cxx_destruct;

@end
