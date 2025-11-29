@class NSString, MMLiveCDNPlayerView, UIImage, UIView;

@interface WCFinderMinimizeLiveContentView : WCFinderMinimizeDisplayContentBaseView <MMLiveCDNPlayerViewDelegate, MMLiveCDNPlayerViewMinimizeModeDelegate>

@property (retain, nonatomic) UIView *playerContainerView;
@property (nonatomic) struct CGSize { double width; double height; } originSize;
@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) UIImage *tmpSnapImageForMinimizeAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cleanUp;
- (void)pausePlay;
- (void)resumePlay;
- (id)animatingSnapView;
- (struct CGSize { double x0; double x1; })contentSize;
- (BOOL)needFullCover;
- (void)updateContentVM:(id)a0;
- (void)layoutSubviews;
- (void)updatePlayerViewFrame;
- (BOOL)beTakeOverAudioModel;
- (void)didMoveToSuperview;
- (void)onMinimizeFloatingViewDidDisplay;
- (void)hidePlayerViewIfNeeded:(BOOL)a0;
- (unsigned long long)getCurAudioModuleOptions;
- (void)onLiveCDNPlayerViewPlayStateChangedTo:(unsigned long long)a0;
- (void)onLiveCDNPlayerViewMinimizeSizeStyleChangedTo:(unsigned long long)a0;
- (void).cxx_destruct;

@end
