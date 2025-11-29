@class HTSInteractionStreamAppData, IESLiveInteractiveSuperResolutionManager, NSString;
@protocol IESLiveKTVTuningService, IESLiveAnchorDynamicClarityPreferenceService, IESLiveInteractiveBigPartyStreamLayoutDelegate, IESLiveVideoChorusService, IESLiveInteractionLinkerService;

@interface IESLiveBigPartyStreamLayout : NSObject <IESLiveInteractiveBigPartyStreamLayout>

@property (nonatomic) BOOL seiFieldsSimplifiedUid;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (weak, nonatomic) id<IESLiveVideoChorusService> videoChorusService;
@property (weak, nonatomic) id<IESLiveKTVTuningService> tuningService;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (weak, nonatomic) id<IESLiveAnchorDynamicClarityPreferenceService> clarityServcie;
@property (weak, nonatomic) id<IESLiveAnchorDynamicClarityPreferenceService> clarityService;
@property (retain, nonatomic) IESLiveInteractiveSuperResolutionManager *srManager;
@property (weak, nonatomic) id<IESLiveInteractiveBigPartyStreamLayoutDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)regionsGeometricDataWithLayout:(id)a0;

- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (void)updateLayoutOfExtraPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (id)appDataWithUserService:(id)a0;
- (void)configVideoChorusLayout:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3 currentLayout:(id)a4;
- (void)configPortraitLayout:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3 currentLayout:(id)a4;
- (void)configLandscapeLayout:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3 currentLayout:(id)a4;
- (void)updateSuperResolutionWithRegions:(id)a0 sessions:(id)a1 uilayout:(long long)a2;
- (void)updateServerSuperResolutionWithRegions:(id)a0;
- (id)seiRegionFrom:(id)a0 session:(id)a1 userService:(id)a2;
- (void)adjustAnchorLayoutWhenOpenContainerCastProcessingWithStreamLayout:(id)a0 anchorLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)seiWithUserModel:(id)a0 session:(id)a1 userService:(id)a2 currentLayout:(id)a3;
- (BOOL)isFloatDynamicEnalrgeModeCurrentLayout:(id)a0;
- (void)dealEnlargeGuestPosition:(id)a0 currentLayout:(id)a1;
- (void)satisfyVisibleCheck:(id)a0 grids:(id)a1;
- (BOOL)isNeedSubOneLayoutStyleCurrentLayout:(id)a0;
- (void)disableAllSuperResolutionWithSessions:(id)a0 source:(id)a1;
- (void)disableSuperResolutionWithLinkmicID:(id)a0 roomID:(id)a1;
- (void)setupSRManagerWithDIContext:(id)a0 linkmicMonitor:(id)a1 isAnchor:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
