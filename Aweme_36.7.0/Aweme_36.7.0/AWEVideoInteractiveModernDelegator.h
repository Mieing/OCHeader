@class NSString, AWEPlayInteractionMaskController, AWEPlayInteractionViewController;
@protocol AWEVideoInteractiveDelegate, AWEVideoInteractiveImageDelegate, AWEAwemeBizPlayVideoProtocol, AWEVideoInteractiveProtocol, AWEAwemePlayVideoTrackProtocol;

@interface AWEVideoInteractiveModernDelegator : NSObject <AWEVideoInteractiveDelegate, AWEVideoInteractiveModernDelegatorProtocol>

@property (nonatomic) BOOL videoInteractionPause;
@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> videoDelegate;
@property (weak, nonatomic) id<AWEVideoInteractiveImageDelegate> imageDelegate;
@property (weak, nonatomic) id<AWEVideoInteractiveDelegate> pureModeStickerDelegate;
@property (weak, nonatomic) id<AWEVideoInteractiveProtocol> videoInteractiveContainer;
@property (weak, nonatomic) AWEPlayInteractionMaskController *maskController;
@property (weak, nonatomic) AWEPlayInteractionViewController *interactionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPureMode:(BOOL)a0;
- (BOOL)detailSlide;
- (id)imagePlayerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imagePlayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })customContainerRectForCalculateVideoFrame;
- (id)clipVideoDelegate;
- (BOOL)supportStickerMask;
- (long long)videoScaleType;
- (void)videoInteractiveViewWillShowBubbleView;
- (void)videoInteractiveViewTapWithStickerShow;
- (BOOL)videoInteractiveViewTapInCenter;
- (void)videoInteractiveViewJumpScheme;
- (void)resumePlaying;
- (double)currentPlayerPlaybackTime;
- (void)stickerDoubleTap:(id)a0;
- (void)updateInteractionViewController:(id)a0;
- (void).cxx_destruct;
- (void)pausePlaying;
- (BOOL)isVideoPlaying;
- (id)videoPlayerView;

@end
