@class NSString, AFDNewAccountRecommendManager, NSMutableSet, UIView, AFDNewAccountRecommendTipView, UITableView;

@interface AFDnewAccountRecommendViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AFDnewAccountRecommendListCellDelegate>

@property (retain, nonatomic) AFDNewAccountRecommendManager *dataController;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSMutableSet *impressionCellsIndex;
@property (retain, nonatomic) UIView *goToFeedFooterView;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (retain, nonatomic) AFDNewAccountRecommendTipView *tipView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTapFollowButtonOn:(id)a0 withListModel:(id)a1;
- (id)initWithFinishBlock:(id /* block */)a0 enterMethod:(id)a1 enterFrom:(id)a2;
- (void)addNavigationHeader;
- (void)closeRecommendToAcquaintance;
- (void)p_unfollowUserWithCell:(id)a0 model:(id)a1;
- (void)p_followUserWithCell:(id)a0 model:(id)a1;
- (void)updateTipViewHeight:(BOOL)a0;
- (void)clickSettingButton;
- (void)goToFeed;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
