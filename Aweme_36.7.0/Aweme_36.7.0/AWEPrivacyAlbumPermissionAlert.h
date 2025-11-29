@interface AWEPrivacyAlbumPermissionAlert : TSPKRuleEngineSubscriber

@property (nonatomic) double interval;

+ (id)sharedInstance;

- (id)hanleEvent:(id)a0;
- (BOOL)isAlbumAlertApi:(id)a0;
- (void)permissionCheckBeforeHandleEvent;
- (id)uniqueId;
- (void)showAlert;

@end
