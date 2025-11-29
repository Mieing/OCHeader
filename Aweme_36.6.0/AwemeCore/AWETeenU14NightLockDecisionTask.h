@class NSString, AWELockTimeUnPasswordViewController;

@interface AWETeenU14NightLockDecisionTask : NSObject <AWETeenAntiAddictionDecisionTaskProtocol>

@property (nonatomic) BOOL nightLockShowing;
@property (retain, nonatomic) AWELockTimeUnPasswordViewController *nightLockVC;
@property (nonatomic) unsigned long long originOrientationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)onGoing;
- (BOOL)triggerTask;
- (BOOL)willOnGoingWithinFiveMinutes;
- (BOOL)shouldShowNightLock;
- (void)showNightLockIfNeeded;
- (void)dismissNightLockIfNeeded;
- (void)restoreOriginOrientation;
- (void).cxx_destruct;
- (unsigned long long)taskID;

@end
