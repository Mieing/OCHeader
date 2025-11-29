@class NSString;

@interface AWEU18VerificationManager : NSObject <AWEU18VerificationManager>

@property (nonatomic) BOOL inU14VerifyProgress;
@property (copy, nonatomic) id /* block */ u14VerifyCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didSyncCertificationStatus:(id)a0;
- (void)p_handleEditProfileVerificationSucceed:(BOOL)a0;
- (BOOL)u14ProfileEditVerifyEnabled;
- (void)gotoVerifyIfNeededWithBirthday:(id)a0 fromViewController:(id)a1 completion:(id /* block */)a2;
- (void)resetVerifyProgressAndShowHintIfNeeded;
- (void)showFastEntryAlertWithConfirmBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)commonInit;

@end
