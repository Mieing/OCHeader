@class ACCImageAlbumEditTagsUploadImageHelper, NSString, AWEVideoPublishViewModel;
@protocol ACCStickerServiceProtocol, ACCEditServiceProtocol, IESServiceProvider;

@interface ACCImageAlbumTagsFeatureServiceImpl : ACCImageAlbumFeatureService <ACCImageAlbumTagsFeatureServiceProtocol>

@property (retain, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) ACCImageAlbumEditTagsUploadImageHelper *uploadImageHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;

- (void)registStickerHandler:(id)a0;
- (id)stickerViewsWithTypeId:(id)a0;
- (void)stopAutoPlayeForTag;
- (void)startAutoPlayeForTag;
- (void)uploadImageToCloudWithImagePath:(id)a0 Block:(id /* block */)a1;
- (void).cxx_destruct;

@end
