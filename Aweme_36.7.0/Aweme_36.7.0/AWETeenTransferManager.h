@class NSString;

@interface AWETeenTransferManager : NSObject <AWERouterDelegate, AWERouterInterceptorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)teenModeCanHandleURL:(id)a0 transferType:(unsigned long long)a1;
+ (BOOL)teenModePushFeatureOn;
+ (void)transferToPushPageByMaskPortrait:(id)a0 coldLaunchAnimated:(BOOL)a1;
+ (id)teenPushMessageEnterFrom;
+ (void)forceLandToRootVCWithItemType:(long long)a0;
+ (void)transferToSchemaPageWithStickItemIds:(id)a0 enterMethod:(id)a1;
+ (void)transferToPushPageByMaskPortrait:(id)a0;
+ (id)sharedInstance;

- (void)routerDidFailTransferingWithURLString:(id)a0 errorMessage:(id)a1;
- (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)a0;
- (BOOL)teenModeCanHandleURL:(id)a0 transferType:(unsigned long long)a1;
- (id)p_settingsConfig;
- (void)transferToPushPageByMaskPortrait:(id)a0 coldLaunchAnimated:(BOOL)a1;
- (void)forceLandToRootVCWithItemType:(long long)a0;
- (void)transferToSchemaPageWithStickItemIds:(id)a0 enterMethod:(id)a1;
- (BOOL)p_isTeenModeSchemaURL:(id)a0;
- (id)p_getTransferString:(unsigned long long)a0;
- (void)p_didHandlePush;
- (id)p_whiteList;
- (id)p_routerInterceptorSettingsConfig;
- (id)p_interceptorWhiteList;
- (id)p_interceptorBlackList;
- (BOOL)p_addInterceptorForTeenRouter;
- (BOOL)p_isInWhiteListWithURLString:(id)a0;
- (BOOL)p_openInterceptorForTeenRouter;
- (BOOL)p_isInBlackListWithURLString:(id)a0;
- (BOOL)p_routerInterceptEnable;
- (id)p_interceptorRedirectList;
- (id)init;
- (void)dealloc;

@end
