@class NSString;

@interface AWETheaterUGController : NSObject <AWEListControllerLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerWillDisappear:(BOOL)a0 isBeingDismissed:(BOOL)a1 isMovingFromParentViewController:(BOOL)a2;

@end
