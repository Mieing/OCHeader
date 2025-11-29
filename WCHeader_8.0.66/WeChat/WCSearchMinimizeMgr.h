@class NSRecursiveLock, NSMutableDictionary, NSString, OrderedDictionary;

@interface WCSearchMinimizeMgr : MMUserService <IMinimizeTaskDelegateInterface, MMServiceProtocol>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) OrderedDictionary *seachVcDic;
@property (retain, nonatomic) NSMutableDictionary *searchVcKeepAliveCheckDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addMinimizeTaskWithNSDictionary:(id)a0 fromVC:(id)a1 animationViewImage:(id)a2 fromViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)tryAddMinimizeTask:(id)a0;
- (void)removeMinimizeTaskWithNSDictionary:(id)a0;
- (id)generateOneTaskDataWithNSDictionary:(id)a0;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (id)getMinimizeViewControllerWithKey:(id)a0;
- (void)addMinimizeViewController:(id)a0 forKey:(id)a1;
- (void)removeMinimizeViewControllerWithKey:(id)a0;
- (void)makeSureReleaseKeepAliveVC:(id)a0;
- (long long)keepAliveMaxCount;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onMemoryWarning:(id)a0;
- (void).cxx_destruct;

@end
