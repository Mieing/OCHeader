@class NSString;

@interface AWEMediaDownloader : NSObject <AWEMediaDownloader, AWEMediaDownloaderBanner, AWEMediaDownloaderComment, AWEMediaDownloaderCore, AWEMediaDownloaderMusic, AWEMediaDownloaderLegacy, HTSService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloadWithOptions:(id)a0 resultBlock:(id /* block */)a1;
+ (id)downloadWithOptions:(id)a0 progressBlock:(id /* block */)a1 resultBlock:(id /* block */)a2;
+ (BOOL)checkIfCanDownloadWithOptions:(id)a0;
+ (void)copyLinkIfPreventDownloadTypeReviewing:(id)a0;
+ (id)downloadForbiddenToast;
+ (void)downloadVideoToAlbumWithURLString:(id)a0 completion:(id /* block */)a1;
+ (void)downloadVideoWithURLGoup:(id)a0 destinationURL:(id)a1 progress:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (BOOL)shouldForbidDownloadUnreviewedVideo;
+ (void)saveLifeStory:(id)a0 completion:(id /* block */)a1;
+ (BOOL)shouldMuteDownloadWithMusic:(id)a0;
+ (void)showMuteDownloadAlertWithConfirmHandler:(id /* block */)a0 cancelHandler:(id /* block */)a1 logParams:(id)a2;
+ (id)getDownloadContext;
+ (id)createDownloadBarView;
+ (void)changeDownloadBarViewMode:(long long)a0;
+ (void)showRetryDownloadBubble;
+ (void)dismissRetryDownloadBubble;
+ (id)downloadCommentWithOptions:(id)a0 resultBlock:(id /* block */)a1;
+ (BOOL)forbidDownloadAd:(id)a0 shareType:(long long)a1;
+ (BOOL)forbiddenedDownloading:(id)a0 shareType:(long long)a1;
+ (void)gotoPhotoLibrarySetting;
+ (id)downloadContext;
+ (void)updateDownloadBarProgress;
+ (void)downloadBarDismissOnTimer:(id)a0;
+ (void)failBubbleDismissOnTimer:(id)a0;
+ (id)commentDownloadContext;
+ (void)downloadFileCheckWithAweme:(id)a0 completion:(id /* block */)a1;
+ (void)downloadVideoWithURLString:(id)a0 completion:(id /* block */)a1;
+ (void)_dismissLoadingView;
+ (void)downloadVideoWithURLGoup:(id)a0 seed:(long long)a1 destinationURL:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
+ (void)saveVideoLifeStory:(id)a0 completion:(id /* block */)a1;
+ (void)saveImageLifeStory:(id)a0 completion:(id /* block */)a1;
+ (id)_localPathURLForVideo:(id)a0;
+ (void)downloadLifeStoryWithURLString:(id)a0 lifeStory:(id)a1 distinationURL:(id)a2 hasWatermark:(BOOL)a3 completion:(id /* block */)a4;
+ (void)downloadImageAndAddSWatermarkWithLifeStory:(id)a0 completion:(id /* block */)a1;
+ (void)composeWithFileURL:(id)a0 lifeStory:(id)a1 edgeData:(id)a2 completion:(id /* block */)a3;
+ (void)initialize;
+ (void)_showLoadingView;
+ (id)loadingView;
+ (void)updateDownloadProgress:(double)a0;


@end
