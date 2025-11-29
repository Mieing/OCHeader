@class UIViewController, NSString, FBSDKBridgeAPIRequest;
@protocol FBSDKURLOpening, FBSDKAuthenticationSession;

@interface FBSDKBridgeAPI : NSObject <FBSDKApplicationObserving, FBSDKContainerViewControllerDelegate, ASWebAuthenticationPresentationContextProviding> {
    FBSDKBridgeAPIRequest *_pendingRequest;
    id /* block */ _pendingRequestCompletionBlock;
    id<FBSDKURLOpening> _pendingURLOpen;
    id<FBSDKAuthenticationSession> _authenticationSession;
    id /* block */ _authenticationSessionCompletionHandler;
    BOOL _expectingBackground;
    BOOL _isRequestingSFAuthenticationSession;
    UIViewController *_safariViewController;
    BOOL _isDismissingSafariViewController;
    BOOL _isAppLaunched;
}

@property (class, readonly, nonatomic) FBSDKBridgeAPI *sharedInstance;

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (BOOL)application:(id)a0 openURL:(id)a1 sourceApplication:(id)a2 annotation:(id)a3;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)openURL:(id)a0 sender:(id)a1 handler:(id /* block */)a2;
- (void)openBridgeAPIRequest:(id)a0 useSafariViewController:(BOOL)a1 fromViewController:(id)a2 completionBlock:(id /* block */)a3;
- (void)openURLWithSafariViewController:(id)a0 sender:(id)a1 fromViewController:(id)a2 handler:(id /* block */)a3;
- (void)_openURLWithAuthenticationSession:(id)a0;
- (void)_setSessionCompletionHandlerFromHandler:(id /* block */)a0;
- (void)safariViewControllerDidFinish:(id)a0;
- (void)viewControllerDidDisappear:(id)a0 animated:(BOOL)a1;
- (BOOL)_handleBridgeAPIResponseURL:(id)a0 sourceApplication:(id)a1;
- (void)_cancelBridgeRequest;
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;
- (void).cxx_destruct;

@end
