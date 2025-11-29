@class NSString;

@interface AWEACCFramesUploadNetServiceImpl : NSObject <ACCFramesUploadNetServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFramesWithParams:(id)a0 completion:(id /* block */)a1;
- (void)updateFramesWithItemID:(id)a0 videoId:(id)a1 materialId:(id)a2 stickers:(id)a3 otherParams:(id)a4 completion:(id /* block */)a5;
- (void)updateSlidesFramesWithItemID:(id)a0 videoIds:(id)a1 videoMaterialIds:(id)a2 imageIds:(id)a3 imageMaterialInfos:(id)a4 awemeType:(long long)a5 otherParams:(id)a6 completion:(id /* block */)a7;

@end
