@class NSError, FBSDKErrorRecoveryAttempter;
@protocol FBSDKGraphErrorRecoveryProcessorDelegate;

@interface FBSDKGraphErrorRecoveryProcessor : NSObject {
    FBSDKErrorRecoveryAttempter *_recoveryAttempter;
    NSError *_error;
}

@property (retain, nonatomic) id<FBSDKGraphErrorRecoveryProcessorDelegate> delegate;

- (void)dealloc;
- (BOOL)processError:(id)a0 request:(id)a1 delegate:(id)a2;
- (void)displayAlertWithRecoverySuggestion:(id)a0 recoveryOptionsTitles:(id)a1;
- (void)displayAlertWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2;
- (void)didPresentErrorWithRecovery:(BOOL)a0 contextInfo:(void *)a1;
- (void).cxx_destruct;

@end
