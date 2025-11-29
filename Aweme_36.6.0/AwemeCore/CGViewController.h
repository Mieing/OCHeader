@class CGOrientationManager, UIView;
@protocol CGCloudPlayer, CGItem;

@interface CGViewController : UIViewController

@property (weak, nonatomic) id<CGItem> item;
@property (weak, nonatomic) id<CGCloudPlayer> cloudPlayer;
@property (retain, nonatomic) UIView *playView;
@property (retain, nonatomic) CGOrientationManager *orientationManager;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (id)displayView;
- (void)rotateOrientationTo:(long long)a0;
- (void)playViewAddMatchRoomView:(id)a0;
- (void)playViewRemoveMatchRoomView;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)currentInterfaceOrientation;
- (void)viewWillAppear:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)viewDidAppear:(BOOL)a0;

@end
