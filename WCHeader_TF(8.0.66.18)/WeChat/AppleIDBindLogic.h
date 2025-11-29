@class NSString, ASAuthorizationAppleIDCredential;
@protocol AppleIDBindLogicDelegate;

@interface AppleIDBindLogic : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding>

@property (retain, nonatomic) ASAuthorizationAppleIDCredential *appleIDCredential;
@property (weak, nonatomic) id<AppleIDBindLogicDelegate> delegate;
@property (readonly, nonatomic) BOOL authorizedFromAppleSucceed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAppleIDBound;

- (void)requestAuthorizeFromApple;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (id)presentationAnchorForAuthorizationController:(id)a0;
- (void)bindAppleID;
- (void)unbindAppleID;
- (void)updateAppleIDBindStatusInSetting:(BOOL)a0;
- (void)appleIDAuthorize;
- (void)appleIDAuthorizeWithIDCRedirectCount:(unsigned long long)a0;
- (void)callAppleIDAuthorizeFailDelegateWithError:(id)a0 andResponse:(id)a1;
- (id)generateAppleIDErrorFromError:(id)a0 andResponse:(id)a1;
- (void).cxx_destruct;

@end
