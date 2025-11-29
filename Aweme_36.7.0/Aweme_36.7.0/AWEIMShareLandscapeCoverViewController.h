@class AWEIMShareLandscapeCoverView, UIViewController, UIView;

@interface AWEIMShareLandscapeCoverViewController : UIViewController

@property (retain, nonatomic) UIViewController *subVC;
@property (weak, nonatomic) UIViewController *targetVC;
@property (retain, nonatomic) AWEIMShareLandscapeCoverView *leftCoverView;
@property (retain, nonatomic) UIView *rightView;

- (id)initWithSubVC:(id)a0 andTargetVC:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
