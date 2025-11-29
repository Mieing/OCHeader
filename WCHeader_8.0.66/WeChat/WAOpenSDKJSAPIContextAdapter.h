@class NSString, WAOpenSDKTransferPluginScheduler, WAContact, WAOpenSDKJSEventHandlerContext;
@protocol WAOpenSDKJSAPIContextAdapterDelegate;

@interface WAOpenSDKJSAPIContextAdapter : NSObject <WAJSEventHandlerContextDelegate>

@property (retain, nonatomic) WAContact *contact;
@property (nonatomic) long long apiFrom;
@property (weak, nonatomic) id<WAOpenSDKJSAPIContextAdapterDelegate> delegate;
@property (retain, nonatomic) WAOpenSDKTransferPluginScheduler *pluginScheduler;
@property (copy, nonatomic) NSString *transitiveData;
@property (retain, nonatomic) WAOpenSDKJSEventHandlerContext *openSDKContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWAContact:(id)a0 apiFrom:(long long)a1;
- (id)getAppId;
- (void)endWithResult:(id)a0 handler:(id)a1;
- (unsigned long long)getAppVersion;
- (unsigned int)getDebugModeType;
- (unsigned int)getAppType;
- (id)getWAContact;
- (void)sendResultBeforeEnd:(id)a0 resultType:(long long)a1 handler:(id)a2;
- (id)getParentViewController;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPageQuery;
- (unsigned long long)getEnvironmentType;
- (id)GetWebViewPluginByName:(id)a0;
- (id)GetWeAppPluginByName:(id)a0;
- (BOOL)isService;
- (id)getWxaExternalInfo;
- (BOOL)isParentViewControllerDidAppear:(id)a0;
- (id)sourceOpenSDKAppID;
- (id)getEventHandler:(id)a0;
- (void)printConsoleLog:(id)a0;
- (BOOL)isDebugAndVConsoleOpen;
- (BOOL)isIgnoreRemoteCheckDomain;
- (unsigned int)getCurTaskRunningState;
- (id)getCurPubResLogic;
- (id)_fullPagePath;
- (void).cxx_destruct;

@end
