@interface AWEIMChapterVideoComponent : AWEIMFlexComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_createPresenter;
- (void)p_updateProps;
- (id)chapterShareMessage;
- (id)p_mediaBackgroundColor:(id)a0;
- (void)coverDidTapped;

@end
