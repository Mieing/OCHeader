@class NSArray, NSDictionary, UITableView;

@interface AWEMusicStreamingImpl.LunaMultiArtistsPanel : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* function */ artists;
    void /* function */ trackParams;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
}

@property (nonatomic, copy) NSArray *artists;
@property (nonatomic, copy) NSDictionary *trackParams;
@property (nonatomic, retain) UITableView *tableView;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)followStatusChangedWithNoti:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
