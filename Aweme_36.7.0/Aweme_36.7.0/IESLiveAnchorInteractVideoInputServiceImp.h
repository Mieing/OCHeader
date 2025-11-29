@class NSString, NSMutableDictionary;

@interface IESLiveAnchorInteractVideoInputServiceImp : IESLiveGeneralBaseService <IESLiveAnchorVideoInputService, IESLiveRevenueInteractAction, IESLiveSocialInteractAction, IESLiveCloudCollaborateAction>

@property (nonatomic) struct CGSize { double width; double height; } adaptedSize;
@property (nonatomic) BOOL needPreMix;
@property (retain, nonatomic) NSMutableDictionary *videoInputInfoMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)interactionModeStartedWithLayout:(id)a0;
- (void)interactionModeEndedWithLayout:(id)a0;
- (void)removeVideoInputWithContainerID:(id)a0;
- (void)updateVideoInputWithContainerID:(id)a0;
- (void)addVideoInputWithContainerID:(id)a0 inputView:(id)a1 zOrder:(int)a2 forLayer:(int)a3 extra:(id)a4;
- (void)endCloudCollaborate;
- (void)startCloudCollaborate;
- (id)takeShotForView:(id)a0;
- (void)invalidateAllTimer;
- (void)setupParams;
- (void)createAdaptedSizeChangedCallback;
- (void)adaptSizeChanged:(struct CGSize { double x0; double x1; })a0;
- (void)forEachVideoInputWithBlock:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getNormalizedFrameWithInputView:(id)a0;
- (void)addPreMixVideoInputWithContainerID:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inputView:(id)a2 zOrder:(int)a3 forLayer:(int)a4 extra:(id)a5;
- (void)addVideoInputWithContainerID:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zOrder:(int)a2 forLayer:(int)a3 inputView:(id)a4 extra:(id)a5;
- (void)updateVideoInputWithContainerID:(id)a0 preMix:(BOOL)a1;
- (void)removeVideoInputWithContainerID:(id)a0 preMix:(BOOL)a1;
- (void)updatePreMixVideoInputWithContainerID:(id)a0;
- (void)updateNormalVideoInputWithContainerID:(id)a0;
- (id)getInfoWithContainerId:(id)a0;
- (void)setupPixelBufferPoolWithInfo:(id)a0;
- (void)removePreMixVideoInputWithContainerID:(id)a0;
- (void)removeNormalVideoInputWithContainerID:(id)a0;
- (void)recordInfoAndSetupTimerWithContainerID:(id)a0 inputView:(id)a1 zOrder:(int)a2 forLayer:(int)a3 needPreMix:(BOOL)a4 extra:(id)a5;
- (void)reportAnchorFormatMonitor:(id)a0 category_1:(id)a1 category_2:(id)a2 errorMsg:(id)a3 extra:(id)a4;
- (void)invalidateInfoWithContainerID:(id)a0;
- (void)updateVideoInputWithInteractMode:(BOOL)a0;
- (id)setupOptimizePushVideoTimerWithInfo:(id)a0 needPreMix:(BOOL)a1;
- (id)setupPushVideoTimerWithInputView:(id)a0 forLayer:(int)a1 needPreMix:(BOOL)a2;
- (long long)getPluginPreferredFramesPerSecond;
- (struct __CVBuffer { } *)downgradeToCreatePixelBufferWithInfo:(id)a0;
- (void)releasePixelBufferPoolWithInfo:(id)a0;
- (void)trackDropFrameCountWithInfo:(id)a0;
- (void)releaseRGBColorSpaceWithInfo:(id)a0;
- (void).cxx_destruct;

@end
