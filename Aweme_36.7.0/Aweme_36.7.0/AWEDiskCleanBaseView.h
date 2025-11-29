@class NSArray, AWEUITextLoadingView, NSString, UIView, UITableView;

@interface AWEDiskCleanBaseView : UIView <UITableViewDataSource>

@property (retain, nonatomic) UIView *overlay;
@property (retain, nonatomic) AWEUITextLoadingView *loading;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *cleanModels;
@property (copy, nonatomic) id /* block */ cleanAction;
@property (nonatomic) double headerTopOffset;
@property (nonatomic) double headerHeight;
@property (nonatomic) double tableviewTopOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInitialLoading;
- (void)hidenLoading;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupTableView;
- (void)setupHeaderView;
- (void)setupContentView;

@end
