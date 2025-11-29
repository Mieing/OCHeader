@class NSString;

@interface AWELaunchTaskSecurity : NSObject <AWECnryphoctDelegate, AWENetworkMessage, HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSecurityConfig;
+ (void)execute;
+ (id)sharedInstance;

- (id)secUserId;
- (id)installId;
- (void)executeTask;
- (void)didReceiveApiResponse:(id)a0 URL:(id)a1;
- (void)handleForceCrash:(unsigned long long)a0;
- (void)_showAlertViewForRebuild;
- (id)deviceId;
- (id)userId;
- (id)init;
- (id)sessionId;
- (void)dealloc;
- (id)appId;

@end
