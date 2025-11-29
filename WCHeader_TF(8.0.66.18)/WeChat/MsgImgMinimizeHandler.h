@class UIViewController;

@interface MsgImgMinimizeHandler : MinimizeTaskBaseLogicController

@property (weak, nonatomic) UIViewController *sourceViewController;

- (id)initWithTask:(id)a0;
- (id)initWithTask:(id)a0 sourceViewController:(id)a1;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)a0;
- (void).cxx_destruct;

@end
