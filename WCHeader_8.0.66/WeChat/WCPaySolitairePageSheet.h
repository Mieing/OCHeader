@class NSArray, MMPageSheetAdapter, NSString, UIView, MMTableView;
@protocol WCPaySolitairePageSheetDelegate;

@interface WCPaySolitairePageSheet : NSObject <MMPageSheetAdapterDelegate, UITableViewDelegate, UITableViewDataSource, WCPayGPSoliListTableViewCellDelegate>

@property (retain, nonatomic) NSArray *dataList;
@property (weak, nonatomic) id<WCPaySolitairePageSheetDelegate> delegate;
@property (retain, nonatomic) MMPageSheetAdapter *pageAdapter;
@property (retain, nonatomic) UIView *pageDetailView;
@property (retain, nonatomic) MMTableView *dataTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)updatePageSheetWithData:(id)a0;
- (void)setupAdapter;
- (void)setupDetailView;
- (void)setupEmptyView;
- (void)setupDataTableView;
- (double)calcContentViewHeight;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onClickCellShowDetailWithSoliObj:(id)a0;
- (void)showPageSheet;
- (void)dismissPageSheet;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void).cxx_destruct;

@end
