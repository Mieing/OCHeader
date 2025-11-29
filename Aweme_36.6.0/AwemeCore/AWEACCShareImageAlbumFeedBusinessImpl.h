@class NSString;

@interface AWEACCShareImageAlbumFeedBusinessImpl : HTSService <ACCShareImageAlbumFeedBusinessProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSlides;
+ (void)setSlides:(BOOL)a0 isImageClip:(BOOL)a1;
+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)a0 enterFrom:(id)a1 willDismissHandler:(id /* block */)a2 resultHandler:(id /* block */)a3;
+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)a0 isSingleLivePhoto:(BOOL)a1 canSaveAsVideo:(BOOL)a2 canSaveAsRenderImage:(BOOL)a3 enterFrom:(id)a4 title:(id)a5 isChooseRenderImage:(BOOL)a6 currentCanDownload:(BOOL)a7 willDismissHandler:(id /* block */)a8 resultHandler:(id /* block */)a9;
+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)a0 isSingleLivePhoto:(BOOL)a1 canSaveAsVideo:(BOOL)a2 canSaveAsRenderImage:(BOOL)a3 canSelectImage:(BOOL)a4 enterFrom:(id)a5 title:(id)a6 isChooseRenderImage:(BOOL)a7 currentCanDownload:(BOOL)a8 willDismissHandler:(id /* block */)a9 resultHandler:(id /* block */)a10;
+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)a0 enterFrom:(id)a1 title:(id)a2 willDismissHandler:(id /* block */)a3 resultHandler:(id /* block */)a4;
+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)a0 isSingleLivePhoto:(BOOL)a1 enterFrom:(id)a2 currentCanDownload:(BOOL)a3 willDismissHandler:(id /* block */)a4 resultHandler:(id /* block */)a5;
+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)a0 enterFrom:(id)a1 title:(id)a2 currentCanDownload:(BOOL)a3 willDismissHandler:(id /* block */)a4 resultHandler:(id /* block */)a5;
+ (void)p_trackSelectWithType:(unsigned long long)a0 enterFrom:(id)a1 isSlides:(BOOL)a2;
+ (BOOL)isImageClipForSlides;
+ (void)resetSlidesFlag;
+ (void)showDownloadActionSheetWithIsSingleImage:(BOOL)a0 isSingleLivePhoto:(BOOL)a1 enterFrom:(id)a2 title:(id)a3 currentCanDownload:(BOOL)a4 willDismissHandler:(id /* block */)a5 resultHandler:(id /* block */)a6;
+ (void)p_showOldSinglePhotoActionSheetWithWillDismissHandler:(id /* block */)a0 resultHandler:(id /* block */)a1;
+ (id)imagePickerController;


@end
