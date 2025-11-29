@class AWELikeWorkViewController, NSString;

@interface AWELikeTabDetailComponent : AWEUserDetailBaseComponent <AWEProfileTabListProviderProtocol, AWELikeTabDetailComponentProtocol>

@property (retain, nonatomic) AWELikeWorkViewController *likeVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)logExtraDict;
- (id)tabVCDelegate;
- (void)reloadEmptyPage;
- (void)setBackgroundColorWith:(id)a0;
- (void)onRefreshHeaderView:(id)a0 shouldRefreshTabView:(BOOL)a1;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (void)onResetUI;
- (void)onUpdateHeaderHeight;
- (void)updateUserWith:(id)a0;
- (void)addOtherLikeLock;
- (id)likeTabModel;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)removeAll;
- (id)title;
- (id)originalTitle;
- (void)refreshData;
- (void)onInit;

@end
