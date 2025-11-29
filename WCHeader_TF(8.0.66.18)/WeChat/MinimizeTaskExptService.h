@class NSString;

@interface MinimizeTaskExptService : MMUserService <WAAppTaskMgrExt, MMWebViewControllerExtention, MMServiceProtocol>

@property (nonatomic) BOOL isOpenStarSwitch;
@property (nonatomic) BOOL isOpenMultiContentSwitch;
@property (nonatomic) BOOL isEnableStateTaskRestore;
@property (nonatomic) BOOL isEnableStarSearch;
@property (nonatomic) BOOL isTextImageMessageStarEnable;
@property (nonatomic) BOOL isUploadStarEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInitOnEdu;
- (BOOL)shouldShowMinimizeEntryReddot:(id)a0;
- (BOOL)minimizeEntryClicked;
- (void)markMinimizeEntryReddotAction:(id)a0 action:(long long)a1;
- (BOOL)minimizeEducationExped;
- (BOOL)checkShouldShowMinimizeEdu:(id)a0;
- (void)markMinimizeEduHasShow:(id)a0;
- (void)resetAllMinimizeEduAndReddotMark;
- (void)onAppTaskDidFinishLaunchWithAppId:(id)a0;
- (void)EX_WebViewControllerDidAppear:(id)a0;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initMinimizeSwitches;
- (BOOL)isMinimizeEntryArranged;
- (BOOL)isMinimizeEntryShowReddot;

@end
