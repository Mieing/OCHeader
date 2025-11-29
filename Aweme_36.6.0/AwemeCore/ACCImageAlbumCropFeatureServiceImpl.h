@class NSString, AWEVideoPublishViewModel;
@protocol ACCStickerServiceProtocol, IESServiceProvider, ACCImageAlbumCropDomainService, ACCEditServiceProtocol;

@interface ACCImageAlbumCropFeatureServiceImpl : ACCImageAlbumFeatureService <ACCImageAlbumCropFeatureServiceProtocol>

@property (retain, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) id<ACCImageAlbumCropDomainService> cropImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;

- (id)currentImageEditOriginalImage;
- (BOOL)canDirectJumpToCropView;
- (void)removeCurrentEditsWhenBeginCrop;
- (void)stopAutoPlayeForCrop;
- (void)startAutoPlayeForCrop;
- (void)confirmCrop:(id)a0 forData:(id)a1 atIndex:(long long)a2 reloadPlayerItem:(BOOL)a3;
- (void)p_removeTemplate;
- (id)dependences;
- (void).cxx_destruct;

@end
