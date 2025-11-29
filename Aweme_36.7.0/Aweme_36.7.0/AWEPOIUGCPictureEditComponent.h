@class ACCStickerContainerView;
@protocol ACCStickerServiceProtocol;

@interface AWEPOIUGCPictureEditComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)p_trackImageAlbumDidShow;
- (void).cxx_destruct;

@end
