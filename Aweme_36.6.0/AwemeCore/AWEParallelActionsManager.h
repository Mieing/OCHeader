@class NSTimer, NSArray, UIControl;

@interface AWEParallelActionsManager : NSObject

@property (nonatomic) BOOL lockStatus;
@property (retain, nonatomic) NSTimer *autoUnlockTimer;
@property (retain, nonatomic) UIControl *lockedControl;
@property (retain, nonatomic) NSArray *exceptionClasses;

+ (id)sharedManager;

- (void)unlockImmediately;
- (void)unlockAfterDelay:(double)a0;
- (BOOL)isCurrentLockingControl:(id)a0;
- (void)unlock;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)lock:(id)a0;
- (BOOL)locked;
- (BOOL)tryLock;

@end
