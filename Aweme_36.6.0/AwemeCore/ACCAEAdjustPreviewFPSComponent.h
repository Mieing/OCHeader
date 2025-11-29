@class NSString, ACCAEAdjustPreviewFPSStrategyProvider;
@protocol ACCAdjustPreviewFPSServiceProtocol;

@interface ACCAEAdjustPreviewFPSComponent : ACCAdvanceEditComponent <AEKDiffChangeSubscriber, ACCPerfStrategyStateLifeCycleProtocol>

@property (weak, nonatomic) id<ACCAdjustPreviewFPSServiceProtocol> adjustPreviewFPSService;
@property (retain, nonatomic) ACCAEAdjustPreviewFPSStrategyProvider *strategyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)diffResults:(id)a0 fromSource:(unsigned long long)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentFirstFrameDidRender;
- (void)consumptionStateDidChanged:(unsigned long long)a0;
- (void).cxx_destruct;

@end
