@protocol ACCEditServiceProtocol;

@interface AWEImageAlbumCoverPreprocessComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void).cxx_destruct;

@end
