@class NSDictionary, NSArray;

@interface TTAccountTicketGuardAttestConfig : NSObject

@property (copy, nonatomic) NSDictionary *tokenGuardConfig;
@property (copy, nonatomic) NSDictionary *attestationConfig;
@property (readonly, nonatomic) BOOL enableKeyAttestation;
@property (readonly, nonatomic) BOOL enableLoginKeyAttestation;
@property (readonly, nonatomic) long long keyAttestationInitialDelay;
@property (readonly, nonatomic) long long keyAttestationRetryDelay;
@property (readonly, nonatomic) long long keyAttestationMaxAttempts;
@property (readonly, nonatomic) BOOL keyAttestationEnableInvalidate;
@property (readonly, nonatomic) BOOL keyAttestationEnableTrackPreSucc;
@property (readonly, nonatomic) BOOL keyAttestationDisableErrorRetryOptimize;
@property (readonly, nonatomic) BOOL enableAttestSign;
@property (readonly, nonatomic) long long secTimeRefreshWindow;
@property (readonly, nonatomic) long long attestTsSignCompensationDelay;
@property (readonly, nonatomic) long long attestSignMinRefreshInterval;
@property (readonly, nonatomic) long long secTimeRequestMinInterval;
@property (readonly, copy, nonatomic) NSArray *attestSignPath;
@property (readonly, copy, nonatomic) NSArray *attestSignPathPrefix;
@property (readonly, copy, nonatomic) NSArray *attestSignExcludePath;
@property (readonly, copy, nonatomic) NSArray *attestSignExcludePathPrefix;

- (id)initWithConfig:(id)a0 attestationConfig:(id)a1;
- (void).cxx_destruct;

@end
