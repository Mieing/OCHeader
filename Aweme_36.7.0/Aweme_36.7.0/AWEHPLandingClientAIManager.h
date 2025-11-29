@class NSLock;

@interface AWEHPLandingClientAIManager : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL hasSetup;

+ (id)sharedInstance;

- (void)p_addNotifications;
- (void)p_removeNotifications;
- (void)trySetup;
- (void)unsetup;
- (id)handlePitayaMessage:(id)a0;
- (void)p_onLandingConfigChangedNotification:(id)a0;
- (void)p_sendNotifyLandingConfigChangedEvent;
- (void)p_trackEventResultWithStatus:(long long)a0 error:(id)a1 message:(id)a2 extra:(id)a3;
- (id)handleGetLandingConfigWithMessage:(id)a0;
- (id)handleGetTabStructWithMessage:(id)a0;
- (id)handleGetCurrentLandingConfigWithMessage:(id)a0;
- (id)handleUpdateLandingResultWithMessage:(id)a0;
- (id)handleSendTrackWithMessage:(id)a0;
- (id)handleGetTrackQueueWithMessage:(id)a0;
- (id)p_generateTabStructWithNode:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
