@class IESLiveSearchSugManager, NSString, UITableView;

@interface IESLiveSearchSugViewController : UIViewController <IESLiveSearchSugTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveSearchSugManager *manager;
@property (copy, nonatomic) id /* block */ sugTapBlock;
@property (copy, nonatomic) id /* block */ sugComplementTapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (void)searchSugTableViewCell:(id)a0 didClickComplement:(id)a1;
- (void)fetchSugWithQuery:(id)a0;
- (BOOL)isNewFeedDrawStyle;
- (void)hideSearchSugView;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
