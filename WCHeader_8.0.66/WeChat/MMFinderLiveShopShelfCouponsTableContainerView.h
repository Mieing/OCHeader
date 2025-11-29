@class NSArray, NSString, MMFinderLiveTaskId, MMFinderLiveShopShelfSubPageHeaderView, MMTableView;
@protocol MMFinderLiveShopShelfCouponsTableContainerDelegate;

@interface MMFinderLiveShopShelfCouponsTableContainerView : UIView <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) id<MMFinderLiveShopShelfCouponsTableContainerDelegate> delegate;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMFinderLiveShopShelfSubPageHeaderView *headerView;
@property (readonly, nonatomic) long long cellStyle;
@property (retain, nonatomic) NSArray *couponViewModelGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskID:(id)a0 delegate:(id)a1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })couponCellsPadding;
- (void)reloadData;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })headerMarginsWithSection:(unsigned long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void).cxx_destruct;

@end
