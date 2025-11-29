@class WCDownloadArgsWrap, WCPlayerPlayArgs, WXFullScreenGestureRecognizer, VideoDetailControlView, WCPlayerView, NSString, UIPanGestureRecognizer, MMVideoBrowserViewModel;

@interface MMVideoBrowserView : MMMediaBrowserView <VideoDetailControlViewDelegate, WCPlayerViewUIDelegate, FullScreenGestureDelegate, UIGestureRecognizerDelegate>

@property (copy, nonatomic) id /* block */ downloadCompleteHandler;
@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) WCPlayerPlayArgs *playArgs;
@property (retain, nonatomic) VideoDetailControlView *controlView;
@property (retain, nonatomic) WCDownloadArgsWrap *downloadArgsWrap;
@property (retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) MMVideoBrowserViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getDisplayFrame;
- (void)startDisplay;
- (void)downloadAllDataWithComplete:(id /* block */)a0;
- (void)onFullScreenSingleTap;
- (void)onFullScreenLongPressBegin;
- (double)getOperateHeight;
- (void)onLayoutSubviews;
- (void)onDataDownloadSucc;
- (void)onDataDownloadFail;
- (void)onDataDownloadComplete;
- (void)playerViewDidZoom:(id)a0;
- (void)playerViewDidEndZoom:(id)a0;
- (void)handlePanGesture;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
