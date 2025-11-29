@class NSString, AWELockTimeUnPasswordViewController;

@interface AWETeenU14TimeLockDecisionTask : NSObject <AWETeenAntiAddictionDecisionTaskProtocol>

@property (nonatomic) BOOL timeLockShowing;
@property (nonatomic) double lastUseTS;
@property (retain, nonatomic) AWELockTimeUnPasswordViewController *timeLockVC;
@property (nonatomic) unsigned long long originOrientationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)onGoing;
- (BOOL)triggerTask;
- (BOOL)willOnGoingWithinFiveMinutes;
- (void)restoreOriginOrientation;
- (unsigned long long)todaysTimeLockLimit;
- (void)clearLockTimeIfNeeded;
- (void)showTimeLockIfNeeded;
- (void)dismissTimeLockIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)taskID;
- (void)dealloc;

@end
