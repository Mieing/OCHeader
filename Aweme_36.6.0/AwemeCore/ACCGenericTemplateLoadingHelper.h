@class UIView;
@protocol ACCTextLoadingViewProtcol;

@interface ACCGenericTemplateLoadingHelper : ACCGenericTemplateAlbumBaseHelper

@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;

- (BOOL)onWillDownloadTemplateWithConfig:(id)a0;
- (BOOL)onDidDownloadTemplateWithConfig:(id)a0 error:(id)a1;
- (BOOL)onDidFillAssetsWithConfig:(id)a0 error:(id)a1;
- (BOOL)onWillEnterEditorWithConfig:(id)a0;
- (BOOL)onDidEnterEditorWithConfig:(id)a0;
- (void)removeLoadingViewAndShowHint;
- (void).cxx_destruct;
- (void)showLoadingView;

@end
