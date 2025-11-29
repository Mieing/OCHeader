@class NSString, NSHashTable;

@interface IESLiveGuidePrivacyPermissionServiceIMP : IESLiveGeneralBaseService <IESLiveGuidePrivacyPermissionService, IESLiveGuidePrivacyRegisterService>

@property (retain, nonatomic) NSHashTable *permissionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)registerPrivacyPermissionHandler:(id)a0;
- (void)removePrivacyPermissionHandler:(id)a0;
- (BOOL)needIgnoreProcessGeneralVideoCaptureByResumeScene:(unsigned long long)a0;
- (BOOL)needIgnoreProcessGeneralVideoCaptureByPauseScene:(unsigned long long)a0;
- (id)getPauseSceneStringValue:(unsigned long long)a0;
- (id)getResumeSceneStringValue:(unsigned long long)a0;
- (void).cxx_destruct;

@end
