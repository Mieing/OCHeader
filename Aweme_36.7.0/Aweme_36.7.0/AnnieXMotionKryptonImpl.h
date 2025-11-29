@class NSString;

@interface AnnieXMotionKryptonImpl : NSObject <AnnieXMotionKryptonService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPause;
- (void)onBootstrap:(id)a0;
- (void)onDestroy;
- (void)onShow;
- (void)onHide;
- (id)init;
- (void)onResume;

@end
