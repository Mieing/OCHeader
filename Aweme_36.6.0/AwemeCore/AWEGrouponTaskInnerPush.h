@interface AWEGrouponTaskInnerPush : AWEGrouponBaseTask

+ (void)_aweLazyRegisterStaticLoad;

- (id)uiComponentID;
- (id)uiComponentType;
- (long long)useDefaultRule;
- (void)taskDiscarded;
- (void)executeWithContext:(id)a0;
- (double)priority;
- (id)triggerType;

@end
