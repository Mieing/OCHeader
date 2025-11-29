@class NSString;
@protocol AWEPOIFeedPlayerManagerDatasource, AWEAwemeBizPlayVideoProtocol, AWEPOIPlayInteractionVCManagerProtocol, AFDRichContentContainerViewControllerProtocol;

@interface AWEPOIFeedPlayerManager : NSObject <AWEPOIFeedPlayerManagerProtocol, AWEPOIPlayInteractionVCManagerProtocol>

@property (nonatomic) double horizontalTopRadio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shrinkContainerFrame;
@property (nonatomic) double initialRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialVideoFrame;
@property (nonatomic) BOOL hasTriggerEnter;
@property (nonatomic) BOOL playerIsPlayingWhenInit;
@property (nonatomic) BOOL pauseByPurpose;
@property (nonatomic) BOOL notRestoreVideoWhenClose;
@property (nonatomic) BOOL isResizeVideo;
@property (weak, nonatomic) id<AWEPOIPlayInteractionVCManagerProtocol> interactionManager;
@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol> feedPlayer;
@property (weak, nonatomic) id<AFDRichContentContainerViewControllerProtocol> richContentContainer;
@property (weak, nonatomic) id<AWEPOIFeedPlayerManagerDatasource> datasource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })awemeContentViewFrame;
- (void)tryHidePauseIcon;
- (void)tryShowPauseIcon;
- (void)handleAnchorDetailPageEnterEventWithIdentifier:(id)a0;
- (void)handleAnchorDetailPageDismissEventWithIdentifier:(id)a0;
- (void)hideInteractionControllerWithAnimation:(BOOL)a0;
- (void)resumeInteractionControllerWithAnimation:(BOOL)a0;
- (void)switchPlayStateWithAnimation:(BOOL)a0;
- (void)playWithAnimation:(BOOL)a0;
- (void)pauseWithAnimation:(BOOL)a0;
- (void)resizeVideoWhenIPadFrameChangeTo:(struct CGSize { double x0; double x1; })a0;
- (void)shrinkVideoWhenEnterWithModalViewRatio:(double)a0 viewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)restoreVideoWhenDismiss;
- (void)resetFeedPlayerIfNeeded;
- (BOOL)isFeedPlayerPlaying;
- (void)refreshPlayerPlayingState;
- (void)forceRestoreVideo;
- (void)resizeVideoWithModalViewRatio:(double)a0;
- (BOOL)shouldRelocateVideo;
- (void)relocateVideoWithRatio:(double)a0;
- (BOOL)shouldResizeVideoWhenModalViewRatioChanged;
- (void)updateAwemeContentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 reason:(unsigned long long)a1 progress:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateFullScreenDisplayContentRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shrinkDisplayContentRectWithOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awemeContentViewFrameWillChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupWithRatio:(double)a0 containerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)model;
- (double)screenHeight;
- (void).cxx_destruct;
- (double)screenWidth;

@end
