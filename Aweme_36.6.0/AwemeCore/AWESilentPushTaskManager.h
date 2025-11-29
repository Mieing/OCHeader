@class NSString;

@interface AWESilentPushTaskManager : NSObject <AWESilentPushTaskManagerProtocol>

@property (nonatomic) BOOL hasEnterForeground;
@property (nonatomic) BOOL hasOpenApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)executeTasks:(id)a0;
- (id)p_silentPushConfigFromPayload;
- (id)p_silentPushConfig;
- (void)p_trackReceiveSilentPush;
- (BOOL)p_enable;
- (BOOL)p_enableForceExit;
- (long long)p_forceExitDelayTime;
- (void)p_uploadEvent;

@end
