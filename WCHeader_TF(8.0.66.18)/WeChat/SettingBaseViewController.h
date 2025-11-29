@class NSString, MMTableView;

@interface SettingBaseViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource> {
    MMTableView *m_tableView;
}

@property (retain, nonatomic) NSString *m_nsTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mmTableView:(id)a0 touchesBegan:(id)a1 withEvent:(id)a2;
- (void)mmTableView:(id)a0 touchesMoved:(id)a1 withEvent:(id)a2;
- (void)mmTableView:(id)a0 touchesEnded:(id)a1 withEvent:(id)a2;
- (void)mmTableView:(id)a0 touchesCancelled:(id)a1 withEvent:(id)a2;
- (id)initWithTitle:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
