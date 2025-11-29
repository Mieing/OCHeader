@class NSString;

@interface AWEVideoRouterEditService : NSObject <AWEStudioEditService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNewLivePhotoForAweme:(id)a0;
+ (BOOL)shouldInheritMusicInfoWhenReplaceMusicWithAwemeModel:(id)a0 info:(id)a1;
+ (void)inheritMusicInfoToPublishModel:(id)a0 fromAwemeModel:(id)a1 info:(id)a2;
+ (id)replaceMusicFileLocalDirectory;
+ (void)parseCommonParamsInfo:(id)a0 toPublishModel:(id)a1;

- (id)startVideoEditViewControllerWithVideoPath:(id)a0 info:(id)a1 commercialAnchorModel:(id)a2 processDataBlock:(id /* block */)a3;
- (id)startVideoEditReplaceAudioWithAweme:(id)a0 info:(id)a1;
- (id)startVideoEditReplaceAudioWithAweme:(id)a0;
- (id)startVideoEditViewControllerWithAssetModel:(id)a0 info:(id)a1 processDataBlock:(id /* block */)a2;
- (id)startImageEditWithParams:(id)a0;
- (id)startSlidesReplaceAudioWithAweme:(id)a0 info:(id)a1;
- (id)startImageReplaceAudioWithAweme:(id)a0 info:(id)a1;
- (id)startVideoReplaceAudioWithAweme:(id)a0 info:(id)a1;
- (void)prepareVideoMaterialInSlidesMusicReplaceWithAwemeModel:(id)a0 imageModel:(id)a1 completion:(id /* block */)a2;
- (void)prepareLivePhotoMaterialInSlidesMusicReplaceWithAwemeModel:(id)a0 imageModel:(id)a1 completion:(id /* block */)a2;
- (void)prepareImageMaterialInSlidesMusicReplaceWithAwemeModel:(id)a0 imageModel:(id)a1 completion:(id /* block */)a2;
- (void)muteVideoResourceForURL:(id)a0 completion:(id /* block */)a1;
- (void)downloadResourceWithURLString:(id)a0 targetPath:(id)a1 completion:(id /* block */)a2;
- (id)startVideoReplaceAudioWithAweme:(id)a0;
- (void)trackFilterLayerPageShowWithInfo:(id)a0;

@end
