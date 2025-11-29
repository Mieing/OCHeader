@interface AWEPostPageAuthorityElement : AWEPostPageElement

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)contextDidReady;
- (id)service;
- (BOOL)isVisible;
- (BOOL)isEnabled;

@end
