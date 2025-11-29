@class NSString, IESLiveOpenPlatformCrashRemedyServiceImpl, IESLiveOpenPlatformDebugService, IESLiveOpenPlatformViolationServiceImpl, IESLiveOpenPlatformExplainCardServiceImpl, IESLiveGameOpenPlatformActivityService, IESLiveGameOpenPlatformInteractControlManager, IESLiveXPlayAppManager;

@interface IESLiveGameOpenPlatformCommonFragment : IESLiveRoomComponent <IESLiveSocialInteractPreLoadExAction>

@property (retain, nonatomic) IESLiveOpenPlatformDebugService *debugService;
@property (retain, nonatomic) IESLiveOpenPlatformViolationServiceImpl *violationService;
@property (retain, nonatomic) IESLiveOpenPlatformCrashRemedyServiceImpl *crashRemedyService;
@property (retain, nonatomic) IESLiveGameOpenPlatformInteractControlManager *interactControlService;
@property (retain, nonatomic) IESLiveOpenPlatformExplainCardServiceImpl *explainCardService;
@property (retain, nonatomic) IESLiveXPlayAppManager *xplayService;
@property (retain, nonatomic) IESLiveGameOpenPlatformActivityService *activityService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)interactionModeStartedWithLayout:(id)a0;
- (void).cxx_destruct;

@end
