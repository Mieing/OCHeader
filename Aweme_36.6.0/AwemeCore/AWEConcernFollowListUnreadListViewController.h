@class AWEHotSearchProgressView, AWEHotSearchProgressViewWithNumber, NSString;
@protocol AWEConcernRecentUpdateUnreadListPageHandlerProtocol;

@interface AWEConcernFollowListUnreadListViewController : AWEAwemeDetailTableViewController <AWEUserMessage>

@property (retain, nonatomic) AWEHotSearchProgressView *progressView;
@property (retain, nonatomic) AWEHotSearchProgressViewWithNumber *progressWithNumberView;
@property (nonatomic) BOOL didReceiveAutoPlayNotification;
@property (nonatomic) unsigned long long recentEnterFrom;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) BOOL enablePage;
@property (weak, nonatomic) id<AWEConcernRecentUpdateUnreadListPageHandlerProtocol> pageHandler;
@property (copy, nonatomic) id /* block */ willDisappearBlock;
@property (copy, nonatomic) NSString *firstUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)onScrollViewWillBeginDragging:(double)a0;
- (id)currentDisplayUserID:(id)a0;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)initialDataSourceFetchDidFinished;
- (void)onScrollWillChangeVideo:(id)a0 index:(long long)a1 directTop:(BOOL)a2;
- (id)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (id)awemeModelWithIndexPath:(id)a0;
- (id)initWithUserID:(id)a0;
- (void)addProgressView;
- (void)configStayTimeParams;
- (void)willPlayNextLoop:(id)a0;
- (void)updateProgressView:(id)a0;
- (BOOL)isLastVideoWithIndexPath:(id)a0;
- (void)toastForUserChangeIfNeededWithIndexPath:(id)a0;
- (id)createDefaultConfig;
- (BOOL)closeCellPreload;
- (BOOL)shouldShowCommentInputViewForAweme:(id)a0;
- (long long)emptyAwemeType;
- (void)videoFeedScrollToNextVideo;
- (id)initWithUserID:(id)a0 enterFrom:(unsigned long long)a1 pageHandler:(id)a2 logExtraDict:(id)a3 willDisappearBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
