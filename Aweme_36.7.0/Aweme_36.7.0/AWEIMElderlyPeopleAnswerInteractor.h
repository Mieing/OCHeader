@interface AWEIMElderlyPeopleAnswerInteractor : AWEIMComponentBase

+ (BOOL)allExamDisableBySetting;
+ (void)__updateServerAnswerPassResultWithExamId:(long long)a0;
+ (BOOL)__examDisableBySettingForKey:(id)a0;
+ (void)__setRetryLimit:(long long)a0 examId:(long long)a1;
+ (void)__updateAnsweredCountWithExamId:(long long)a0;
+ (long long)__answeredCountWithExamId:(long long)a0;
+ (long long)__retryLimitForExamId:(long long)a0;
+ (long long)examStatusWithId:(long long)a0;
+ (void)openSafeExamPageWithInfo:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)p_viewDidAppear;
- (id)vcParent;
- (void)elderlyPeopleAnswerResultNoti:(id)a0;
- (id)init;
- (id)view;
- (id)conversation;

@end
