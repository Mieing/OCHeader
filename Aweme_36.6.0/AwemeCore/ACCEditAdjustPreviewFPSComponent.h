@class NSString, ACCAdjustPreviewFPSServiceImpl, ACCEditPageAdjustPreviewFPSStrategyProvider;
@protocol ACCSequenceEditServiceProtocol, ACCAdvanceEditServiceProtocol, ACCEditClipV1ServiceProtocol, ACCEditServiceProtocol;

@interface ACCEditAdjustPreviewFPSComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCSequenceEditServicePlayerSubscriber, ACCPerfStrategyStateLifeCycleProtocol>

@property (retain, nonatomic) ACCAdjustPreviewFPSServiceImpl *serviceImpl;
@property (retain, nonatomic) ACCEditPageAdjustPreviewFPSStrategyProvider *strategyProvider;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditClipV1ServiceProtocol> clipService;
@property (weak, nonatomic) id<ACCAdvanceEditServiceProtocol> advanceEditService;
@property (nonatomic) long long defaultFPS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sequenceEditService:(id)a0 didTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (void)sensorialRenderWithEditService:(id)a0;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)consumptionStateDidChanged:(unsigned long long)a0;
- (long long)composerFPS;
- (void).cxx_destruct;

@end
