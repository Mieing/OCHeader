@class UITextView, NSString, NSDictionary, TXCDashboardWindow, UITableView;

@interface TXCDashboardLayoutView : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITextView *statusView;
@property (retain, nonatomic) UITextView *logView;
@property (retain, nonatomic) UITableView *dashboardIDTableView;
@property (retain, nonatomic) TXCDashboardWindow *containerWindow;
@property (nonatomic, getter=isCollapseTableView) BOOL collapseTableView;
@property (retain, nonatomic) NSDictionary *dashboardInfo;
@property (copy, nonatomic) NSString *currentShowDashboardID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLayoutView;

- (id)initWithContainerWindow:(id)a0;
- (void)show:(BOOL)a0;
- (void)updateDashboardInfo:(id)a0;
- (void)reloadAllSubviewsIfNeeded;
- (void)reloadStatusTextView;
- (void)reloadLogTextView;
- (void)reloadDashboardTableView;
- (void)createSubviews;
- (id)createTextView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createTableView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)collapseList:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)runInMainThread:(id /* block */)a0;
- (void).cxx_destruct;

@end
