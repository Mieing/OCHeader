@class NSString;

@interface BDUGAccountAuthApple : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding>

@property (copy, nonatomic) id /* block */ authCompleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)fetchAuthInfoWithCompleteblock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (id)presentationAnchorForAuthorizationController:(id)a0;
- (void)getCredentialStateForUserID:(id)a0 completion:(id /* block */)a1;

@end
