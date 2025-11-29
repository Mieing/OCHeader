@class NSString, WCFinderSDKAuthorViewController;

@interface OpenFinderBindHandler : OpenFinderBaseHandler <WCFinderSDKAuthorViewControllerDelegate>

@property (weak, nonatomic) WCFinderSDKAuthorViewController *bindVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createOpenUrl;
- (void)cancelHandler;
- (void)onAuthDidFail;
- (void)onAuthDidCancel;
- (void)onAuthDidSuccessWithResult:(id)a0;
- (void)finderSDKAuthorViewControllerDenyAction:(id)a0;
- (id)extMsg;
- (void)finderSDKAuthorViewController:(id)a0 comfirmSuccessful:(id)a1;
- (void)finderSDKAuthorViewController:(id)a0 comfirmFailure:(id)a1;
- (void).cxx_destruct;

@end
