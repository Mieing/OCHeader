@interface IESGCPDetailNavigationController : UINavigationController

@property (nonatomic) BOOL isInLive;
@property (nonatomic) BOOL isOpenAsFullScreen;

- (BOOL)awe_shouldBypassPresentationHook;
- (id)initWithRootViewController:(id)a0 isInLive:(BOOL)a1 isOpenAsFullScreen:(BOOL)a2;
- (void)viewWillDisappear:(BOOL)a0;

@end
