@class NSArray, NSString;

@interface AWETeenLongPressTableView : UITableView <UITableViewDelegate, UITableViewDataSource>

@property (copy, nonatomic) NSArray *dataArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)borderForView:(id)a0;
- (void)setSectionCornreRadiusAndLines:(id)a0 forRowAtIndexPath:(id)a1;
- (void)configCell:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)setupUI;

@end
