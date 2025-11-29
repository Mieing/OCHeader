@interface AWEPostPageBubbleElement : AWEPostPageElement

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)service;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidAppear:(BOOL)a0;

@end
