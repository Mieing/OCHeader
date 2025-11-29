@class NSArray, IESEffectModel, NSString;

@interface IESLiveCameraMovementHandler : NSObject <IESLiveGuideOpenLiveAdditionalEvent, IESLiveAnchorEffectBaseEvent, IESLiveCameraMovementService>

@property (retain, nonatomic) IESEffectModel *currentPassiveUseEffect;
@property (retain, nonatomic) IESEffectModel *currentActiveUseEffect;
@property (retain, nonatomic) NSArray *totalEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendCreateAnchorBusinessParams:(id)a0 completion:(id /* block */)a1;
- (void)onEffectRenderWithEffect:(id)a0 item:(id)a1 extra:(id)a2;
- (void)onEffectRemoveWithEffect:(id)a0 item:(id)a1 extra:(id)a2;
- (id)initWithDIContext:(id)a0 guideParams:(id)a1;
- (void)applyCameraMovementWith:(id)a0;
- (void)removeCameraMovementWith:(id)a0;
- (void)prepareResources:(id /* block */)a0;
- (void)applyWith:(id)a0;
- (void)applyEffectPassive:(id)a0;
- (void).cxx_destruct;

@end
