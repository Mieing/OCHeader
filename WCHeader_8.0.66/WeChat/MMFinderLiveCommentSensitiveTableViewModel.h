@class MMFinderLiveSensitiveTableView, NSMutableArray, NSString;

@interface MMFinderLiveCommentSensitiveTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMFinderLiveSensitiveTableView *tableView;
@property (retain, nonatomic) NSMutableArray *sensitiveSrcDataItems;
@property (copy, nonatomic) id /* block */ onSensitiveDataItemAddCallback;
@property (copy, nonatomic) id /* block */ onSensitiveDataItemDeleteCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0;
- (void)updateSensitiveDataItems:(id)a0;
- (id)currSensitiveDataItems;
- (void)deleteSensitiveDataItem:(id)a0;
- (id)getVisibleEditTableViewCell;
- (void)addSensitiveWord:(id)a0;
- (void)deleteSensitiveDataItemAtIndex:(unsigned long long)a0;
- (void)reloadData;
- (unsigned long long)checkEnableAddSensitiveDataItem:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)handleTableViewPanGesture:(id)a0;
- (void).cxx_destruct;

@end
