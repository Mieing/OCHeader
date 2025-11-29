@class BDPNovelControllerContext, NSString;

@interface BDPNovelContainerController : UIViewController <BDPNovelContainerDelegate>

@property (weak, nonatomic) BDPNovelControllerContext *context;
@property (nonatomic) long long readDirection;
@property (nonatomic) BOOL forceBlockViewChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)pageTurnMode;
- (void)flipPageInHotZoneWithDirection:(long long)a0 error:(id *)a1;
- (BOOL)isFreeWordReachEnd;
- (id)getCurrentContents;
- (void)reformPositionFromBottom;
- (void)forceBlockScroll:(BOOL)a0 vc:(id)a1;
- (void)triggerRefreshContainer;
- (void)updateNewViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)recycleVCs;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
