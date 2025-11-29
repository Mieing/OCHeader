@class NSString, UITableViewCell, AWEFeedAntiAddictAlert, AWEAwemeModel, UIViewController;
@protocol AWEFeedContainerViewControllerProtocol, AWEFeedTrackControllerProtocol;

@interface AWEFeedAntiAddictController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedTrackControllerListenerProtocol>

@property (nonatomic) double antiAddictTableOffsetY;
@property (nonatomic) BOOL shouldPerformAntiAddictUI;
@property (retain, nonatomic) UIViewController<AWEFeedContainerViewControllerProtocol> *feedContainerVC;
@property (nonatomic) BOOL isAvoidAD;
@property (retain, nonatomic) AWEAwemeModel *antiAddicateModel;
@property (retain, nonatomic) AWEAwemeModel *insertedAddicateModel;
@property (retain, nonatomic) AWEFeedAntiAddictAlert *feedAntiAddictAlert;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL pureModeCausedByAntiaddict;
@property (weak, nonatomic) UITableViewCell *willDisPlayCell;
@property (weak, nonatomic) id<AWEFeedTrackControllerProtocol> feedTrackController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedAntiAddictControllerDOUYINLiteAdapterClass;

- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)scrollViewDidScrollEndWithActive;
- (void)handleAntiAddictEnterNotification:(id)a0;
- (id)paramsForTrackEventType:(unsigned long long)a0 initialContextParams:(id)a1;
- (id)paramsForEnterPersonalDetail;
- (void)preInsertAntiAddictData:(id)a0;
- (void)removeAntiData:(id)a0;
- (void)tryToRemoveAntiAddictVideo:(id)a0;
- (void)handleAntiAddictVideoEndNotification:(id)a0;
- (void)handleAntiAddictLeaveNotification:(id)a0;
- (id)aAWEFeedAntiAddictControllerDOUYINLiteAdapter;
- (void)handleLuckyCatWillBecomeVisible:(id)a0;
- (BOOL)checkTabbarIndex;
- (void)setAntiAddictPureModeCurrrentCell:(id)a0 pureMode:(BOOL)a1;
- (BOOL)enableFeedTableViewScrollBugfix;
- (void)ignoreAntiAddictMask:(id)a0;
- (void)ignoreAntiAddictMaskInLive:(id)a0;
- (id)noticeTypeStrFor:(id)a0;
- (id)noticeStyleStrFor:(id)a0;
- (void)insertAntiData;
- (void)reportAntiShowEvent;
- (void)deleteAntiAddictVideoIfNeeded;
- (void)insertAntiAddictData:(id)a0;
- (void)traceAntiAddictionWithStatus:(long long)a0 sendType:(id)a1 enterFrom:(id)a2 mantleType:(id)a3 videoId:(id)a4 videoType:(id)a5;
- (id)mantleType;
- (id)mantleVideoType;
- (void)replaceAntiAddicateModel:(id)a0;
- (BOOL)isAdWithModel:(id)a0;
- (void)p_detectRelieveVideo:(id)a0 isRefresh:(BOOL)a1;
- (BOOL)enableFeedRefreshMaskBugfix;
- (void)maskRefreshCompletion:(id)a0;
- (void)insertRefreshAntiAddicteData;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidDisappear;

@end
