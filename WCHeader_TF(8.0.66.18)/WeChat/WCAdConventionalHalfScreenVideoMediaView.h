@class WCPlayerPlayArgs, NSString, WCMediaItem, WCCanvasAdControlView, UIImageView, WCPlayerView;

@interface WCAdConventionalHalfScreenVideoMediaView : WCAdConventionalHalfScreenMediaBaseView <WCCanvasAdControlViewDelegate, WCFacadeExt>

@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (retain, nonatomic) WCPlayerPlayArgs *playInfo;
@property (retain, nonatomic) WCCanvasAdControlView *controlView;
@property (retain, nonatomic) WCPlayerView *wcPlayerView;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)onHostViewDidEnter;
- (void)onHostViewDidExit;
- (void)onViewDidAppear;
- (void)onViewWillDisappear;
- (void)onViewDidDisappear;
- (id)fetchMediaImage;
- (id)fetchCurrentSnapshot;
- (void)startWCPlayer;
- (void)pauseWCPlayer;
- (void)exitWCPlayer;
- (struct CGSize { double x0; double x1; })fetchMediaSize;
- (id)getThumbImage;
- (void)loadThumbImage;
- (void)updateThumbImageWithImage:(id)a0;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)reportVideoCommonPlayInfo;
- (void)onLoopPlayToEnd;
- (void)onControlViewSingleTap;
- (void).cxx_destruct;

@end
