@class NSString;

@interface AWESBCNotiModuleInterfaceImpl : HTSService <AWESBCNotiModuleInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (BOOL)isInnerPushShowing;

- (void)trackEvent:(id)a0 params:(id)a1;
- (BOOL)boolValueForKeyPath:(id)a0 defaultValue:(BOOL)a1;
- (void)dealNotificationMessageWithParams:(id)a0;
- (id)dictionaryForKeyPath:(id)a0 defaultValue:(id)a1;
- (BOOL)transferToURLString:(id)a0;
- (void)matchEmoticonForAttributedString:(id)a0 font:(id)a1;
- (void)pauseCurrentLive;
- (void)trackPushClickEventWithPayload:(id)a0;
- (BOOL)couldDisplayNotificationWithPayload:(id)a0;
- (id)trackEnterFrom;
- (double)fontSizeForBigFont:(double)a0;
- (void)sbc_requestImageWithURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableCustomizeDismissTimeInterval;
- (double)dismissTimeIntervalWithBusinessType:(id)a0;
- (void)requestWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)transferWithDeepinkToURLString:(id)a0 BusinessType:(id)a1;
- (void)awelogInfo:(id)a0;
- (void)changeToPortraitIfNeedWithCompletion:(id /* block */)a0;
- (BOOL)p_checkSceneValid;
- (BOOL)p_isChatPushShowing;
- (BOOL)p_isLivePushShowing;
- (BOOL)p_isShakePushShowing;
- (id)rootViewController;
- (double)screenWidth;
- (BOOL)isLogin;

@end
