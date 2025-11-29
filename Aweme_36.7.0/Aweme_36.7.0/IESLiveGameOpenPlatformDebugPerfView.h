@class UILabel, UIViewController, UIView;

@interface IESLiveGameOpenPlatformDebugPerfView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *perfLabel;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL isShowing;

- (void)reloadPerfView:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
