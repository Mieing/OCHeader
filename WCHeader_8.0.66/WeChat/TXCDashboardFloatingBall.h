@class TXCDashboardWindow;

@interface TXCDashboardFloatingBall : UIButton

@property (nonatomic) struct CGPoint { double x; double y; } originPoint;
@property (retain, nonatomic) TXCDashboardWindow *containerWindow;
@property (copy, nonatomic) id /* block */ onClick;

+ (id)defaultFloatingBall;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)show:(BOOL)a0;
- (void)createContainerWindow;
- (void)handlePanGesture:(id)a0;
- (void)didClick;
- (void).cxx_destruct;

@end
