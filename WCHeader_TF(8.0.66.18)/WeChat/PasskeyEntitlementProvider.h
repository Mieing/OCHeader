@class NSString;
@protocol MMUIViewControllerDelegate;

@interface PasskeyEntitlementProvider : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding>

@property (copy, nonatomic) id /* block */ finalBlock;
@property (weak, nonatomic) id<MMUIViewControllerDelegate> vcDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)signUpPasskeyFromUserID:(id)a0 userName:(id)a1 completion:(id /* block */)a2;
- (void)_iOS16_signUpPasskeyFromUserID:(id)a0 userName:(id)a1 completion:(id /* block */)a2;
- (void)signInFromChallenge:(id)a0 preferImmediatelyAvailableCredentials:(BOOL)a1 completion:(id /* block */)a2;
- (void)_iOS16_signInFromChallenge:(id)a0 preferImmediatelyAvailableCredentials:(BOOL)a1 completion:(id /* block */)a2;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (id)presentationAnchorForAuthorizationController:(id)a0;
- (void).cxx_destruct;

@end
