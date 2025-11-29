@class NSString, UIViewController, MinimizeTaskData;

@interface MinimizeTaskBaseLogicController : NSObject <IMinimizeTaskDelegateInterface>

@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTask:(id)a0;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (void)onMinimizedTaskItemExposed:(id)a0;
- (id)onLeaveTaskBeforeEnterAnother:(id)a0;
- (void)onEnterRecentUsedTask:(id)a0;
- (void).cxx_destruct;

@end
