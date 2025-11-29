@class NSString, DYASecurityTicketModel, DYRouterModel, NSDictionary;

@interface DYReBindFillInOldPhoneNumberViewModel : AWEBaseViewModel

@property (copy) NSString *errorMessage;
@property BOOL enableNextButton;
@property BOOL shouldShowNextPage;
@property (copy) DYASecurityTicketModel *ticketModel;
@property (retain) DYRouterModel *context;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) NSString *clickType;

+ (id)checkValidPhoneNumber:(id)a0;
+ (id)checkIsSafe:(id)a0;
+ (id)sendCodeIfNeeded:(id)a0 isSafeMobile:(BOOL)a1;
+ (void)trackSafeResult:(BOOL)a0;

- (void)handleNextAction:(id)a0;
- (void)handlePhoneNumberChange:(id)a0;
- (void)trackOriginBindResultWithStatus:(id)a0 error:(id)a1;
- (void)trackOriginBindResultWithStatus:(id)a0 error:(id)a1 trustType:(id)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
