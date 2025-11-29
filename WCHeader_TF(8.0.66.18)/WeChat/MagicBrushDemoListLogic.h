@class ZZFLEXAngel, UIView, UITableView;

@interface MagicBrushDemoListLogic : MagicBrushDemoLogic

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) ZZFLEXAngel *angel;
@property (weak, nonatomic) UIView *pendingView;

- (void)start;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onMainScriptInjected:(id)a0;
- (void).cxx_destruct;

@end
