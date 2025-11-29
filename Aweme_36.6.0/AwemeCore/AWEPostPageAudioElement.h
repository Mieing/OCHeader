@interface AWEPostPageAudioElement : AWEPostPageElement

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)p_handleOfflineMusicIfNeeded;
- (void)checkOfflineMusic;
- (id)service;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
