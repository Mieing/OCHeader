@interface FlowAudioCoordinator.AudioSessionSelViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ selectMode;
    void /* unknown type, empty encoding */ selectedItems;
    void /* unknown type, empty encoding */ optionalItems;
    void /* unknown type, empty encoding */ onCompleted;
}

- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;

@end
