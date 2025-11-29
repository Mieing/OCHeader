@class NSString, UIViewController, UITabBar;
@protocol AWEAwemePlayInteractionPlayDelegate, AWESearchAIGCPanelDelegateProtocol, AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionBaseViewControllerProtocol;

@interface AWEAIGCPlayInteractionManager : NSObject <AWESearchAIGCPanelDelegateProtocol>

@property (nonatomic) BOOL shouldResumeFeedPlay;
@property (nonatomic) double lastTabBarAlpha;
@property (weak, nonatomic) UITabBar *tabBar;
@property (weak, nonatomic) UIViewController *panelViewController;
@property (weak, nonatomic) id<AWEPlayInteractionBaseViewControllerProtocol, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionPlayDelegate> enterPlayInteractionVC;
@property (weak, nonatomic) id<AWESearchAIGCPanelDelegateProtocol> externDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)playInteractionVC;
- (BOOL)shouldShowAIGCShrinkVideoWithPlayInteractionVC:(id)a0;
- (BOOL)shouldShowAIGCShrinkVideo;
- (void)magnifyVideoWhenCloseAIGCPanelIfNeeded:(BOOL)a0 playInteractionVC:(id)a1;
- (void)resizeVideoWhenDragAIGCPanel:(double)a0;
- (void)shrinkVideoWhenShowAIGCPanel:(BOOL)a0;
- (void)magnifyVideoWhenCloseAIGCPanelIfNeeded:(BOOL)a0;
- (void)searchAIGCPanel_pauseVideo;
- (void)searchAIGCPanel_playVideo;
- (BOOL)haveViewOfClass:(id)a0 inView:(id)a1 maxLevel:(long long)a2;
- (void)searchAIGCPanel_panToFullScreenWithProgress:(double)a0;
- (void)searchAIGCPanel_panToExitWithProgress:(double)a0;
- (void)searchAIGCPanel_willChangeToContentStatus:(long long)a0 animated:(BOOL)a1 duration:(double)a2;
- (void)searchAIGCPanel_didChangeToContentStatus:(long long)a0;
- (void)searchAIGCPanel_willCloseSevenSplitScreen:(BOOL)a0 duration:(double)a1;
- (void)searchAIGCPanel_didCloseSevenSplitScreen;
- (void)searchAIGCPanel_viewWillAppear:(id)a0;
- (void)searchAIGCPanel_viewDidAppear:(id)a0;
- (void)searchAIGCPanel_viewWillDisappear:(id)a0;
- (void)searchAIGCPanel_viewDidDisappear:(id)a0;
- (void)searchAIGCPanel_checkTabBarAlphaState:(id)a0;
- (void)searchAIGCPanel_willCloseForTransition:(id)a0;
- (void)searchAIGCPanel_shouldCloseForJump:(id)a0;
- (BOOL)haveViewOfClass:(id)a0 inView:(id)a1;
- (id)model;
- (void).cxx_destruct;

@end
