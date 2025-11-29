@class NSLock, NSString;

@interface AWEHPLandingLoginListener : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL hasSetup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)trySetup;
- (void)addNotificatons;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;
- (void)removeNotifications;

@end
