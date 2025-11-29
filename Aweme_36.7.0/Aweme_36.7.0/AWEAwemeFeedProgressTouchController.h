@interface AWEAwemeFeedProgressTouchController : AWEAwemeNewDetailBaseController

@property (nonatomic) BOOL allowSetBottomBar;
@property (nonatomic) BOOL shouldShowBottomBar;
@property (nonatomic) BOOL shouldShowBottomBarByCoordinator;
@property (nonatomic) BOOL shouldShowBottomBarByCellCoordinator;

- (void)progressTouchBegin:(id)a0;
- (void)progressTouchEnd:(id)a0;
- (BOOL)shouldResponseBottomBarHidden:(id)a0;
- (BOOL)shouldShowBottomBarWhenTouchEnd;
- (id)init;
- (void)viewDidLoad;

@end
