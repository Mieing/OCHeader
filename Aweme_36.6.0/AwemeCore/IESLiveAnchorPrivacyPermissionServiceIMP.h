@class NSString, NSHashTable;

@interface IESLiveAnchorPrivacyPermissionServiceIMP : IESLiveGeneralBaseService <IESLiveAnchorPrivacyPermissionService, IESLiveAnchorPrivacyRegisterService>

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
- (BOOL)needIgnoreProcessGeneralAudioCaptureByPauseType:(unsigned long long)a0;
- (BOOL)needIgnoreProcessGeneralAudioCaptureByResumeType:(long long)a0;
- (BOOL)needIgnoreProcessGeneralVideoCaptureByPauseType:(unsigned long long)a0;
- (BOOL)needIgnoreProcessGeneralVideoCaptureByResumeType:(long long)a0;
- (void)registerPrivacyPermissionHandler:(id)a0;
- (void)removePrivacyPermissionHandler:(id)a0;
- (id)getPauseTypeStringValue:(unsigned long long)a0;
- (id)getResumeTypeStringValue:(long long)a0;
- (void).cxx_destruct;

@end
