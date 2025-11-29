@class NSString, IESEffectModel, ACCSideslipCanvasStyleUpdater;
@protocol ACCSideslipPropPanelDownloadService, ACCSideslipPropPanelService, ACCSideslipPropPanelEditorEventDispatchServiceProtocol, ACCSequenceEditServiceProtocol, ACCEditToolMusicEffectProtocol, ACCEditSpecialEffectServiceProtocol, ACCEditServiceProtocol;

@interface ACCSideslipPanelAIGCApplyHandler : ACCSideslipPanelBaseApplyHandler

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditToolMusicEffectProtocol> effectProtocol;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelDownloadService> sideslipPropDownloadService;
@property (weak, nonatomic) id<ACCSideslipPropPanelEditorEventDispatchServiceProtocol> panelEditorEventDispatchService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (retain, nonatomic) ACCSideslipCanvasStyleUpdater *canvasStyleUpdater;
@property (nonatomic) long long appliedEffectIndex;
@property (retain, nonatomic) IESEffectModel *appliedEffect;
@property (nonatomic) long long currentIndex;
@property (readonly, copy, nonatomic) NSString *appliedEffectId;

- (id)initWithServiceContainer:(id)a0 repository:(id)a1;
- (BOOL)handleApplyWithEffectRawModel:(id)a0;
- (BOOL)handleRemoveAppliedEffectWithScene:(id)a0;
- (void)addNLECanvasStyleIfNeeded;
- (BOOL)handleApplyEffect:(id)a0;
- (void)removeAppliedEffect:(BOOL)a0 currentEffect:(id)a1;
- (void)dispatchDidRemoveEffectEvent;
- (void)setEffect:(id)a0 withStartTime:(double)a1 andStopTime:(double)a2 renderCacheDict:(id)a3 effectCachePath:(id)a4 completion:(id /* block */)a5;
- (void)clearEffectCachePathIfNeededWithEffect:(id)a0;
- (void)replaceWithEffectRawModel:(id)a0 resources:(id)a1;
- (void).cxx_destruct;

@end
