@class NSString, DYRouterModel;

@interface DYReBindNotChineseMainLandFillInOldPhoneNumberViewModel : AWEBaseViewModel

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property BOOL shouldShowNextPage;
@property BOOL shouldShowNewPhoneNumberPage;
@property (retain) DYRouterModel *context;

+ (id)checkValidPhoneNumber:(id)a0;
+ (id)checkIsSafe:(id)a0;
+ (void)trackSafeResult:(BOOL)a0;
+ (id)sendCodeIfNeeded:(id)a0 ticketModel:(id)a1 extraPrams:(id)a2;

- (void)handleNextAction:(id)a0;
- (void)handlePhoneNumberChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;

@end
