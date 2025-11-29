@class OrderedDictionary, NSString, NSRecursiveLock;

@interface WeNoteMinimizeKeeperMgr : MMUserService <IFavoritesExt, IMsgExt, WCFacadeExt, MMServiceProtocol, IMinimizeTaskDelegateInterface>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) OrderedDictionary *vcDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewControllerForBizTaskKey:(id)a0;
- (void)minimizeViewController:(id)a0 ofTaskData:(id)a1;
- (void)updateMinimizedViewController:(id)a0 ofTaskData:(id)a1;
- (void)tryRemoveMinimizeTaskForBizKey:(id)a0;
- (void)tryRemoveRecentHistoryForBizKey:(id)a0;
- (id)minimizePendingTaskContextWithTaskBizKey:(id)a0 generateType:(unsigned long long)a1 weNoteVC:(id)a2;
- (void)onRecoverTaskData:(id)a0;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)presentMinimizeViewController:(id)a0 key:(id)a1 openContext:(id)a2;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)a0;
- (void)onRemoveMinimizedTask:(id)a0;
- (BOOL)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)a0;
- (void)onEnterRecentUsedTask:(id)a0;
- (BOOL)onDirectToNoteViewControllerWithMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2 bFromUsedTask:(BOOL)a3;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onMemoryWarning:(id)a0;
- (void)OnDelFavoritesItems:(id)a0;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)onDataChangedWithAdded:(id)a0 andChanged:(id)a1 andDeleted:(id)a2;
- (void)onHomepageUpdate:(long long)a0 withAdded:(id)a1 andChanged:(id)a2 andDeleted:(id)a3 andTip:(id)a4;
- (void).cxx_destruct;

@end
