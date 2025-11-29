@class NLEInterface_OC, NSString, NPAIOutpaintingImpl_OC, NSObject;
@protocol OS_dispatch_queue, ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEAIImageExpandViewModel : ACCEditViewModel <ACCSequenceEditServicePlayerSubscriber, ACCAIExpandServiceProtocol>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NPAIOutpaintingImpl_OC *aiOutpaintingImpl;
@property (retain, nonatomic) NLEInterface_OC *captureFrameNLEInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isAIExpandLoading;
@property (nonatomic) BOOL aiExpandSignal;

+ (BOOL)aiExpandEnable:(id)a0;
+ (BOOL)checkCancelStateWithRuntime:(id)a0 completion:(id /* block */)a1;

- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (id)currentNLE;
- (void)updateBackupProjectsOrigImageExpandState;
- (BOOL)checkAIExpandHashtagState;
- (void)updateImageInfoInstanceByLivephotoModeChange;
- (id)trackParamsWith:(id)a0;
- (BOOL)backupToOriginImageWithError:(id *)a0;
- (id)errorMsgWithError:(id)a0 runtime:(id)a1;
- (void)expandCurrentImageWithRuntime:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)clearAllAIExpandInfos;
- (void)startAIImageExpandWithMaterialTransform:(id)a0 runtime:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)backupToOrigianlRepoImageInfoInstance;
- (void)addAIExpandHashtag;
- (void)removeAIExpandHashtag;
- (id)transformInfoFor:(id)a0;
- (id)outpaintingCachePath;
- (void)switchToAIExpandedRepoImageInfoInstance:(id)a0;
- (void)getOrigFrameWithCurrentTransform:(id)a0 runtime:(id)a1 completion:(id /* block */)a2;
- (double)calculateVideoSizeInCanvasSizeRatioWithMaterialTransform:(id)a0;
- (id)updateMaterialTransformWithScale:(double)a0 origTransform:(id)a1;
- (struct CGPoint { double x0; double x1; })transformToPresetCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
