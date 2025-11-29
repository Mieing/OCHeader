@class BDPUniqueID;

@interface BDPGameCenterMaskController : UIViewController

@property (nonatomic) BOOL isNotFirst;
@property (weak, nonatomic) BDPUniqueID *uniqueID;

- (void)reopenGameIfNeed;
- (void)reopenGame;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithUniqueID:(id)a0;
- (void)onTap:(id)a0;

@end
