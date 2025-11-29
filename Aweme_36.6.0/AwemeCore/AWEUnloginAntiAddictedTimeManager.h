@class NSString;

@interface AWEUnloginAntiAddictedTimeManager : NSObject <HTSAccountMessage, AWEUserMessage>

@property (nonatomic) double unloginTotalUseTime;
@property (nonatomic) double unloginContinuousUseTime;
@property (nonatomic) double lastUnloginStartTimeStamp;
@property (nonatomic) double lastShowLoginGuideTimeStamp;
@property (nonatomic) BOOL isLaunch;
@property (nonatomic) BOOL isDuringLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)willStartLogin;
- (void)didCancelLogin;
- (void)didLoginFailed;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)startUsingApp;
- (void)stopUsingApp;
- (void)addUsingTime;
- (void)willRequestThirdPartyAuthorizationForLoginAtPlatform:(unsigned long long)a0;
- (void)willLoginAtPlatform:(unsigned long long)a0;
- (BOOL)shouldCheckUnloginAntiAddicted;
- (BOOL)checkIfNeedTransferToLogin;
- (void)transferToLogin:(BOOL)a0;
- (BOOL)isShowingLoginWindow;
- (BOOL)shouldTransferLoginWithTotalTime:(long long)a0 continuousUseTime:(long long)a1;
- (id)init;
- (void)dealloc;

@end
