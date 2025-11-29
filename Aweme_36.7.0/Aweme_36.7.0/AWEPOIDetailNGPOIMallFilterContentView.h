@class NSString, AWEDitoPOIMallPageContext, UIView, UITableView;
@protocol AWEDitoPOIMallTableViewFilterContentViewDelegate;

@interface AWEPOIDetailNGPOIMallFilterContentView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>

@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (retain, nonatomic) UITableView *l2AreaTableView;
@property (retain, nonatomic) UITableView *l3AreaTableView;
@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEDitoPOIMallPageContext *context;
@property (nonatomic) double componentHeight;
@property (weak, nonatomic) id<AWEDitoPOIMallTableViewFilterContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentFilterFromContainer:(id)a0 anchorView:(id)a1 animated:(BOOL)a2 animatedBlock:(id /* block */)a3;
- (void)dismissFilterAnimated:(BOOL)a0 animatedBlock:(id /* block */)a1;
- (void)reloadTableview;
- (void)resetL2TableSelected;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)setupUI;
- (void)dismissView;
- (void)updateContext:(id)a0;

@end
