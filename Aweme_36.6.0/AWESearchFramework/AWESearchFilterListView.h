@class AWESearchFilterSectionModel, NSString, UITableView;
@protocol AWESearchFilterListViewDelegate;

@interface AWESearchFilterListView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (class, readonly, nonatomic) double cellHeight;

@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<AWESearchFilterListViewDelegate> delegate;
@property (readonly, nonatomic) long long selectedIndex;
@property (readonly, nonatomic) AWESearchFilterSectionModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadModel:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
