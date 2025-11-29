@class NSArray, NSString, UITableView;
@protocol AWEIMGroupListSortingMenuProtocol, UITableViewDelegate;

@interface AWEIMGroupListSortingMenuView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *dataArray;
@property (weak, nonatomic) id<UITableViewDelegate, AWEIMGroupListSortingMenuProtocol> tableViewDelegate;
@property (nonatomic) unsigned long long colorTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)refreshMenuStatus;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 items:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;

@end
