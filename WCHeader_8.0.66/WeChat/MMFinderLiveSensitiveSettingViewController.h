@class MMFinderLiveSensitiveTableView, MMFinderLiveTaskId, MMFinderLiveSensitiveLogic, MMFinderLiveTask, MMFinderLiveCommentSensitiveTableViewModel;

@interface MMFinderLiveSensitiveSettingViewController : MMUILandscapeSheetViewController

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (retain, nonatomic) MMFinderLiveSensitiveTableView *tableView;
@property (retain, nonatomic) MMFinderLiveCommentSensitiveTableViewModel *tableViewModel;
@property (retain, nonatomic) MMFinderLiveSensitiveLogic *sensitiveLogic;

+ (void)presentSensitiveSettingVCFromVC:(id)a0 taskId:(id)a1;

- (id)initWithLiveTaskId:(id)a0;
- (void)viewDidLoad;
- (void)loadNavigationItems;
- (void)loadTableView;
- (id)createSensitiveTableVM:(id)a0;
- (void)requestSensitiveDatas;
- (BOOL)checkNeedToastFailForAction:(unsigned long long)a0;
- (void)onBackButtonClicked:(id)a0;
- (void)onSearchClicked:(id)a0;
- (void)reportForDeleteSensitiveItem:(id)a0;
- (void)reportForAddSensitiveItem:(id)a0;
- (void).cxx_destruct;

@end
