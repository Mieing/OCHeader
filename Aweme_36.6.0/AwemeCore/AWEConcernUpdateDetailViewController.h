@class AWEListDataController, NSString, NSDictionary, AWEConcernUpdateDetailDispatcher, AWEHotSearchProgressView, UIViewController;
@protocol AWEConcernFollowListUnreadListDataControllerProtocol, AWEConcernUpdateDetailDispatcherProtocol, AWEAwemeDetailTableViewControllerProtocol, AWEConcernRecentUpdateUnreadListPageHandlerProtocol, AWEConcernUpdateDetailViewControllerDelegate;

@interface AWEConcernUpdateDetailViewController : UIViewController <AWEConcernUpdateDetailDispatcherDelegate, AWEAwemeDetailTableViewControllerDelegate, AWEAwemeNewDetailBlockManagerDelegate, AWEConcernUpdateDetailViewControllerProtocol>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *firstUserID;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) id /* block */ disappearBlock;
@property (weak, nonatomic) id<AWEConcernRecentUpdateUnreadListPageHandlerProtocol> pageHandler;
@property (nonatomic) unsigned long long recentEnterFrom;
@property (nonatomic) BOOL didReceiveAutoPlayNotification;
@property (retain, nonatomic) AWEHotSearchProgressView *progressView;
@property (retain, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *childDetailVC;
@property (retain, nonatomic) AWEListDataController<AWEConcernFollowListUnreadListDataControllerProtocol> *dataController;
@property (weak, nonatomic) AWEConcernUpdateDetailDispatcher<AWEConcernUpdateDetailDispatcherProtocol> *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEConcernUpdateDetailViewControllerDelegate> delegate;

+ (Class)aAWEPadBizUIAdapterClass;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didStartTransitionWithContext:(id)a0;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)initialDataSourceFetchDidFinished;
- (void)onScrollWillChangeVideo:(id)a0 index:(long long)a1 directTop:(BOOL)a2;
- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (id)awemeModelWithIndexPath:(id)a0;
- (id)aAWEPadBizUIAdapter;
- (void)addChildDetailVC;
- (void)addProgressView;
- (void)configStayTimeParams;
- (void)willPlayNextLoop:(id)a0;
- (void)updateProgressView:(id)a0;
- (BOOL)isLastVideoWithIndexPath:(id)a0;
- (void)toastForUserChangeIfNeededWithIndexPath:(id)a0;
- (BOOL)closeCellPreloadWithBlockManagerHelper:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
