@class NSString;

@interface AFDLikePrivacySettingsAlertManager : NSObject <AFDLikePrivacySettingsAlertManagerProtocol>

@property (nonatomic) BOOL isLikePrivacySettingsAlertShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showLikePrivacySettingsAlertWithEnterFrom:(id)a0 completion:(id /* block */)a1;
- (long long)currentLikeInfoPermissionType;

@end
