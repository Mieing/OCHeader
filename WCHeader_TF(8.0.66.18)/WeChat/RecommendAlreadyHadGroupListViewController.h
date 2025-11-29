@class MMTableView, NSArray, NSDictionary, NSString, SearchMatchTip;
@protocol RecommendAlreadyHadGroupListViewControllerDelegate;

@interface RecommendAlreadyHadGroupListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMTableView *tableView;
@property (weak, nonatomic) id<RecommendAlreadyHadGroupListViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *arrRecommendAlreadyHadGroup;
@property (retain, nonatomic) SearchMatchTip *defaultSearchMatchTip;
@property (retain, nonatomic) NSDictionary *allSearchMatchTip;
@property (nonatomic) unsigned int appearType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)makeCell:(id)a0 tableCell:(id)a1 section:(unsigned long long)a2 row:(unsigned long long)a3;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
