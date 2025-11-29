@class AWEHotSearchProgressView, NSString, AWEAwemeModel;
@protocol AWELeftSideBarRevisitUserListPageHandlerProtocol;

@interface AWELeftSideBarRevisitUserDetailListViewController : AWEAwemeDetailTableViewController <AWEUserMessage>

@property (retain, nonatomic) AWEHotSearchProgressView *progressView;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) id<AWELeftSideBarRevisitUserListPageHandlerProtocol> pageHandler;
@property (copy, nonatomic) id /* block */ willDisappearBlock;
@property (nonatomic) BOOL isSideDown;
@property (nonatomic) BOOL hasMoreUser;
@property (retain, nonatomic) AWEAwemeModel *priviousAweme;
@property (nonatomic) double enterTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)onScrollViewWillBeginDragging:(double)a0;
- (void)cellDidEndDisplay:(id)a0;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (id)currentDisplayUserID:(id)a0;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)initialDataSourceFetchDidFinished;
- (id)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (id)awemeModelWithIndexPath:(id)a0;
- (void)addProgressView;
- (void)updateProgressView:(id)a0;
- (id)createDefaultConfig;
- (BOOL)closeCellPreload;
- (BOOL)shouldShowCommentInputViewForAweme:(id)a0;
- (long long)emptyAwemeType;
- (id)initWithUserID:(id)a0 title:(id)a1 referString:(id)a2 latestVideo:(BOOL)a3 hasMoreUser:(BOOL)a4 pageHandler:(id)a5 logExtraDict:(id)a6 willDisappearBlock:(id /* block */)a7;
- (BOOL)isLastUserModel:(id)a0;
- (void)updateRevisitUserCellReadPointIfNeed:(id)a0;
- (void)toastForLastVideoWithIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
