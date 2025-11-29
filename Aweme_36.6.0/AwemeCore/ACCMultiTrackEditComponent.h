@class ACCMultiTrackEditViewModel;
@protocol ACCEditServiceProtocol;

@interface ACCMultiTrackEditComponent : ACCFeatureComponent

@property (retain, nonatomic) ACCMultiTrackEditViewModel *multiTrackViewModel;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;

- (void)componentDidMount;
- (void)bindViewModel;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
