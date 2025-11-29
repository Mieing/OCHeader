@class NSArray, NSString, UITableView;

@interface MMMassSendContactListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *contacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContacts:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
