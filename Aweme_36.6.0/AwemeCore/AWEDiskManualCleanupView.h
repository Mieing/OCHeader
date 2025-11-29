@class AWEDiskManualCleanupSpaceIndicator, NSArray, AWEUITextLoadingView, NSString, UIView, UITableView;

@interface AWEDiskManualCleanupView : UIView <UITableViewDataSource>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) double headerTopOffset;
@property (nonatomic) double headerHeight;
@property (nonatomic) double tableviewTopOffset;
@property (retain, nonatomic) UIView *overlay;
@property (retain, nonatomic) AWEUITextLoadingView *loading;
@property (retain, nonatomic) AWEDiskManualCleanupSpaceIndicator *spaceIndicator;
@property (nonatomic) long long progress;
@property (copy, nonatomic) NSArray *cleanModels;
@property (copy, nonatomic) id /* block */ cleanAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hiddenLoading;
- (void)startInitialLoading;
- (void)updateUIWithAppSize:(unsigned long long)a0 totalSize:(double)a1 freeSize:(double)a2;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupTableView;
- (void)setupHeaderView;
- (void)setupContentView;

@end
