@class NSArray, NSString, AWEIMComponentManager;

@interface AWEIMMessageTabNaviBubbleComponent : AWEIMComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMMessageTabNaviBubbleInterface>

@property (retain, nonatomic) NSArray *bubbleComponents;
@property (nonatomic) BOOL hasShownBubble;
@property (nonatomic) BOOL blockedBySplash;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (BOOL)isNaviGuideBubbleDisplaying;
- (void)p_didSplashDisappear:(id)a0;
- (void)p_arrangementBubbles;
- (void).cxx_destruct;

@end
