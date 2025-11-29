@interface AWELongPressPanelSaveViewModel : AWELongPressPanelBaseViewModel

+ (id)longPressPanelViewModel;

- (BOOL)enableDownload;
- (void)doDownloadTrackWithModel:(id)a0 referString:(id)a1 logExtraDict:(id)a2;
- (void)p_doDownloadImageAlbumWithSelectedIndices:(id)a0 model:(id)a1 referString:(id)a2 completion:(id /* block */)a3;
- (id)albumImagePickerViewController;
- (void)downloadImageAlbum:(id)a0 referString:(id)a1 logExtraDict:(id)a2 completion:(id /* block */)a3;
- (void)showImageAlbumDownloadSouceChooseWithAWeme:(id)a0 referString:(id)a1 logExtraDict:(id)a2 completion:(id /* block */)a3;
- (BOOL)shouldDownloadWithAwemeModel:(id)a0;
- (void)downloadFromLongPress:(id)a0 referString:(id)a1 logExtraDict:(id)a2 progressBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)p_saveImageAlbumAsVideoWithAWeme:(id)a0 completion:(id /* block */)a1;
- (BOOL)needShow;

@end
