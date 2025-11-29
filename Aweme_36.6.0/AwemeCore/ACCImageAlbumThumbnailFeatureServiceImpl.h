@class NSString, AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol, IESServiceProvider;

@interface ACCImageAlbumThumbnailFeatureServiceImpl : ACCImageAlbumFeatureService <ACCImageAlbumThumbnailFeatureServiceProtocol>

@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopAutoPlay;
- (void)didSelectThumbnailListItemAtIndex:(long long)a0;
- (void)moveThumbnailListItemFromIndex:(long long)a0 toIndex:(long long)a1 newCoverIndex:(long long)a2;
- (void)didEditThumbnailList:(id)a0 selectedAssets:(id)a1;

@end
