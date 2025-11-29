@interface BDUGLuckyPublishTestDrillManager : NSObject

+ (void)didFinishLoadFeed;
+ (id)sharedInstance;

- (void)internalStart;
- (void)executeConfig:(id)a0;
- (void)simulateWithDelay:(id)a0;
- (void)triggerException:(id)a0;
- (BOOL)calculateNeedSimulate:(id)a0;
- (void)reportAppEvent:(id)a0;
- (void)triggerWithConfig:(id)a0;

@end
