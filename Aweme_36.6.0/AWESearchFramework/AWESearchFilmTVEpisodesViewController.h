@class NSArray, NSString, UITableView;

@interface AWESearchFilmTVEpisodesViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ buttonClickedBlock;
@property (nonatomic) BOOL varietyStyle;
@property (retain, nonatomic) NSArray *modelArray;
@property (nonatomic) BOOL showPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateModelList:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)reloadTableView;

@end
