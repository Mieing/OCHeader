@class WCFinderRefreshTableFooterView, MMFinderLivePromoteListBaseViewModel, NSString, UIView, NSMutableArray, MMTableView;

@interface MMFinderLivePromoteListBasePanel : MMPageSheetBaseView <WCFinderRefreshTableFooterViewDelegate>

@property (nonatomic) long long previousOrientation;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMTableView *mainTableView;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) MMFinderLivePromoteListBaseViewModel *listViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)pageSheetWillAppear;
- (void)initListViewModel:(id)a0;
- (void)fetchData;
- (void)realRefreshTableView;
- (void)createUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)pageSheetDidRotation;
- (void)setupPageSheetConfig;
- (id)getCurrentRightButton;
- (void)addButtonClicked;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (double)contentViewHeight;
- (id)getCurrentListViewModel;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void).cxx_destruct;

@end
