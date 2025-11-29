@class NSString;

@interface IESIMBasicCoreSDKInitService : HTSService <IESIMBasicCoreSDKInitService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupLogCallback;
- (id)imCoreTrackerServiceManager;
- (id)imCoreMonitorManager;
- (void)setupIMCloudCommandConversationCheck;
- (id)imCoreSDKSetupOptions:(id)a0;

@end
