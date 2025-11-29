@class MMScrollActionSheet, NSString, FavSightInfo, WXFullScreenGestureRecognizer, FavSightView, MMUIWindow, UIButton;
@protocol FavSightFullScreenViewControllerDelegate;

@interface FavSightFullScreenViewController : FullScreenViewController <FavForwardLogicDelegate, WCNetworkMediaPlayerDelegate, FullScreenGestureDelegate, WCPlayerConfigDelegate, MMScrollActionSheetDelegate> {
    FavSightInfo *m_sightInfo;
    FavSightView *m_sightView;
    UIButton *m_playAttachVideoButton;
    WXFullScreenGestureRecognizer *m_gestureReconizer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_originalRect;
    MMUIWindow *m_fullScreenWindow;
}

@property (retain, nonatomic) MMScrollActionSheet *scrollActionSheet;
@property (weak, nonatomic) id<FavSightFullScreenViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSightInfo:(id)a0 withOriginalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)internalInitWithSightInfo:(id)a0;
- (struct CGSize { double x0; double x1; })sightVideoSize;
- (void)viewDidLayoutSubviews;
- (void)setPlayAttachVideoButtonFrame;
- (id)getFavForawrdViewController;
- (BOOL)shouldAutorotate;
- (void)showVCAnimation;
- (void)hideVCAnimation;
- (void)forwardSight:(id)a0 contact:(id)a1;
- (void)saveSight:(id)a0;
- (void)onClickPlayAttachVideoBtn;
- (id)createWCNetworkMediaPlayer;
- (void)onClickDetailButton;
- (void)onFullScreenSingleTap;
- (void)onFullScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onFullScreenBackgroundColorAlphaChange:(double)a0;
- (void)onFullScreenClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenLongPressEnd;
- (void)exitFullScreen:(id)a0;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)a0;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onTapCloseButton:(id)a0;
- (void)onToolViewAutoClose;
- (void)onTapSightIconView;
- (void)onClickShareButton:(id)a0;
- (void)onClickDownloadButton:(id)a0;
- (void)onClickMoreButton:(id)a0;
- (void).cxx_destruct;

@end
