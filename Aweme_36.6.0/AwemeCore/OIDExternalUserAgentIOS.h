@class NSString, ASWebAuthenticationSession, SFSafariViewController, SFAuthenticationSession, UIViewController;
@protocol OIDExternalUserAgentSession;

@interface OIDExternalUserAgentIOS : NSObject <SFSafariViewControllerDelegate, ASWebAuthenticationPresentationContextProviding, OIDExternalUserAgent> {
    UIViewController *_presentingViewController;
    BOOL _prefersEphemeralSession;
    BOOL _externalUserAgentFlowInProgress;
    id<OIDExternalUserAgentSession> _session;
    SFSafariViewController *_safariVC;
    SFAuthenticationSession *_authenticationVC;
    ASWebAuthenticationSession *_webAuthenticationVC;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPresentingViewController:(id)a0 prefersEphemeralSession:(BOOL)a1;
- (BOOL)presentExternalUserAgentRequest:(id)a0 session:(id)a1;
- (void)dismissExternalUserAgentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)safariViewControllerDidFinish:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cleanUp;
- (id)initWithPresentingViewController:(id)a0;
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;

@end
