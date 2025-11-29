@class _TtC16AWELiveSwiftImpl32AWEFeedLiveTabOperationEntryView, _TtC16AWELiveSwiftImpl31AWEFeedLiveTabOperationFoldView, NSString, OperationFoldContent, NSMutableArray;

@interface AWEFeedLiveTabOperationComponent : AWEFeedLiveTabBaseComponent <AWEFeedLiveTabViewControllerLifeCycleAction, AWEFeedLiveTabRevisitLifeCycleAction, AWEFeedLiveTabOperationService>

@property (nonatomic) BOOL backToExpand;
@property (retain, nonatomic) _TtC16AWELiveSwiftImpl32AWEFeedLiveTabOperationEntryView *entryView;
@property (retain, nonatomic) _TtC16AWELiveSwiftImpl31AWEFeedLiveTabOperationFoldView *foldView;
@property (retain, nonatomic) NSMutableArray *operationData;
@property (retain, nonatomic) OperationFoldContent *operationFoldContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotification;
- (void)feedLiveTabDidEnter:(id)a0;
- (void)feedLiveTabDidLeave;
- (void)feedLiveTabRevisitPageRefresh;
- (void)updateComponentWith:(id)a0;
- (void)bindService;
- (double)heightOfComponent;
- (void)handleOperationPageBack:(id)a0;
- (void)reportOperationClick:(id)a0;
- (void)reportOperationDataShow:(id)a0;
- (void)reportOperationFoldViewClick:(id)a0;
- (void)insertOperationWithModuleSource:(int)a0;
- (BOOL)isLiveTabOperationFoldViewShowing;
- (id)operationFoldContentData;
- (void)feedLiveTabRevisitWillOpen:(long long)a0;
- (void)feedLiveTabRevisitDidOpen:(long long)a0;
- (void)feedLiveTabRevisitClosed:(long long)a0;
- (void)feedLiveTabDidReLayoutRevisit;
- (BOOL)enableShowOperationFold;
- (BOOL)isClickEnterTab;
- (BOOL)enableOperationFoldWhenLanding;
- (BOOL)enableOperationFoldWhenEntered;
- (void)reportOperationShow;
- (void)reportOperationFoldViewShow:(id)a0;
- (id)trackParamsWithModuleData:(id)a0;
- (id)trackParamsWithFoldData:(id)a0;
- (id)findOperationDataWithModuleSource:(int)a0;
- (double)topPadding;
- (void).cxx_destruct;
- (id)contentView;
- (id)init;
- (void)setup;

@end
