@class NSNumber, AWEDCRefreshToastView;

@interface AWEFeedNewDoubleColumnPreviewOutOfTimeRefreshController : AWEDCFeedBaseController

@property (retain, nonatomic) NSNumber *leaveTime;
@property (nonatomic) BOOL needRefreshInPreView;
@property (nonatomic) BOOL needRefreshForOutOfTimeInPreView;
@property (retain, nonatomic) AWEDCRefreshToastView *refreshToast;
@property (nonatomic) BOOL refreshWithoutAnimationInPreview;
@property (nonatomic) BOOL isFirstLoadToastShow;

+ (BOOL)toastFixEnable;

- (BOOL)checkIsShowing;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerAfterViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)clearSwitchPreviewClientShowArray;
- (void)recordLeaveTimeIfNeeded;
- (void)resetLeaveTimeIfNeeded;
- (BOOL)enableTimeIntervalRefreshInPreview;
- (BOOL)isTimeIntervalForRefreshInPreview;
- (BOOL)isOutOfTimeForRefreshInPreview;
- (void)outOfTimeRefreshInPreview;
- (void)trackPreViewRefresh:(id)a0;
- (void)inTimeIntervalRefreshInPreview;
- (double)animatedTimeInPreview;
- (long long)refreshTimeThresholdInPreview;
- (long long)outTimeOfRefresh;
- (BOOL)shouldRefreshInPreview;
- (id)outOfTimeRefreshConfigInPreview;
- (void).cxx_destruct;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)containerViewDidLoad;
- (void)refreshIfNeeded;

@end
