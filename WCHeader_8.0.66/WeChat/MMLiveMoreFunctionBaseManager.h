@class NSString, MMFinderLiveTaskId, NSMutableArray, MMLiveAnchorMoreFunctionOperationView;
@protocol MMLiveMoreFunctionManagerDelegate;

@interface MMLiveMoreFunctionBaseManager : NSObject <UITableViewDelegate, UITableViewDataSource, MMFinderLiveMoreFunctionBaseCellDelegate>

@property (weak, nonatomic) id<MMLiveMoreFunctionManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) NSMutableArray *titleArray;
@property (retain, nonatomic) MMLiveAnchorMoreFunctionOperationView *operationView;
@property (nonatomic) unsigned long long operationViewType;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (nonatomic) BOOL isGameLive;
@property (nonatomic) double customHeight;
@property (nonatomic) long long fromSrc;
@property (copy, nonatomic) id /* block */ redDotQueryBlock;
@property (copy, nonatomic) id /* block */ redDotExposeBlock;
@property (copy, nonatomic) id /* block */ redDotClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getMoreFunctionItemsWithTaskId:(id)a0 viewType:(unsigned long long)a1 isGameLive:(BOOL)a2;

- (void)showMoreFunctionOperationViewWithTaskId:(id)a0 operationViewType:(unsigned long long)a1 isGameLive:(BOOL)a2 customHeight:(double)a3 inView:(id)a4 fromSrc:(long long)a5;
- (void)hideMoreFunctionOperationView;
- (void)reloadOperationView;
- (void)scrollToAndHighLightItemWithItemType:(unsigned long long)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)canShowHeader:(long long)a0;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)canDidSelectWithItem:(id)a0;
- (void)moreFunctionIndexPath:(id)a0 item:(id)a1 isOn:(BOOL)a2;
- (void)invokePushToVC:(id)a0 naviBarHidden:(BOOL)a1 fromItem:(id)a2;
- (void)onReportOperationViewDidSelect:(unsigned long long)a0 item:(id)a1;
- (id)getAnchorMoreFunctionOperationView;
- (void)onOperationViewWillDisappear;
- (id)createData:(unsigned long long)a0;
- (id)getCurrentTitle:(unsigned long long)a0;
- (double)getCurrentSectionHeight:(id)a0;
- (long long)getCurrentSectionCount:(long long)a0;
- (BOOL)isCanUseSectionArray:(id)a0;
- (double)getHeightForRowAtIndexPath:(id)a0;
- (unsigned long long)getCellRetCorner:(id)a0 dataArray:(id)a1;
- (double)getDetailStringHeightWithItem:(id)a0;
- (double)getTitleStringHeightWithItem:(id)a0;
- (id)getFunctionItemForRowAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
