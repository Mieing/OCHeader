@class NSString;

@interface AWEPublishPrivacyService : HTSService <AWEPublishPrivacyService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configPrivacyModelWithPublishViewModel:(id)a0;
- (void)configPrivacyTypeForStoryPublishButton:(id)a0 channel:(id)a1;
- (long long)defaultPrivacyPermissionTypeForStory:(BOOL)a0;
- (void)publishConfigForPrivacyAndAuthority:(id)a0;
- (void)retryStoryWithTask:(id)a0;
- (BOOL)hasEditWithCurrentSnap:(id)a0 snap:(id)a1;
- (long long)checkPrivacyPermissionType:(id)a0;
- (void)presentVisibilityPanelWithPublishViewModel:(id)a0 preferredTheme:(long long)a1 scene:(long long)a2 enterFrom:(id)a3 dismissBlock:(id /* block */)a4;
- (void)presentVisibilityPanelForStory25InMainWithPublishViewModel:(id)a0 preferredTheme:(long long)a1 enterFrom:(id)a2 dismissBlock:(id /* block */)a3;
- (id)privacyStatusWithPublishModel:(id)a0;
- (void)trackSelectPrivacyEventWithPublishViewModel:(id)a0 params:(id)a1;
- (void)trackShowVisibilityPanelEventWithPublishViewModel:(id)a0 scene:(long long)a1 params:(id)a2;
- (void)initPrivacyTypeInStoryCamera:(id)a0;
- (void)initPrivacyTypeInMainCamera:(id)a0;
- (BOOL)resetPrivacyTypeForStoryInMainCameraIfNeeded:(id)a0;
- (void)initPrivacyTypeForStoryInMainCamera:(id)a0;
- (void)configDefaultPrivacyTypeForStory:(id)a0 channel:(id)a1;
- (void)configPrivacyTypeForStory25:(id)a0 channel:(id)a1;
- (void)didSelectPrivacyForStory25InMainWithPublishViewModel:(id)a0 paramsModel:(id)a1 enterFrom:(id)a2;
- (void)trackSelectPrivacyEventWithPublishViewModel:(id)a0 toPrivacyPermissionType:(long long)a1 params:(id)a2;

@end
