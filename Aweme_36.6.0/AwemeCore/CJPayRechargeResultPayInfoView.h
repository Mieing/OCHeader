@class NSArray, NSMutableDictionary, NSString, UIView, UITableView;

@interface CJPayRechargeResultPayInfoView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) NSMutableDictionary *heightCache;
@property (nonatomic) double tableViewHeight;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *topLineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadWith:(id)a0;
- (void)p_calcTableViewHeight;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
