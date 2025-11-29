@class NSArray, NSString;
@protocol AWEHPHomeContainerViewControllerProtocol;

@interface AWEHPHomeContainerViewControllerManager : AWEShellControllerManager <AWEHPHomeContainerViewControllerLifeCycle>

@property (weak, nonatomic) id<AWEHPHomeContainerViewControllerProtocol> feedContainer;
@property (copy, nonatomic) NSArray *controllerNames;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEStudioDOUYINSSAdapterClass;
+ (Class)aAWEMainModuleDOUYINLGAdapterClass;

- (id)classNameArray;
- (long long)hpAutorotateSupportType;
- (id)aAWEPadSplitScreenAdapter;
- (BOOL)hpSlidingScrollViewShouldScrollWithPanGestureRecognizer:(id)a0 reason:(id *)a1;
- (id)hpTransitionDestinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)hpRefreshPanGestureRecognizerShouldBegin:(id)a0 reason:(id *)a1;
- (BOOL)hpDisableFullscreenPopTransition;
- (BOOL)hpHandleTabBarDidSingleClick;
- (BOOL)hpHandleTabBarDidDoubleClick;
- (BOOL)hpHandleTabBarDidLongPress;
- (BOOL)hpShouldForbidTabBarDoubleClick;
- (BOOL)hpTapGestureRecognizer:(id)a0 shouldReceiveSingleClickTouch:(id)a1;
- (unsigned long long)hpCanLeftSlideToUserPageWithPan:(id)a0 reason:(id *)a1;
- (BOOL)hpIsShowInteractiveAnimation;
- (BOOL)hpIsShowCaptionBubble;
- (BOOL)hpCanShowAdvancedYellowdot;
- (BOOL)hpCantUpdateThemeInScrollView;
- (id)aAWEStudioDOUYINSSAdapter;
- (id)initWithFeedContainer:(id)a0;
- (id)aAWEMainModuleDOUYINLGAdapter;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
