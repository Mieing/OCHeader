@class NSString;

@interface AWEUserServiceListener : NSObject <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)synchronizeCookiesWithExtension;
- (void)p_didFinishLogout;
- (id)init;
- (void)dealloc;

@end
