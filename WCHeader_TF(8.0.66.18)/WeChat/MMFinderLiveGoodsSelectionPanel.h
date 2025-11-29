@class UIView, MMFinderLiveGoodsItem, NSString, MMFinderLiveTask, MMUIView, MMFinderLiveTaskId, NSMutableArray, MMLiveHalfScreenTitleBarView, MMUILabel, MMTableView, MMFinderLiveGoodsViewModel;
@protocol MMFinderLiveGoodsSelectionPanelDelegate;

@interface MMFinderLiveGoodsSelectionPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMLiveHalfScreenTitleBarViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *mainTitleBar;
@property (retain, nonatomic) UIView *topSeparatorLine;
@property (retain, nonatomic) MMUIView *headerView;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMUILabel *noSelectLabel;
@property (retain, nonatomic) MMTableView *goodsListTableView;
@property (retain, nonatomic) NSMutableArray *goodsViewModels;
@property (retain, nonatomic) MMFinderLiveGoodsViewModel *selectedGoodsViewModel;
@property (nonatomic) unsigned long long curAskedProductId;
@property (nonatomic) long long openFromSrc;
@property (weak, nonatomic) id<MMFinderLiveGoodsSelectionPanelDelegate> delegate;
@property (readonly, nonatomic) MMFinderLiveGoodsItem *currSelectGoodsItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 curAskedProductId:(unsigned long long)a1;
- (void)intUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)showWithAnimated:(BOOL)a0;
- (double)contentViewHeight;
- (void)updateWithShopWindowItems:(id)a0;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)handleHeaderViewGestureRecognizer:(id)a0;
- (void).cxx_destruct;

@end
