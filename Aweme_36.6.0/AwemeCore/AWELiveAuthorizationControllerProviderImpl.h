@class NSString, UIWindow;

@interface AWELiveAuthorizationControllerProviderImpl : NSObject <IESLiveAuthorizationControllerProvider>

@property (retain, nonatomic) UIWindow *authorizeWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showAuthorizeContentVCWithText:(id)a0 eventContext:(id)a1 completeBlock:(id /* block */)a2;
- (void)showAuthorizeRelationVCWithText:(id)a0 eventContext:(id)a1 completeBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
