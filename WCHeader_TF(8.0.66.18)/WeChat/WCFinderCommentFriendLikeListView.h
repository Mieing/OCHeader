@class NSArray, UITableViewDiffableDataSource, NSDiffableDataSourceSnapshot, NSString, UITableView;

@interface WCFinderCommentFriendLikeListView : WCFinderCustomPanelSheet <UITableViewDelegate, WCFinderFansProfileViewControllerDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *likeInfoArray;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *snapShot;
@property (retain, nonatomic) UITableViewDiffableDataSource *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContactArray:(id)a0;
- (void)viewDidLoad;
- (BOOL)hideMaskBackGroundView;
- (id)loadContentView;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)fansProfileViewController:(id)a0 clickPrivateMsgWithContact:(id)a1 finderContact:(id)a2 comment:(id)a3;
- (void)onClickMore;
- (void).cxx_destruct;

@end
