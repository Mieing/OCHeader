@class NSNumber, NSString;

@interface AWEDCFeedOutOfTimeRefreshController : AWEDCFeedBaseController <AWEDCFeedOutOfTimeRefreshControllerProtocol>

@property (retain, nonatomic) NSNumber *leaveTime;
@property (nonatomic) BOOL needForceRefreshForOutOfTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkIsShowing;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerAfterViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (id)customRequestParams:(id)a0 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (id)customRequestArgs:(id)a0 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (id)classNameWithReferString;
- (void)appDidEnterBackgroundFromNoti:(id)a0;
- (void)appWillEnterForegroundFromNoti:(id)a0;
- (void)recordLeaveTimeIfNeeded;
- (BOOL)isTimeEnoughForRefresh;
- (void)clearSearchRecords;
- (void)clearNeedForceRefreshForSearchController;
- (void)clearSearchIDListFromController;
- (BOOL)needForceRefreshForSearchController;
- (id)searchIDListFromController;
- (long long)timeOfRefresh;
- (void)resetLeaveTimeIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addObservers;
- (void)refreshIfNeeded;

@end
