@class AWEMediaDownloadOptions, UIViewController, AWEMediaDownloadResultItem;
@protocol AWEImageAlbumImagePickerViewControllerProtocol;

@interface AWEDownloadShareChannel : AWEShareBaseChannel

@property (retain, nonatomic) UIViewController<AWEImageAlbumImagePickerViewControllerProtocol> *imagePickerVC;
@property (retain, nonatomic) AWEMediaDownloadOptions *downloadOptions;
@property (retain, nonatomic) AWEMediaDownloadResultItem *downloadResult;

+ (Class)aAWEShareServiceDOUYINHTSAdapterClass;

- (BOOL)isShareTrackerEnabled;
- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (BOOL)prepareToShare;
- (void)trackDownloadEvent;
- (id)prepareDownloadOptions;
- (id)aAWEShareServiceDOUYINHTSAdapter;
- (void)trackSharePageClick:(id)a0;
- (void)finishWithDownloadResult:(id)a0 completion:(id /* block */)a1;
- (void)trackDownloadEventWithAppend:(id /* block */)a0;
- (void)trackImageSheetElementClick:(id)a0;
- (void)p_downLoadRealLivePhotoWithAlbumImageModel:(id)a0 awemeModel:(id)a1 music:(id)a2 saveAsVideo:(BOOL)a3 completion:(id /* block */)a4;
- (void)p_doDownloadImageAlbumWithSelectedIndices:(id)a0 completion:(id /* block */)a1;
- (void)p_saveImageAlbumAsVideoWithCompletion:(id /* block */)a0;
- (void)showImageAlbumPickerWithCompletion:(id /* block */)a0;
- (void)p_runSaveImageAlbumAsVideoWithCompletion:(id /* block */)a0;
- (void)p_downloadFileCheckWithAweme:(id)a0 completion:(id /* block */)a1;
- (void)showDownloadSuccessToast;
- (void)succeedWithDownloadResult:(id)a0;
- (void)showDownloadFailedToast;
- (BOOL)p_shouldUseWatermark:(id)a0;
- (id)collectTransmissionAndAspectParams;
- (void)startDownloadingWithCompletion:(id /* block */)a0;
- (void)presentShareSavePanelWithCompletion:(id /* block */)a0;
- (void)showImageAlbumDownloadSouceChooseWithCompletion:(id /* block */)a0;
- (void)downloadSingleImageAlbumWithCompletion:(id /* block */)a0;
- (void)saveImageAlbumAsVideoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)shareType;

@end
