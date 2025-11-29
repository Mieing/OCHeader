@class NSString, AWEPlayInteractionMaskController;

@interface AWEVideoInteractiveDelegator : NSObject <AWEVideoInteractiveDelegate, AWEVideoInteractiveMaskDelegate>

@property (weak, nonatomic) AWEPlayInteractionMaskController *maskController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPureMode:(BOOL)a0;
- (BOOL)detailSlide;
- (BOOL)supportStickerMask;
- (long long)videoScaleType;
- (void)videoInteractiveViewWillShowBubbleView;
- (void)videoInteractiveViewTapWithStickerShow;
- (BOOL)videoInteractiveViewTapInCenter;
- (void)videoInteractiveViewJumpScheme;
- (void)resumePlaying;
- (double)currentPlayerPlaybackTime;
- (void)stickerDoubleTap:(id)a0;
- (void)stickerLongPress;
- (BOOL)stickerLongPressShouldBegin;
- (BOOL)isFastCommentElementAppear;
- (id)interactionBottomContainerView;
- (id)interactionLeftContainerView;
- (id)interactionRightContainerView;
- (void).cxx_destruct;
- (void)pause;
- (void)pausePlaying;
- (BOOL)isVideoPlaying;
- (id)videoPlayerView;

@end
