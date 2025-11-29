@protocol ACCEditViewContainer, ACCSequenceEditServiceProtocol;

@interface ACCEditMediaViewComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void).cxx_destruct;

@end
