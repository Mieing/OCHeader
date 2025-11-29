@class NSString, AWEIMMessageAnimationBubblePresenter;

@interface AWEIMMessageAnimationBubbleComponent : AWEIMFlexComponent <AWEIMMessageListSlidingTaskAction>

@property (retain, nonatomic) AWEIMMessageAnimationBubblePresenter *animationBubblePresenter;
@property (nonatomic) BOOL shouldPlayAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)configAnimationPropWithMessage:(id)a0;
- (void)trackingModeChanged:(BOOL)a0;
- (void)playAnimationStatusChangeHandle;
- (id)p_getAnimationImageWithBubbleID:(id)a0 position:(id)a1 isSelf:(BOOL)a2;
- (void).cxx_destruct;

@end
