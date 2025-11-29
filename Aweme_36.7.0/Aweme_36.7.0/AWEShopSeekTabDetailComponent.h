@class NSString, UIViewController;
@protocol AWEShopSeekWorkViewControllerProtocol;

@interface AWEShopSeekTabDetailComponent : AWEUserDetailBaseComponent <AWEProfileTabListProviderProtocol, AWEShopSeekTabDetailComponentProtocol>

@property (retain, nonatomic) UIViewController<AWEShopSeekWorkViewControllerProtocol> *shopSeekVC;
@property (copy, nonatomic) NSString *searchType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadEmptyPage;
- (void)onRefreshHeaderView:(id)a0 shouldRefreshTabView:(BOOL)a1;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (void)onResetUI;
- (void)onUpdateHeaderHeight;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)onDidRequestUser:(id)a0 error:(id)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)onInit;

@end
