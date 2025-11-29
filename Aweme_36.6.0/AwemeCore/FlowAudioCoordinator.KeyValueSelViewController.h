@interface FlowAudioCoordinator.KeyValueSelViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ refObj;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ counter;
    void /* unknown type, empty encoding */ cellItems;
    void /* unknown type, empty encoding */ onCompleted;
    void /* unknown type, empty encoding */ result;
}

- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1;

@end
