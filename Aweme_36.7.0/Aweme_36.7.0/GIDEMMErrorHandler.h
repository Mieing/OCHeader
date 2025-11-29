@interface GIDEMMErrorHandler : NSObject {
    BOOL _pendingDialog;
}

+ (id)sharedInstance;

- (id)passcodeRequiredAlertWithCompletion:(id /* block */)a0;
- (id)appVerificationRequiredAlertWithURL:(id)a0 completion:(id /* block */)a1;
- (id)deviceNotCompliantAlertWithCompletion:(id /* block */)a0;
- (id)unableToAccessString;
- (id)deviceNotCompliantString;
- (id)okayString;
- (id)passcodeRequiredString;
- (id)settingsString;
- (id)appVerificationTitleString;
- (id)appVerificationTextString;
- (id)appVerificationActionString;
- (BOOL)handleErrorFromResponse:(id)a0 completion:(id /* block */)a1;
- (void)openURL:(id)a0;
- (id)keyWindow;
- (id)cancelString;

@end
