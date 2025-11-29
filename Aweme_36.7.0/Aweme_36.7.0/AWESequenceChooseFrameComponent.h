@class NSString, AWESequenceChooseFrameService, DUXPopover;
@protocol ACCSequenceEditServiceProtocol, ACCSequencePlayControlServiceProtocol;

@interface AWESequenceChooseFrameComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCSequenceEditServicePlayerSubscriber, ACCSequencePlayControlServiceSubscriber, ACCSequencePreviewChooseFrameDelegate>

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControlService;
@property (retain, nonatomic) AWESequenceChooseFrameService *chooseFrameService;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) DUXPopover *chooseFrameTooltip;
@property (nonatomic) double debounceDelay;
@property (copy, nonatomic) id /* block */ debounceBlock;
@property (nonatomic) BOOL isPreparingVideo;
@property (nonatomic) BOOL firstSelectedItemDisplayTriggered;
@property (nonatomic) double lastSelectTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBindingArray;
- (void)bindServices:(id)a0;
- (void)clickChooseFrameAtIndex:(long long)a0;
- (void)showChooseFrameTooltipOnView:(id)a0 atIndex:(long long)a1 scene:(id)a2;
- (void)dismissChooseFrameTooltip;
- (long long)getProjectVideoTimeWithIndex:(long long)a0;
- (void)trackClickSelectFrameWithIndex:(long long)a0;
- (BOOL)canChooseFrameTooltipShow:(id)a0 index:(long long)a1 scene:(id)a2;
- (void)trackShowSelectFrame;
- (void)debounce:(id /* block */)a0 afterDelay:(double)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
