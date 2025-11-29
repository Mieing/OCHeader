@class AWEAlbumAutoFilmTaskMaterial, AWEAlbumAutoFilmTaskDownload, AWEAlbumAutoFilmPresetService;

@interface AWEAlbumAutoFilmTaskManager : NSObject

@property (retain, nonatomic) AWEAlbumAutoFilmPresetService *serviceWrapper;
@property (retain, nonatomic) AWEAlbumAutoFilmTaskDownload *downloadTask;
@property (retain, nonatomic) AWEAlbumAutoFilmTaskMaterial *materialTask;

- (id)recommendService;
- (id)presetService;
- (id)extractFeaturesWithPublishModel:(id)a0 assets:(id)a1;
- (void)extractFramesWithMaterials:(id)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;
- (void)startAssetsFrameExtractAndUpload:(id)a0 publishModel:(id)a1 extractFrameCompletion:(id /* block */)a2 uploadFrameCompletion:(id /* block */)a3;
- (id)recommendFeatureTypesStringArray;
- (void)fetchAlbumAutoTemplateListWithMaterials:(id)a0 scene:(unsigned long long)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)fetchAndDownloadTemplateListsWithRace:(id)a0 scene:(unsigned long long)a1 extraParams:(id)a2 requestCompletion:(id /* block */)a3 downloadCompletion:(id /* block */)a4 secondRequestCompletion:(id /* block */)a5;
- (void)uploadExtractedFrameItems:(id)a0 publishModel:(id)a1 materialsArrayType:(unsigned long long)a2 uploadFrameCompletion:(id /* block */)a3;
- (void).cxx_destruct;

@end
