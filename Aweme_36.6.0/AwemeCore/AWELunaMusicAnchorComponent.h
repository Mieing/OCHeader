@protocol ACCEditMusicServiceProtocol;

@interface AWELunaMusicAnchorComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;

- (void)componentDidMount;
- (void)bindViewModel;
- (void)shouldAddLunaMusicAnchor;
- (void).cxx_destruct;

@end
