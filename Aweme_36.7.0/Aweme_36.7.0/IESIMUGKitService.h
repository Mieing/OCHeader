@class NSString;

@interface IESIMUGKitService : HTSService <IESIMUGKitService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (void)entryWithToken:(id)a0 bindEntity:(id)a1;
- (void)leaveForToken:(id)a0;
- (id)tokenWithCertID:(id)a0;
- (BOOL)isPushNotificationEnabled;
- (void)openSystemAuthorizationDirectlyIfEnabled:(id /* block */)a0;
- (void)requestAuthorizationWithShowReason:(id)a0 selectionType:(id)a1;
- (BOOL)isSystemNotificationPermissionRequestDelayed;
- (void)getIsPushNotificationEnabledWithCompletionHandler:(id /* block */)a0;
- (void)requestShowPushGuideAlertOnScene:(id)a0 pitayaParams:(id)a1 completion:(id /* block */)a2;
- (void)unwrapShortURLString:(id)a0 completion:(id /* block */)a1;
- (void)reportPushGuideEventWithParams:(id)a0;
- (void)jumpToSystemNotificationSettingsWithParam:(id)a0 completion:(id /* block */)a1;
- (void)postLocalPushWithNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)injectSceneDesktopChannelGuideStrategy:(id)a0;
- (void)injectEvadeStrategy:(id)a0;
- (double)currentServerTimeStamp;
- (id)imCampaignManager;
- (void)trackPushClickEventWithPayload:(id)a0;
- (void)reportTask:(id)a0 uniqueID:(id)a1 extra:(id)a2 completion:(id /* block */)a3;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)handleSendMessageTrackDataWith:(id)a0 withPatams:(id)a1;
- (id)getAWEUGSceneDesktopChannelGuideTypeMessageTab;
- (void)siriSuggestServiceDonateUserActivity;
- (BOOL)isUGNoticeOptimizeTypeWords;
- (id)tokenWithCertIDType:(unsigned long long)a0;

@end
