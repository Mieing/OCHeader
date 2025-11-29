@class NSArray, NSString, UITableView;

@interface MMFinderLiveNoticeCouponsGuideView : UIView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveCouponViewDelegate>

@property (retain, nonatomic) NSArray *coupons;
@property (retain, nonatomic) NSArray *notices;
@property (copy, nonatomic) NSString *anchor;
@property (retain, nonatomic) UITableView *couponsTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNotices:(id)a0 anchor:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onActionButtonClicked:(id)a0 view:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })couponCellsPadding;
- (void).cxx_destruct;

@end
