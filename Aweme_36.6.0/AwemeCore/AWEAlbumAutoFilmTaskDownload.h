@interface AWEAlbumAutoFilmTaskDownload : NSObject

@property (nonatomic) unsigned long long scene;

- (id)generateRequestModelWithExtraParams:(id)a0;
- (id)recommendKey;
- (id)recommendListString;
- (id)countListString;
- (id)cursorListString;
- (void)fetchAndDownloadTemplateListsWithRace:(id)a0 service:(id)a1 extraParams:(id)a2 requestCompletion:(id /* block */)a3 downloadCompletion:(id /* block */)a4 secondRequestCompletion:(id /* block */)a5;
- (void)fetchTemplateListWithMaterials:(id)a0 service:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;

@end
