@interface AWEGrouponTaskCommonDialog : AWEGrouponBaseTask

+ (void)_aweLazyRegisterStaticLoad;

- (id)uiComponentID;
- (id)uiComponentType;
- (BOOL)coldStartLimit;
- (long long)useDefaultRule;
- (void)executeWithContext:(id)a0;
- (double)priority;
- (id)taskType;

@end
