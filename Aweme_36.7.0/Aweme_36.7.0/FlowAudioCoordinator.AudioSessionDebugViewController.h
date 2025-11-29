@interface FlowAudioCoordinator.AudioSessionDebugViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerKeys;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mixerKeys;
    void /* unknown type, empty encoding */ audioUnitDesc;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_segmentControl;
}

- (void)clickSegment;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
