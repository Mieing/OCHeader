@class NSArray, NSString, NSMutableArray, MMTableView;
@protocol TipsViewDelegate;

@interface MMMsgTipsMixedListExpandView : MMMsgTipsExpandView <UITableViewDelegate, UITableViewDataSource, TipsViewDelegate>

@property (retain, nonatomic) NSArray *tipsBarList;
@property (retain, nonatomic) NSMutableArray *tipsViews;
@property (retain, nonatomic) MMTableView *tableView;
@property (nonatomic) BOOL isRowAnimating;
@property (weak, nonatomic) id<TipsViewDelegate> tipsViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)layoutSubviews;
- (void)doLayout;
- (void)updateTipsBarList:(id)a0;
- (void)makeTipsViews;
- (id)tipsViewForItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getRectInWindowWithTipsItem:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)totalHeight;
- (void)removeTipsView:(id)a0;
- (void)onExpandViewDisappear;
- (void)scrollViewDidScroll:(id)a0;
- (void)resetWaitingForConfirmForAllTipsView;
- (void)resetWaitingForConfirmExceptTipsView:(id)a0;
- (void)onTipsViewClick:(id)a0;
- (void)onTipsViewClose:(id)a0;
- (void)onPerformAction:(id)a0;
- (void)onPerformIconAction:(id)a0;
- (void)onPerformExposeAction:(id)a0;
- (void)onTipsViewHideAtTimeout:(id)a0;
- (void)onMenuControllerVisible:(id)a0;
- (void)onTipsViewHeightChanged:(id)a0;
- (void)onTipsViewDidShow:(id)a0;
- (void)onRightButtonWaitingForConfirm:(id)a0;
- (void).cxx_destruct;

@end
