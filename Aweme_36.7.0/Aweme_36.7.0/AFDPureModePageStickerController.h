@class NSString;
@protocol AWEVideoInteractiveProtocol;

@interface AFDPureModePageStickerController : AWEBaseController <AFDPureModePageControllerProtocol, AWEVideoInteractiveDelegate, AFDPureModePageStickerControllerProtocol>

@property (retain, nonatomic) id<AWEVideoInteractiveProtocol> interactiveContainer;
@property (nonatomic) BOOL showWithVideoPausing;
@property (nonatomic) BOOL isShowingStickers;
@property (weak, nonatomic) id<AWEVideoInteractiveProtocol> currentInteractiveContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (BOOL)tryToHandleTapStickerInPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)containerDidScroll:(id)a0;
- (long long)videoScaleType;
- (void)videoInteractiveViewWillShowBubbleView;
- (void)videoInteractiveViewTapWithStickerShow;
- (BOOL)videoInteractiveViewTapInCenter;
- (void)videoInteractiveViewJumpScheme;
- (void)resumePlaying;
- (double)currentPlayerPlaybackTime;
- (void)stickerDoubleTap:(id)a0;
- (void)updateVideoStickerView:(id)a0;
- (void)makeMaskViewsLayout;
- (id)configInteractiveContainerVideoInfoDict;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)play;
- (void)setData:(id)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)isInteracting;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (BOOL)isVideoPlaying;
- (id)videoPlayerView;
- (void)viewWillDisappear;

@end
