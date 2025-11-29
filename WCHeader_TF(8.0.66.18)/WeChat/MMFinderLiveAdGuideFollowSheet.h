@class WCTableViewManager, NSString, MMFinderLiveTaskId;
@protocol MMFinderLiveAdGuideFollowSheetDelegate;

@interface MMFinderLiveAdGuideFollowSheet : MMPageSheetBaseView <MMFinderLiveAdGuideFollowCellDelegate, MMFinderLiveGuideFollowExt, MMUIViewControllerExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLiveAdGuideFollowSheetDelegate> delegate;
@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithTaskId:(id)a0 delegate:(id)a1;

- (id)initWithTaskId:(id)a0 delegate:(id)a1;
- (void)setupPageSheetConfig;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (void)setupSubviews;
- (void)layoutSubviews;
- (double)fixedHeight;
- (void)layoutUI;
- (void)configureOptionTableView;
- (void)addAnchorSection;
- (void)addAdSection;
- (id)makeHeaderViewWith:(id)a0 topPading:(double)a1;
- (void)pageSheetDidAppear;
- (void)fetchData;
- (void)refresh;
- (void)MMUIViewControllerDidAppear:(id)a0;
- (void)onFollowInLiveFail:(id)a0;
- (void)onFollowInLiveSuccess:(id)a0;
- (void)onClickMMFinderLiveAdGuideFollowCellFollow:(id)a0 isAnchor:(BOOL)a1;
- (void)onClickMMFinderLiveAdGuideFollowCellContent:(id)a0;
- (id)liveTask;
- (double)tableCellHeight;
- (double)tableWidth;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
