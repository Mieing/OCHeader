@class UITableView, NSString, AWETeenSearchSugDataManager;
@protocol AWETeenSearchVideoProtocol;

@interface AWETeenSearchSugViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWETeenSearchSugTableViewCellDelegate>

@property (retain, nonatomic) AWETeenSearchSugDataManager *dataManager;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<AWETeenSearchVideoProtocol> delegate;
@property (copy, nonatomic) id /* block */ complementBlock;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchSugTableViewCell:(id)a0 didClickComplement:(id)a1;
- (void)p_stopSugQuery;
- (void)clearSearchSugView;
- (void)fetchSugWithQuery:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
