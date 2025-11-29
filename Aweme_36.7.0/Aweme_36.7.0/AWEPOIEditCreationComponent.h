@protocol ACCEditViewContainer, ACCSequenceEditServiceProtocol;

@interface AWEPOIEditCreationComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;

- (void)componentDidMount;
- (id)poiEditModel;
- (void).cxx_destruct;

@end
