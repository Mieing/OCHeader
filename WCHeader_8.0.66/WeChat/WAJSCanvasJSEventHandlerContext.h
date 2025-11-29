@class NSString;
@protocol WAJSCanvasJSEventHandlerContextDelegate;

@interface WAJSCanvasJSEventHandlerContext : NSObject <WAJSEventHandlerContextDelegate>

@property (copy, nonatomic) NSString *appId;
@property (weak, nonatomic) id<WAJSCanvasJSEventHandlerContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAppId;
- (void)endWithResult:(id)a0 handler:(id)a1;
- (id)getWAContact;
- (id)getParentViewController;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPageQuery;
- (unsigned long long)getEnvironmentType;
- (id)GetWebViewPluginByName:(id)a0;
- (id)sourceOpenSDKAppID;
- (id)getEventHandler:(id)a0;
- (unsigned long long)getAppVersion;
- (unsigned int)getDebugModeType;
- (unsigned int)getAppType;
- (id)GetWeAppPluginByName:(id)a0;
- (id)getSessionID;
- (void).cxx_destruct;

@end
