@interface AWEIMMessageInsertAnimationComponent : AWEIMFlexComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenterIfNeed;
- (void)p_updatePresenterIfNeed;

@end
