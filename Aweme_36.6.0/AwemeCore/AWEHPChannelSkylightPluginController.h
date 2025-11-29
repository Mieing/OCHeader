@class NSString, UIViewController, UIView;
@protocol AWEHPChannelPageViewControllerPrivateProtocol, AWEHPChannelControllerProtocol, AWEHPChannelControllerPrivateConfigProtocol, AWEHPSkylightProtocol, AWEHPSkylightUndertakeContextProtocol;

@interface AWEHPChannelSkylightPluginController : NSObject <AWEHPSkylightUndertakeHostProtocol, AWEHPChannelCommonSkylightUndertakeHostProtocol, AWEHPChannelPrivatedLifeCycle, AWEHPChannelPluginControllerPrivateProtocol, AWEHPChannelPluginControllerMultiInstanceProtocol>

@property (readonly, weak, nonatomic) id<AWEHPChannelControllerPrivateConfigProtocol> privateConfig;
@property (retain, nonatomic) id<AWEHPChannelControllerProtocol> channelController;
@property (retain, nonatomic) UIViewController<AWEHPChannelPageViewControllerPrivateProtocol> *pageViewController;
@property (retain, nonatomic) UIView<AWEHPSkylightProtocol> *skylightContainer;
@property (retain, nonatomic) id<AWEHPSkylightUndertakeContextProtocol> skylightContext;
@property (nonatomic) BOOL needRecoverPure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowInjectToChannel:(id)a0;

- (BOOL)verticalPanGestureRecognizerShouldBegin:(id)a0;
- (void)channelEnterWithModel:(id)a0;
- (void)channelLeaveWithModel:(id)a0;
- (BOOL)channelTabBarShouldRepeatedClickTab;
- (BOOL)channelTabBarShouldDoubleClickTab;
- (BOOL)channelTabBarShouldLongPressTab;
- (void)channelTabBarDidSingleTap;
- (void)channelTabBarDidDoubleTap;
- (void)channelTabBarDidLongPress;
- (BOOL)channelTopTabShouldRepeatedClickTab;
- (BOOL)channelTopTabShouldInterceptCommonBubble;
- (BOOL)channelTopTabShouldInterceptCaptionBubble;
- (void)channelViewWillAppear;
- (void)channelViewDidAppear;
- (void)channelViewWillDisappear;
- (void)channelViewDidDisappear;
- (BOOL)slidingScrollViewShouldScrollWithPanGestureRecognizer:(id)a0;
- (unsigned long long)canLeftSlideToUserPageWithReason:(id *)a0;
- (BOOL)channelShouldHandleTransition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (id)channelTransition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)p_recoverPureModePlayInteractionIfNeed;
- (BOOL)channelPlayInteractionNeedPureMode;
- (void)p_pureModePlayInteractionIfNeed;
- (void)homepageSkylight:(id)a0 updateState:(long long)a1 withAnimate:(BOOL)a2 completion:(id /* block */)a3;
- (void)homepageSkylight:(id)a0 updateExpandedUIConfig:(id)a1 withAnimate:(BOOL)a2 completion:(id /* block */)a3;
- (id)getCurrentHPChannelSkylightUndertakeHostContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getHPChannelTopContainerFrame;
- (void)channelDidLoadPageViewController:(id)a0;
- (void)channel:(id)a0 didUpdateSkylight:(id)a1;
- (void)channel:(id)a0 bindPrivateConfig:(id)a1;
- (void)tryLoadSkylightContainerWithType:(id)a0;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;

@end
