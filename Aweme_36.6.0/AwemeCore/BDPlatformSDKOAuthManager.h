@class UIWindow, UIViewController;

@interface BDPlatformSDKOAuthManager : NSObject

@property (retain, nonatomic) UIWindow *oauthWindow;
@property (retain, nonatomic) UIViewController *authViewController;
@property (retain, nonatomic) UIWindow *keyWindow;

+ (void)authorizeWithConsumerOAuthReq:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
+ (id)sharedOAuthMgr;

- (void)authorizeWithConsumerOAuthReq:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)applicationDidEnterBackgroundInOAuthMgr:(id)a0;
- (void)doHideOAuthViewController;
- (void)endObservationDidAppEnterBackground;
- (void)startObservationDidAppEnterBackground;
- (void).cxx_destruct;
- (void)dealloc;

@end
