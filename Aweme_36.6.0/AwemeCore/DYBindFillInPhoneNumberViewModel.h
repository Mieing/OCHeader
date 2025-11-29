@class NSString, DYBindPhoneHelperInstance, NSDictionary;

@interface DYBindFillInPhoneNumberViewModel : AWEBaseViewModel

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property BOOL shouldShowNextPage;
@property (retain, nonatomic) DYBindPhoneHelperInstance *bindHelper;
@property (retain, nonatomic) NSDictionary *trackParams;

+ (id)checkValidPhoneNumber:(id)a0;

- (void)handleNextAction:(id)a0;
- (id)uidType;
- (void)trackBindVerifyClickWithClickType:(id)a0 error:(id)a1;
- (void)handlePhoneNumberChange:(id)a0;
- (id)sendCodeIfNeeded:(id)a0;
- (void)trackSendCodeResult:(id)a0 phoneNumber:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
