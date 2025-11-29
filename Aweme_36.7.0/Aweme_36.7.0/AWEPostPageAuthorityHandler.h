@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageAuthorityHandler : NSObject <AWEPostPageAuthorityService>

@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)a0;
- (void)prepareAuthority;
- (void).cxx_destruct;

@end
