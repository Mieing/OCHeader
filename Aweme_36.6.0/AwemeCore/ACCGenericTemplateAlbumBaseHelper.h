@interface ACCGenericTemplateAlbumBaseHelper : NSObject

@property (nonatomic) unsigned long long albumScene;
@property (nonatomic) BOOL cancelledFollow;

- (id)initWithAlbumScene:(unsigned long long)a0;
- (BOOL)onWillDownloadTemplateWithConfig:(id)a0;
- (BOOL)onDidDownloadTemplateWithConfig:(id)a0 error:(id)a1;
- (BOOL)onWillFillAssetsWithConfig:(id)a0;
- (BOOL)onDidFillAssetsWithConfig:(id)a0 error:(id)a1;
- (BOOL)onWillFillPublishModelWithConfig:(id)a0;
- (BOOL)onDidFillPublishModelWithConfig:(id)a0;
- (BOOL)onWillEnterEditorWithConfig:(id)a0;
- (BOOL)onDidEnterEditorWithConfig:(id)a0;

@end
