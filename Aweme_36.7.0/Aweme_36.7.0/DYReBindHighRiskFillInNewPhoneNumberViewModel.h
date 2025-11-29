@class NSString, DYRouterModel, DYBindPhoneHelperInstance;

@interface DYReBindHighRiskFillInNewPhoneNumberViewModel : AWEBaseViewModel

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property BOOL shouldShowNextPage;
@property (retain) DYRouterModel *context;
@property (retain, nonatomic) DYBindPhoneHelperInstance *bindHelper;

+ (id)checkValidPhoneNumber:(id)a0;

- (void)handleNextAction:(id)a0;
- (void)handlePhoneNumberChange:(id)a0;
- (id)sendCodeIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;

@end
