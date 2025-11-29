@interface ACCGenericTemplateAlbumTrackerHelper : ACCGenericTemplateAlbumBaseHelper

- (BOOL)onWillDownloadTemplateWithConfig:(id)a0;
- (BOOL)onDidDownloadTemplateWithConfig:(id)a0 error:(id)a1;
- (BOOL)onWillFillAssetsWithConfig:(id)a0;
- (BOOL)onDidFillAssetsWithConfig:(id)a0 error:(id)a1;
- (BOOL)onWillFillPublishModelWithConfig:(id)a0;
- (BOOL)onDidFillPublishModelWithConfig:(id)a0;
- (BOOL)onWillEnterEditorWithConfig:(id)a0;
- (BOOL)onDidEnterEditorWithConfig:(id)a0;

@end
