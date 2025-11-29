@class DUXVacantView, NSString, UIView;

@interface AWEMVFollowEmptyStateController : AWEDCFeedBaseController <AWEUserMessage>

@property (retain, nonatomic) UIView *backgroundHolderView;
@property (retain, nonatomic) DUXVacantView *vacantView;
@property (nonatomic) unsigned long long lastEnterFollowCount;
@property (retain, nonatomic) NSString *emptyContentTitleString;
@property (nonatomic) unsigned long long lastEmptyReason;
@property (nonatomic) unsigned long long loadmoreCount;
@property (nonatomic) BOOL needRefreshAfterFollowNewUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)enterContainerWithModel:(id)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onEmptyPageRetryButtonClicked;
- (void)createVacantViewIfNeeded;
- (void)onAWEMainNeedPersonalRecommendChangedNotification:(id)a0;
- (id)mvPageContext;
- (void)updateEmptyContentTitleString;
- (unsigned long long)emptyStateReasonWithResponseIsEmpty:(BOOL)a0;
- (void)updateEmptyViewIfNeededWithEmptyState:(unsigned long long)a0;
- (void)trackHasMoreFalseWithPullType:(unsigned long long)a0;
- (void)trackEmptyShowWithEmptyType:(id)a0;
- (void)loginAndRefresh;
- (void)routeToRecommendPage;
- (void)hideEmptyView;
- (void)clearModelsAndDuplicateSet;
- (void).cxx_destruct;
- (void)dealloc;
- (void)themeDidChange;
- (void)containerViewDidLoad;

@end
