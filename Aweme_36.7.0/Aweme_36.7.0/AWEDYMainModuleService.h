@interface AWEDYMainModuleService : AWEMainModuleService

- (void)markShareTokenAppLaunchForSchemaOrNotification;
- (void)getSchemeFromShareToken;
- (void)feedPlayStatusDidChangeForItem:(id)a0 isPlaying:(BOOL)a1 isFromFeed:(BOOL)a2 loop:(BOOL)a3;
- (void)transToMediumDetailWithParams:(id)a0;
- (id)campaignKPopupManager;
- (void)refreshNotificationContactButton;
- (BOOL)needDelayDid;

@end
