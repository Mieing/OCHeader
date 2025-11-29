@class NSString;

@interface LVStarHandler : MinimizeTaskBaseLogicController <IMinimizeTaskDelegateInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markStar:(id)a0 starContext:(id)a1 snapshotInfo:(id)a2 commentScene:(long long)a3 generateType:(unsigned long long)a4 fromViewController:(id)a5;
- (BOOL)hasStar:(id)a0 commentScene:(long long)a1;
- (void)removeStar:(id)a0 commentScene:(long long)a1;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (void)onMinimizedTaskItemExposed:(id)a0;
- (BOOL)canDirectLaunchInMainFrame:(id)a0;

@end
