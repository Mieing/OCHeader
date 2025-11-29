@class NSString, UIViewController;
@protocol AWETeenProtectionLockViewControllerProtocol;

@interface AWETeenNightLockDecisionTask : NSObject <AWEDigitalWellbeingMessage, AWETeenAntiAddictionDecisionTaskProtocol>

@property (nonatomic) BOOL nightLockShowing;
@property (nonatomic) BOOL nightLockNeedToShow;
@property (nonatomic) double lastUnlockTS;
@property (retain, nonatomic) UIViewController<AWETeenProtectionLockViewControllerProtocol> *nightLockVC;
@property (nonatomic) unsigned long long originOrientationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (BOOL)onGoing;
- (BOOL)triggerTask;
- (BOOL)willOnGoingWithinFiveMinutes;
- (void)readLastUnlockTS;
- (void)clearNightLockData;
- (BOOL)shouldShowNightLock;
- (void)showNightLockIfNeeded;
- (void)dismissNightLockIfNeeded;
- (void)restoreOriginOrientation;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)taskID;
- (void)dealloc;

@end
