@protocol ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCSequencePlayControlServiceProtocol;

@interface AWEIMAddCustomEmoticonThumbComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void).cxx_destruct;

@end
