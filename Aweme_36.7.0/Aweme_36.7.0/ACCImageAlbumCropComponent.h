@class NSDictionary;
@protocol ACCEditViewContainer, ACCCTRServiceProtocol, ACCImageAlbumCropFeatureServiceProtocol;

@interface ACCImageAlbumCropComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (retain, nonatomic) id<ACCImageAlbumCropFeatureServiceProtocol> featureService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (id)p_cropBarItem;
- (void)p_clickedCropBarItemWithAnimation:(BOOL)a0;
- (void)p_trackClickCropBarItem;
- (void)p_jumpToCropVCWithAnimation:(BOOL)a0;
- (void).cxx_destruct;

@end
