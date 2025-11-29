@class OrderedDictionary, NSString;

@interface BrandTimelineKeepHolderMgr : MMUserService <IMinimizeTaskDelegateInterface, MMServiceProtocol>

@property (retain, nonatomic) OrderedDictionary *cachedWebVCDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)minimizeTaskDataWithContact:(id)a0 msgWrap:(id)a1 andReaderWrap:(id)a2;
- (id)minimizeTaskDataWithContact:(id)a0 msgWrap:(id)a1 andReaderWrap:(id)a2 andTaskBizName:(id)a3;
- (id)minimizeTaskDataWithContact:(id)a0 recMsgData:(id)a1 accountData:(id)a2 appMsg:(id)a3;
- (BOOL)tryAddMinimizeTaskAndMinimize:(id)a0;
- (BOOL)tryUpdateMinimizeTaskSnapshotWithWebVC:(id)a0 setVCCache:(BOOL)a1;
- (BOOL)tryRemoveMinimizWithWebVC:(id)a0;
- (id)getBizNameFromWebVC:(id)a0;
- (BOOL)isTimelineBizName:(id)a0;
- (void)doMinimizeAnimationWithTaskData:(id)a0 animationView:(id)a1 fromViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)doMinimizeAnimationWithTaskData:(id)a0 animationView:(id)a1 fromViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completion:(id /* block */)a3;
- (BOOL)isViewControllerMinimized:(id)a0;
- (BOOL)isViewControllerCached:(id)a0;
- (void)onRecoverTaskData:(id)a0;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (void)onMinimizedTaskItemExposed:(id)a0;
- (void)safeSetWebVCToCache:(id)a0 forKey:(id)a1;
- (void)removeWebVCInCacheWithTaskKey:(id)a0;
- (BOOL)shouldRecoverWebVCInCache:(id)a0;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void).cxx_destruct;

@end
