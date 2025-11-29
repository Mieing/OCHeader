@class NSArray, AWEUserPickerViewController, NSString, NSDictionary, UITableView;

@interface AWEUserListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate>

@property (weak, nonatomic) AWEUserPickerViewController *picker;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *sectionTitles;
@property (retain, nonatomic) NSArray *dataSource;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (retain, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)titleForEmptyDataSet:(id)a0;
- (double)verticalOffsetForEmptyDataSet:(id)a0;
- (BOOL)emptyDataSetShouldDisplay:(id)a0;
- (void).cxx_destruct;
- (void)viewSafeAreaInsetsDidChange;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;

@end
