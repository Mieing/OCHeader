@class NSString, WCFinderFeedContentVM;

@interface WCFinderUsedTaskMgr : MMUserService <IMinimizeTaskDelegateInterface, MMServiceProtocol>

@property (weak, nonatomic) WCFinderFeedContentVM *contentVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUsedTaskData:(id)a0;
- (void)onRecoverTaskData:(id)a0;
- (void)onEnterRecentUsedTask:(id)a0;
- (id)shareListViewControllerWithDataItem:(id)a0;
- (BOOL)videoPlayCompleted:(double)a0;
- (void)addOrUpdateUsedTaskData:(double)a0;
- (void)updateSnapShot:(id)a0;
- (id)taskDataWithType:(unsigned long long)a0;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (void).cxx_destruct;

@end
