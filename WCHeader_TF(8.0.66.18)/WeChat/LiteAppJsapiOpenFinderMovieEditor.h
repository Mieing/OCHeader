@class MJPublisher, NSString;

@interface LiteAppJsapiOpenFinderMovieEditor : LiteAppJsApi <MJMovieComposingViewControllerDelegate, WCFinderPostViewControllerDelegate>

@property (retain, nonatomic) MJPublisher *mjPublisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)showMovieComposing:(id)a0 disableDraft:(unsigned char)a1 entryScene:(long long)a2 mediaType:(long long)a3;
- (void)showMovieComposingWithDraft:(id)a0;
- (void)presentMJMovieComposingViewControllerWithFilePaths:(id)a0 mediaType:(long long)a1 configuration:(id)a2 delegate:(id)a3 mjPublisher:(id)a4;
- (void)composingViewControllerDidCancel:(id)a0;
- (void)composingViewController:(id)a0 didFailWithError:(id)a1;
- (void)composingViewController:(id)a0 didFinishWithVideoFileURL:(id)a1 userInfo:(id)a2;
- (void)composingViewController:(id)a0 didFinishWithActionFlow:(id)a1 userInfo:(id)a2;
- (void)handleVideoFileURL:(id)a0 composingVC:(id)a1 userInfo:(id)a2;
- (void)postProcess:(id)a0;
- (void)handleMJAppProducedVideoWithPostSession:(id)a0 composingVC:(id)a1;
- (void)onMJPublisherMovieComposingFinishFailed;
- (void)successCallback:(id)a0 edited:(BOOL)a1 videoPath:(id)a2 thumbImage:(id)a3 duration:(double)a4 videoSize:(unsigned int)a5 sizeVideo:(struct CGSize { double x0; double x1; })a6;
- (id)createVideoLocalId:(id)a0 videoSize:(unsigned int)a1;
- (id)createImageLocalId:(id)a0;
- (int)getVideoDuration:(id)a0;
- (id)saveCachePath;
- (unsigned long long)currentTimeInMilliseconds;
- (void).cxx_destruct;

@end
