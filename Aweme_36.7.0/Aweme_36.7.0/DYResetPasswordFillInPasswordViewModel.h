@class NSString;

@interface DYResetPasswordFillInPasswordViewModel : AWEBaseViewModel

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property BOOL shouldShowNextPage;

- (void)handleNextAction:(id)a0;
- (void)handlePasswordChange:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
