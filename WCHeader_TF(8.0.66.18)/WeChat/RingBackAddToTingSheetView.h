@class WCTimeLineFooterView, NSString, UIView, NSMutableArray, MMTableView;
@protocol RingBackAddToTingSheetViewDelegate;

@interface RingBackAddToTingSheetView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, MMRefreshTableFooterDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) NSMutableArray *tingInfoArray;
@property (nonatomic) unsigned long long ringCount;
@property (weak, nonatomic) id<RingBackAddToTingSheetViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)resetData;
- (void)updateDataWithRings:(id)a0;
- (void)initView;
- (void)layoutSubviews;
- (void)clickCloseButton:(id)a0;
- (void)clickAddButton:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end
