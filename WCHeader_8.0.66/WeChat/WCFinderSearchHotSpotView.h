@class WCFinderSearchHotSpotViewModel, NSString, UITableView;
@protocol WCFinderSearchHotSpotViewDelegate;

@interface WCFinderSearchHotSpotView : MMUIView <UITableViewDelegate, UITableViewDataSource, WCFinderSearchHotSpotViewModelDelegate, WCFinderSearchHistoryTableViewCellDelegate>

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderSearchHotSpotViewModel *viewModel;
@property (weak, nonatomic) id<WCFinderSearchHotSpotViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)setup;
- (void)setupData;
- (void)setupUI;
- (void)reloadHistoryData;
- (int)getCommentScene;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)onFinderSearchHotSpotVMDataChanged:(id)a0;
- (void)onRemoveSearchHistory:(id)a0;
- (void).cxx_destruct;

@end
