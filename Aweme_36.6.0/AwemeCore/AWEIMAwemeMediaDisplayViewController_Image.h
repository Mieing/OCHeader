@class AWEIMSocialEffectCoplayView, NSString, AWEIMPhotoBrowserZoomableView, UIImage, AWEIMDetailDownloadOriginView, AWEUILoadingView, RxPromise;

@interface AWEIMAwemeMediaDisplayViewController_Image : AWEIMAwemeMediaDisplayViewController <AWEIMPhotoBrowserZoomableViewDelegate, AWEIMDetailDownloadOriginViewDelegate>

@property (nonatomic) long long downloadState;
@property (nonatomic) double downloadProgress;
@property (retain, nonatomic) AWEIMPhotoBrowserZoomableView *scrollView;
@property (retain, nonatomic) AWEIMDetailDownloadOriginView *downloadOriginView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIImage *currentImage;
@property (retain, nonatomic) RxPromise *currentImageScanPromise;
@property (nonatomic) BOOL hasOriginImage;
@property (retain, nonatomic) AWEIMSocialEffectCoplayView *coplayView;
@property (nonatomic) BOOL viewDidDisappear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)tableviewGestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyIfNeeded:(id)a1;
- (void)setAwemeModel:(id)a0;
- (void)didTapZoomableView:(id)a0;
- (void)didEndDecelerating:(id)a0;
- (id)transitionEndView;
- (void)onPressDownLoad;
- (BOOL)longPressModuleViewEnable;
- (void)p_setupView;
- (id)enterFromStringWithMessageID:(id)a0;
- (BOOL)enableImageMediumTest;
- (void)p_configImageContainMediumImage;
- (void)p_configImageUseOrigin;
- (id)imageResourceDownloadModel;
- (id)largeImageResourceDownloadModel;
- (BOOL)doubleTapLikeEnabled;
- (id)p_longPressContextWithExtraParams:(id)a0;
- (void)p_configImage;
- (void)p_configCoplayViewIfNeeded;
- (BOOL)p_canSaveImageOrForwardMessage;
- (double)p_getMaxWidthWithTitle;
- (void)p_updateDownloadLayoutWithDownloadState:(long long)a0;
- (void)p_configDownloadLocalLargeImageWithCompletion:(id /* block */)a0;
- (void)p_configDownloadLocalOriginImageWithCompletion:(id /* block */)a0;
- (void)p_updateDownloadLayoutWithDownloadState:(long long)a0 progress:(double)a1;
- (id)p_titleWithDownloadState:(long long)a0 progress:(double)a1;
- (void)p_saveImage;
- (void)p_configDownloadLocalImageWithDownloadOrigin:(BOOL)a0 completion:(id /* block */)a1;
- (void)didFinishDownloadImageWithLocalPath:(id)a0 image:(id)a1;
- (void)p_transToDefaultStateIfNeed;
- (void)p_saveImageToDevice;
- (void)p_traceDownloadOriginWithActionType:(id)a0;
- (void)p_traceDisplay;
- (id)urlStringPromiseWithImage:(id)a0;
- (void)p_openCameraWithCoplayPath:(id)a0;
- (void)p_checkUserSendPhotoPrivilegeWithCompletion:(id /* block */)a0;
- (id)p_transformToJsonStringWithUgcId:(id)a0;
- (void)p_coplayDidTaped;
- (double)getTitleSizeWithTitle:(id)a0;
- (void)downloadOriginButtonDidTaped:(id)a0;
- (void).cxx_destruct;
- (id)contentAttributes;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)prepareWithCompletion:(id /* block */)a0;
- (void)showLoadingView;
- (void)hideLoadingView;

@end
