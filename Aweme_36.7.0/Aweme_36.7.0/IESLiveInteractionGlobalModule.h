@class IESLiveVIPGlobalServiceImpl, IESLiveLinkmicPreloadGlobalServiceImpl, IESLiveInteractGlobalMessageServiceImpl, NSString, IESLiveInteractionOpenLiveServiceImpl, IESLiveLynxLocalCacheServiceImpl, IESLiveLinkmicTrackerInterceptorImpl, IESLiveLinkmicRoomEnterTracker;

@interface IESLiveInteractionGlobalModule : IESLiveModule <IESLiveInteractionGlobalModule>

@property (retain, nonatomic) IESLiveLinkmicRoomEnterTracker *roomEnterTracker;
@property (retain, nonatomic) IESLiveLinkmicPreloadGlobalServiceImpl *preloadGlobalImpl;
@property (retain, nonatomic) IESLiveLinkmicTrackerInterceptorImpl *trackerInterceptorImpl;
@property (retain, nonatomic) IESLiveVIPGlobalServiceImpl *vipGlobalServiceImpl;
@property (retain, nonatomic) IESLiveLynxLocalCacheServiceImpl *localCacheServiceImpl;
@property (retain, nonatomic) IESLiveInteractionOpenLiveServiceImpl *openLiveServiceImpl;
@property (retain, nonatomic) IESLiveInteractGlobalMessageServiceImpl *globalMessageServiceImpl;
@property (nonatomic) double lastUploadAlogTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)interactiveMonitorService;
- (id)chatGroupService;
- (id)fastMatchService;
- (id)roomEnterTrackerService;
- (id)preloadGlobalService;
- (void)pushToSoloKTVWithSource:(id)a0 schemaParams:(id)a1 room:(id)a2;
- (void)openSoloKTVMySungViewWithSchemeParams:(id)a0;
- (void)requestAddSongWithMusicModel:(id)a0 enterFrom:(id)a1 room:(id)a2;
- (id)soloKTVRecordService;
- (id)interactTrackerInterceptor;
- (id)vipGlobalService;
- (id)localCacheService;
- (void)removeBannerSection;
- (Class)classForInteractiveQuickStartService;
- (id)openLiveService;
- (id)globalMessageService;
- (id)soloKTVEnterService;
- (void).cxx_destruct;
- (id)init;

@end
