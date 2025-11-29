@class NSString;

@interface IESIMGroupSPPlugin : NSObject <IESIMGroupSPPluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerInvokeContactListSchema:(id)a0;
- (id)createNotificationChocker;
- (id)p_getResponderTopMessageBaseVC;

@end
