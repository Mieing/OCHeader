@class NSString;

@interface AWEPublishPrivacySecurityManager : NSObject <ACCPublishPrivacySecurityManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;
+ (void)showDebugAlertWithTitle:(id)a0 error:(id)a1;
+ (id)sharedInstance;

- (id)aAWEStudioGlobalConfig;
- (void)resetDownloadPermissionWithPrivacyCheck:(id)a0;
- (void)resetDuetPermissionWithPrivacyCheck:(id)a0;
- (void)resetStoryPermissionWithPrivacyCheck:(id)a0;
- (void)checkDownloadPermissionWithoutVisibility:(id)a0;
- (void)checkDownloadPermissionIncludingVisibility:(id)a0;
- (void)checkDuetPermissionWithoutVisibility:(id)a0;
- (void)checkDuetPermissionIncludingVisibility:(id)a0;
- (void)checkStorySharePermissionWithoutVisibility:(id)a0;
- (void)checkStorySharePermissionIncludingVisibility:(id)a0;
- (void)resetAuthorityModelWithPrivacyCheck:(id)a0;
- (void)resetSyncModelWithPrivacyCheck:(id)a0;
- (id)userModel;

@end
