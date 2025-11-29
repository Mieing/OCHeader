@interface AWEPostPageShootPositionElement : AWEPostPageElement

@property (nonatomic) BOOL hasAppear;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)publishViewModel;
- (BOOL)forceReceiveEvents;
- (BOOL)isEnabled;
- (void)viewDidAppear:(BOOL)a0;

@end
