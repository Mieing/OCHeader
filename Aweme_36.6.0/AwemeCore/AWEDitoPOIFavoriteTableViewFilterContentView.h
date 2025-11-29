@class NSString, AWEDitoPOIFavoriteFilterComponentViewModel, UIView, AWEDitoPOIFavoritePageContext, UITableView;
@protocol AWEDitoPOIFavoriteTableViewFilterContentViewDelegate;

@interface AWEDitoPOIFavoriteTableViewFilterContentView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITableView *l2AreaTableView;
@property (retain, nonatomic) UITableView *l3AreaTableView;
@property (retain, nonatomic) UITableView *typeTableView;
@property (retain, nonatomic) UITableView *sortTableView;
@property (retain, nonatomic) UIView *customMaskView;
@property (nonatomic) unsigned long long contentType;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ dismissingAnimatedBlock;
@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;
@property (weak, nonatomic) id<AWEDitoPOIFavoriteTableViewFilterContentViewDelegate> delegate;
@property (weak, nonatomic) AWEDitoPOIFavoriteFilterComponentViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentFilterFromContainer:(id)a0 anchorView:(id)a1 animated:(BOOL)a2 animatedBlock:(id /* block */)a3;
- (void)dismissFilterAnimated:(BOOL)a0 animatedBlock:(id /* block */)a1;
- (id)initWithContext:(id)a0 contentType:(unsigned long long)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)reload;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)setupUI;

@end
