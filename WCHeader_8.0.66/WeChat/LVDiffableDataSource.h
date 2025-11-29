@protocol LVDiffableDataSourceDelegate;

@interface LVDiffableDataSource : UITableViewDiffableDataSource

@property (weak, nonatomic) id<LVDiffableDataSourceDelegate> delegate;

- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end
