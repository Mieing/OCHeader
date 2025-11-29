@class UIViewController;
@protocol AWEAwemeBizPlayVideoProtocol, AWEPlayVideoViewControllerProtocol, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionPanelControllerProtocol;

@interface AWEFeedRelatedReadingVideoPlayManager : NSObject

@property (weak, nonatomic) UIViewController *currentViewController;
@property (nonatomic) BOOL playerIsPlayingWhenInit;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> interactionDelegate;
@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol, AWEPlayVideoViewControllerProtocol> videoDelegate;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *container;

+ (id)sharedManager;

- (BOOL)isShowingRelatedReadingPanel;
- (void)resetVideoPlay;
- (void)setupWithPanelController:(id)a0;
- (void)didFirstAppearWithTargetHeight:(double)a0;
- (void)didNotFirstAppear;
- (void)switchWithIsHalfScreen:(BOOL)a0;
- (void)containerFrameDidChangeWithRatio:(double)a0;
- (void)containerDidClose;
- (void)tryHidePauseIcon;
- (void)hideInteractionController;
- (void)tryPlayFeedPlayer;
- (void)tryPauseFeedPlay;
- (void)resumeInteractionController;
- (void)tryShowPauseIcon;
- (void).cxx_destruct;
- (void)didDisappear;

@end
