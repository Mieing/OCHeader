@class NSString, ACCEditHDRViewModel;
@protocol ACCEditClipServiceProtocol, ACCSequenceEditServiceProtocol, ACCCTRServiceProtocol, ACCEditViewContainer, ACCEditClipV1ServiceProtocol, ACCEditServiceProtocol;

@interface ACCEditHDRComponent : ACCFeatureComponent <ACCSequenceEditServicePlayerSubscriber, ACCEditSessionLifeCircleEvent, ACCDraftResourceRecoverProtocol>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) ACCEditHDRViewModel *viewModel;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditClipServiceProtocol> clipService;
@property (weak, nonatomic) id<ACCEditClipV1ServiceProtocol> clipV1Service;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (nonatomic) BOOL useOneKeyHDR;
@property (nonatomic) BOOL detectionSucceed;
@property (nonatomic) BOOL originalDraftResourceDownloaded;
@property (nonatomic) BOOL originalDraftHDREnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelsToDownloadForPublishViewModel:(id)a0;

- (void)componentWillAppear;
- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (void)sensorialRenderWithEditService:(id)a0;
- (void)firstRenderWithEditService:(id)a0;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)p_bindViewModel;
- (void)bindServices:(id)a0;
- (BOOL)updateBarItemView;
- (id)p_barItem;
- (BOOL)p_shouldUseOneKeyHDR;
- (void)p_restoreHDRNetState;
- (void)p_setHDRNetEnabled:(BOOL)a0;
- (void)clearHDR;
- (void)p_editAndPublishViewVideoHDRButtonClicked:(id)a0;
- (void)p_trackHDRNet:(BOOL)a0;
- (BOOL)p_shouldDisableDenoise;
- (id)p_videoEnhanceButton;
- (void)handleAlgorithmCheckFinishedWithScene:(int)a0 maxCacheSize:(long long)a1;
- (void)handleHDRStatus:(BOOL)a0 useOneKey:(BOOL)a1 useOpt:(BOOL)a2 scene:(int)a3 modelName:(id)a4 useDenoise:(BOOL)a5 asfMode:(long long)a6 hdrMode:(long long)a7;
- (void).cxx_destruct;
- (id)containerViewController;
- (void)dealloc;

@end
