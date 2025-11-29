@class WAJSEventHandler_BaseEvent, NSString;

@interface MBEventHandler_weappJSAPIBridgeASync : MBEventHandlerBaseAsync <WAJSEventHandlerContextDelegate>

@property (retain, nonatomic) WAJSEventHandler_BaseEvent *bridgeWeAppHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)weappJSApiClassName;
- (void)invoke:(id)a0;
- (id)jsapiContext;
- (BOOL)fixedPermission;
- (id)getInvokeFromAppid;
- (void)endWithResult:(id)a0 handler:(id)a1;
- (void)sendEventToInvokeEnv:(id)a0 dicParams:(id)a1;
- (id)getAppId;
- (unsigned long long)getAppVersion;
- (unsigned int)getDebugModeType;
- (id)getWAContact;
- (id)getParentViewController;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPageQuery;
- (unsigned long long)getEnvironmentType;
- (id)getWebViewPluginByName:(id)a0;
- (id)GetWeAppPluginByName:(id)a0;
- (BOOL)isDebugAndVConsoleOpen;
- (BOOL)isIgnoreRemoteCheckDomain;
- (BOOL)isService;
- (id)getEventHandler:(id)a0;
- (id)sourceOpenSDKAppID;
- (void).cxx_destruct;

@end
