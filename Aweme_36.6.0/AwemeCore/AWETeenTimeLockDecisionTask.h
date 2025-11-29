@class NSString, UIViewController;
@protocol AWETeenProtectionLockViewControllerProtocol;

@interface AWETeenTimeLockDecisionTask : NSObject <AWETeenAntiAddictionDecisionTaskProtocol>

@property (nonatomic) BOOL timeLockShowing;
@property (nonatomic) BOOL timeLockNeedToShow;
@property (retain, nonatomic) UIViewController<AWETeenProtectionLockViewControllerProtocol> *timeLockVC;
@property (nonatomic) unsigned long long originOrientationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEChildModeModuleServiceCommonAdapterClass;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (id)aAWEChildModeModuleServiceCommonAdapter;
- (BOOL)onGoing;
- (BOOL)triggerTask;
- (BOOL)willOnGoingWithinFiveMinutes;
- (void)restoreOriginOrientation;
- (unsigned long long)todaysTimeLockLimit;
- (void)clearLockTimeIfNeeded;
- (void)showTimeLockIfNeeded;
- (void)dismissTimeLockIfNeeded;
- (void).cxx_destruct;
- (unsigned long long)taskID;

@end
