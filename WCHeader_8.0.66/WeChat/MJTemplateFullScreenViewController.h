@class WCMomentsScrollActionSheet, NSString, WXFullScreenGestureRecognizer, UIImageView, MJTemplateFullScreenViewControllerParams, MJTemplateCompositeTask, WCMomentsPlayerViewContainer, MJTemplateFullScreenControlView;
@protocol MJTemplateFullScreenViewControllerPostDelegate, MJTemplateFullScreenViewControllerDelegate;

@interface MJTemplateFullScreenViewController : FullScreenViewController <FullScreenGestureDelegate, WCMomentsPlayerViewContainerDelegate, MJTemplateFullScreenControlViewDelegate, MJTemplateMoviePlayerExt, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, WCMomentsForwardVideoOpDelegate, MMAssetCompositeResultExt> {
    BOOL m_isPresented;
}

@property (retain, nonatomic) MJTemplateFullScreenViewControllerParams *params;
@property (retain, nonatomic) MJTemplateCompositeTask *compositeTask;
@property (retain, nonatomic) WCMomentsPlayerViewContainer *containerView;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (retain, nonatomic) MJTemplateFullScreenControlView *controlView;
@property (retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGesture;
@property (retain, nonatomic) WCMomentsScrollActionSheet *actionSheet;
@property (weak, nonatomic) id<MJTemplateFullScreenViewControllerDelegate> delegate;
@property (weak, nonatomic) id<MJTemplateFullScreenViewControllerPostDelegate> postDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCompositeTask:(id)a0 params:(id)a1;
- (void)viewDidLoad;
- (void)initContainerView;
- (void)addThumbImageView;
- (void)initControlView;
- (void)initFullScreenGesture;
- (void)viewDidTransitionToNewSize;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)changePresentedState:(BOOL)a0;
- (void)showVCAnimation;
- (void)hideVCAnimation;
- (void)resetThumbImageViewFrame;
- (struct CGSize { double x0; double x1; })originVideoSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suitableThumbImageViewFrameForVideoSize:(struct CGSize { double x0; double x1; })a0;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onFullScreenBackgroundColorAlphaChange:(double)a0;
- (void)onFullScreenLongPressEnd;
- (void)closeFullScreen;
- (void)playVideo;
- (void)stopVideo;
- (void)showActionSheet;
- (void)setupActionSheet;
- (void)setupActionSheetItem;
- (void)updateActionSheetIfNeeded;
- (void)closeActionSheet;
- (id)createRecentForwardView;
- (void)forwardToContact:(id)a0;
- (void)favoriteVideo;
- (void)saveVideo;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)scrollActionSheetDidCancel:(id)a0;
- (void)scrollActionSheetDidTapTransparent:(id)a0;
- (void)scrollActionSheet:(id)a0 didSelecteDisableItem:(id)a1;
- (void)scrollActionSheetDidAppeared:(id)a0;
- (void)onActionSheetEventEnd;
- (void)clickRFItemCallBack:(id)a0;
- (id)forwardVideoOpGetPlayerView:(id)a0;
- (void)onForwardOpDidSend:(id)a0;
- (void)onForwardOpDidCancel:(id)a0;
- (BOOL)shouldFixParentAppearEventWhenPresented;
- (id)thumbImageViewWithImageView:(id)a0;
- (id)forwardUserInfo;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })templateFullScreenControlViewGetCurrentPlaybackTime:(id)a0;
- (void)templateFullScreenControlViewDidClickShareButton:(id)a0;
- (void)templateFullScreenControlViewDidBeginScrub:(id)a0;
- (void)templateMoviePlayer:(id)a0 didChangePlayStatus:(unsigned long long)a1;
- (void)templateMoviePlayerWillStopPlaying:(id)a0;
- (void)playerViewContainerDidZoom:(id)a0;
- (void)updateGestureContainerFrame;
- (void)compositeTaskDidStop:(id)a0 withResult:(id)a1 compositeSession:(id)a2;
- (void).cxx_destruct;

@end
