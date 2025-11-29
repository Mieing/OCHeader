@class NSString, AWEIMCodeGenGetInvalidConvSwitchStatusResponseModel;

@interface AWEIMMessageTabInvalidConversationListComponent : AWEIMMessageTabCustomDataBaseListComponent <AWEIMMessageTabIndexAction>

@property (retain, nonatomic) AWEIMCodeGenGetInvalidConvSwitchStatusResponseModel *invalidModel;
@property (nonatomic) BOOL hasTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)hostVC_viewWillDisappear;
- (id)createDataController;
- (long long)currentWrapperType;
- (id)titleTextInEmptyPage;
- (id)infomativeTextInEmptyPage;
- (BOOL)hideUnreadDot;
- (BOOL)enableShowChildViewController;
- (id)viewControllerIdentify;
- (BOOL)canShowHeaderInCurrentViewController;
- (void)setupIndicatorModel:(id)a0;
- (void)tabIndicatorView:(id)a0 didSelectedToIndex:(long long)a1 fromIndex:(long long)a2 withFromModel:(id)a3 toModel:(id)a4;
- (void)updateSelectedIndex:(long long)a0 model:(id)a1 byScrollView:(id)a2;
- (void)trackInvalidPageShow;
- (id)generateInvalidEmptyAttributeString;
- (void)refreshInvalidStatus;
- (id)centerAttributeTextInEmptyPage;
- (long long)entryType;
- (void).cxx_destruct;
- (long long)unreadCount;
- (id)title;
- (long long)indicatorType;
- (id)trackName;

@end
