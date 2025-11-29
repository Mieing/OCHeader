@class RACDisposable;

@interface IESGCPAutorotateViewController : UIViewController

@property (nonatomic) BOOL canRotate;
@property (retain, nonatomic) RACDisposable *deviceRotateDisposable;
@property (nonatomic) long long orientation;
@property (nonatomic) long long originOrientation;

- (void)deviceOrientationDidChange;
- (void)forceUpdateToOrientation:(long long)a0;
- (void)addDeviceOrientationChangeNoti;
- (void)setupConstraintsWithOrientation:(long long)a0;
- (id)initWithCanRotate:(BOOL)a0 diContext:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (void)viewDidLoad;
- (void)dealloc;

@end
