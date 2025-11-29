@class NSString, OIDAuthorizationRequest;
@protocol OIDExternalUserAgent;

@interface OIDAuthorizationSession : NSObject <OIDExternalUserAgentSession> {
    OIDAuthorizationRequest *_request;
    id<OIDExternalUserAgent> _externalUserAgent;
    id /* block */ _pendingauthorizationFlowCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)URL:(id)a0 matchesRedirectionURL:(id)a1;

- (void)didFinishWithResponse:(id)a0 error:(id)a1;
- (BOOL)shouldHandleURL:(id)a0;
- (BOOL)resumeExternalUserAgentFlowWithURL:(id)a0;
- (void)failExternalUserAgentFlowWithError:(id)a0;
- (void)presentAuthorizationWithExternalUserAgent:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)cancel;
- (void)cancelWithCompletion:(id /* block */)a0;

@end
