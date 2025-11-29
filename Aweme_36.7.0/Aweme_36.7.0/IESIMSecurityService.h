@class NSString;

@interface IESIMSecurityService : HTSService <IESIMSecurityService, AWETuringMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAWEUserRealNameVerifyStatusPassed;
- (void)showTwiceVerifyAlertView:(id)a0 cancelBlock:(id /* block */)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3 enterMethod:(id)a4;
- (BOOL)isDigitalWellbeingAlertShowing;
- (BOOL)shouldShowTeenModeAlert;
- (void)verificationCheck:(long long)a0 completion:(id /* block */)a1;
- (id)URLString:(id)a0 attachedSQRID:(id)a1;
- (BOOL)shouldInterruptRouteTrafficWithURL:(id)a0 bizToken:(id)a1;
- (void)showNewTwiceVerifyAlertView:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2 enterMethod:(id)a3;
- (void)showNewTwiceVerifyAlertViewIfNeeded:(id)a0 con:(id)a1 successCallBlock:(id /* block */)a2;
- (void)startRiskyMobileAuthFlow;
- (id)identityVerificationConfirmActionTitleForType:(unsigned long long)a0;
- (void)identityVerificationConfirmActionForType:(unsigned long long)a0 scene:(id)a1 ticket:(id)a2 extra:(id)a3;
- (void)identityVerificationConfirmActionForType:(unsigned long long)a0 scene:(id)a1 ticket:(id)a2 extra:(id)a3 checkCompletion:(id /* block */)a4 verifyCompletion:(id /* block */)a5;
- (void)securityCheckDidStart:(long long)a0;
- (void)securityCheckDidEnd:(long long)a0;
- (id)init;
- (void)dealloc;

@end
