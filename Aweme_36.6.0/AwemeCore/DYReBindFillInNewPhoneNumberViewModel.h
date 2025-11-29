@class NSString, DYRouterModel, NSDictionary, DYBindPhoneHelperInstance;

@interface DYReBindFillInNewPhoneNumberViewModel : AWEBaseViewModel

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property BOOL shouldShowNextPage;
@property (retain) DYRouterModel *context;
@property (retain, nonatomic) DYBindPhoneHelperInstance *bindHelper;
@property BOOL shouldBack;
@property BOOL isSecondChance;
@property BOOL shouldDismissKeyboard;
@property (retain, nonatomic) NSDictionary *trackParams;

+ (id)checkValidPhoneNumber:(id)a0;

- (void)handlePhoneNumberChange:(id)a0;
- (void)handleNextAction:(id)a0 withExtraParams:(id)a1;
- (void)trackSubmit;
- (id)sendCodeIfNeeded:(id)a0 withExtraParams:(id)a1;
- (void)trackVerifyClickWithError:(id)a0;
- (void)trackSendSMSWithType:(long long)a0 error:(id)a1;
- (id)sendSMSCommonParamsWithType:(long long)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;

@end
