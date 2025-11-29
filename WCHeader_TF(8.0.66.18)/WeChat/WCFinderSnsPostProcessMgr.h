@class MJPublisher, NSMutableArray, NSString;
@protocol WCFinderSnsPostProcessMgrDelegate;

@interface WCFinderSnsPostProcessMgr : NSObject <WCAlbumPickerFooterViewDelegate, WCEditVideoViewControllerDelegate, WCFinderPostViewControllerDelegate, WCEditImageViewControllerDelegate, WCAlbumPreviewBrowserViewControllerDelegate, MJMovieComposingViewControllerDelegate>

@property (retain, nonatomic) NSMutableArray *assetArray;
@property (nonatomic) unsigned long long enterTime;
@property (retain, nonatomic) MJPublisher *mjPublisher;
@property (weak, nonatomic) id<WCFinderSnsPostProcessMgrDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reportEnterPage:(int)a0 eventCode:(long long)a1 dismiss:(BOOL)a2;
- (void)presentEditViewControllerWithLocalPathArray:(id)a0 mediaType:(long long)a1 fromVC:(id)a2 enterScene:(unsigned long long)a3;
- (void)editVideoViewController:(id)a0 didFinishEditingVideo:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingSightWithInfo:(id)a1;
- (void)editVideoViewController:(id)a0 didFinishEditingVideo:(id)a1 sliderContentOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)editVideoViewControllerDidCancel:(id)a0;
- (void)updateVideoPath:(id)a0 andThumbnail:(id)a1;
- (void)returnToTimelineOrAlbum;
- (void)editVideoViewController:(id)a0 didFinishEditingVideo:(id)a1 andForceChangeToScene:(unsigned int)a2;
- (void)editImageViewController:(id)a0 didFinishEditingImage:(id)a1;
- (void)editImageViewControllerDidCancel:(id)a0;
- (void)onMJPublisherMovieComposingStartFailed;
- (void)onMJPublisherMovieComposingFinishFailed;
- (void)presentMJMovieComposingViewControllerWithLocalPathArray:(id)a0 mediaType:(long long)a1 fromVC:(id)a2 enterScene:(unsigned long long)a3;
- (void)composingViewControllerDidCancel:(id)a0;
- (void)composingViewController:(id)a0 didFailWithError:(id)a1;
- (void)composingViewController:(id)a0 didFinishWithVideoFileURL:(id)a1 userInfo:(id)a2;
- (void)handleVideoFileURL:(id)a0 composingVC:(id)a1 userInfo:(id)a2;
- (void)composingViewController:(id)a0 didFinishWithActionFlow:(id)a1 userInfo:(id)a2;
- (void)handleActionFlow:(id)a0 composingVC:(id)a1 userInfo:(id)a2;
- (void)handleMJAppProducedVideoWithPostSession:(id)a0 composingVC:(id)a1;
- (void)processWithSightDraft:(id)a0 finderTask:(id)a1 publisherPostInfo:(id)a2;
- (void).cxx_destruct;

@end
