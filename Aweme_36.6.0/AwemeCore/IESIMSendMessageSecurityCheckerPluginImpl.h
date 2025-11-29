@class NSString;

@interface IESIMSendMessageSecurityCheckerPluginImpl : NSObject <IESIMSendMessageSecurityCheckerPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)p_getMessageBaseViewControllerWithNavigationController:(id)a0;
- (BOOL)compensativeCheckWithSessionID:(id)a0;
- (id)getEnterFromWithSendMessageModel:(id)a0;
- (id)getEnterMethodWithSendMessageModel:(id)a0;
- (id)p_getMessageBaseViewController;

@end
