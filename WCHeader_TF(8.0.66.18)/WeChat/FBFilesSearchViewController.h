@class UINavigationController, NSString, MMTableView;
@protocol FBFilesSearchViewControllerDelegate;

@interface FBFilesSearchViewController : WCSearchViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, WCFileBrowseCellDelegate>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) MMTableView *tableView;
@property (weak, nonatomic) UINavigationController *originalNav;
@property (weak, nonatomic) id<FBFilesSearchViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVCType:(unsigned long long)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)realStartSearchFrom:(id)a0 forceFullScreen:(BOOL)a1;
- (void)addLeftEdgeGestureState;
- (void)heroDidEndTransition;
- (void)loadTableView;
- (void)scrollViewDidScroll:(id)a0;
- (void)textDidChange:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)onFileBrowseCellTouchIndexPath:(id)a0;
- (void).cxx_destruct;

@end
