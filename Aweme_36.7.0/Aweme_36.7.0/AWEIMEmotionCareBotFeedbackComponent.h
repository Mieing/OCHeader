@interface AWEIMEmotionCareBotFeedbackComponent : AWEIMFlexComponent

@property (nonatomic) long long feedbackType;
@property (nonatomic) unsigned long long visibleOption;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)p_addKVO;
- (void)p_createPresenterIfNeed;
- (void)p_updateProps;
- (void)p_tryTrackShowFeedback;
- (void)p_trackClickFeedback:(id)a0;

@end
