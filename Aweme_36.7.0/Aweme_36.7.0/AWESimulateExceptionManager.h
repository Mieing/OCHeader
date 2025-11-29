@interface AWESimulateExceptionManager : NSObject

+ (id)shared;

- (void)internalStart;
- (void)executeConfig:(id)a0;
- (void)triggerException:(id)a0;
- (BOOL)calculateNeedSimulate:(id)a0;
- (void)reportAppEvent:(id)a0;
- (void)triggerWithConfig:(id)a0;
- (void)simulateWithDalay:(id)a0;
- (void)start;

@end
