@class MMScrollActionSheet, NSString, MMPageSheetAdapter, MMWebViewController, MMWebPageSheetConfig;
@protocol MMWebPageSheetDelegate;

@interface MMWebPageSheetAdapter : NSObject <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, MMWebViewPresetUIChildViewDelegate, MMPageSheetContainerViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) MMPageSheetAdapter *weakPageAdapter;
@property (retain, nonatomic) MMScrollActionSheet *actionSheet;
@property (retain, nonatomic) MMWebPageSheetConfig *config;
@property (retain, nonatomic) MMWebViewController *webVC;
@property (weak, nonatomic) id<MMWebPageSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWebShareMenuInView:(id)a0 customMenuItem:(id)a1;
- (id)row1MenuItem;
- (id)row2MenuItemWithCustomMenuItem:(id)a0;
- (id)actionSheetItemWithText:(id)a0 image:(id)a1 disable:(BOOL)a2 userInfo:(id)a3;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)scrollActionSheetWillDismiss:(id)a0;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (id)initWithURL:(id)a0 config:(id)a1;
- (void)dealloc;
- (void)setupWebViewControllerWithURL:(id)a0;
- (id)webviewController;
- (double)curPageSheetHeight;
- (id)genAndReturnPageSheetAdapter;
- (id)genAndReturnPageSheetContainerVC;
- (id)regenPageSheetContainerVCWithPageAdapter:(id)a0;
- (void)onPageSheetConfigChanged;
- (void)updatePageSheetNavState;
- (void)updatePageSheetNavLeftState;
- (id)foldButton;
- (id)goBackButton;
- (id)buttonBkgColorFromTintColor:(id)a0;
- (void)clickCloseButton:(id)a0;
- (id)navRightArea;
- (id)rightMoreButton;
- (void)clickMoreButton:(id)a0;
- (id)refreshButton;
- (void)clickRefreshButton:(id)a0;
- (void)onWebViewControllerRecieveCloseEvent:(id)a0;
- (void)onWebViewControllerHistoryChanged:(id)a0;
- (void)pageSheetContainerVCWillDismiss:(id)a0;
- (void)pageSheetContainerVCDidDismiss:(id)a0;
- (void).cxx_destruct;

@end
