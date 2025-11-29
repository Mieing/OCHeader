@class NSDictionary, NSArray;

@interface TTAccountTicketGuardTokenConfig : NSObject

@property (copy, nonatomic) NSDictionary *tokenGuardConfig;
@property (readonly, nonatomic) BOOL enableTokenGuard;
@property (readonly, nonatomic) BOOL enableTokenLaunch;
@property (readonly, copy, nonatomic) NSArray *tokenGuardPaths;
@property (readonly, copy, nonatomic) NSArray *tokenGuardPathPrefix;
@property (readonly, copy, nonatomic) NSArray *excludeTokenGuardPaths;
@property (readonly, copy, nonatomic) NSArray *excludeTokenGuardPathPrefix;
@property (readonly, copy, nonatomic) NSArray *excludeGetTokenDomains;
@property (readonly, copy, nonatomic) NSArray *excludeGetTokenPaths;
@property (readonly, copy, nonatomic) NSArray *excludeGetTokenPrefix;
@property (readonly, copy, nonatomic) NSArray *enableTeePubKeyPathPrefix;
@property (readonly, copy, nonatomic) NSArray *passportTokenGuardPaths;
@property (readonly, nonatomic) BOOL disableTsSignUpdateTagQueue;
@property (readonly, nonatomic) BOOL ticketGuardStorageOptimize;
@property (readonly, nonatomic) BOOL tokenGuardClientCertOptimize;
@property (readonly, nonatomic) BOOL tokenGuardFullPathTrack;
@property (readonly, nonatomic) BOOL enableTicketGuardSaveBackup;
@property (readonly, nonatomic) BOOL enableTicketGuardSaveBackupFile;
@property (readonly, nonatomic) BOOL enableTicketGuardSaveBackupSplit;
@property (readonly, nonatomic) BOOL enableTicketGuardSaveBackupAuto;
@property (readonly, nonatomic) BOOL enableIterationHeaderOptimize;
@property (readonly, nonatomic) BOOL enableTokenCheckSkip;
@property (readonly, nonatomic) BOOL enableStartUpOptimize;
@property (readonly, nonatomic) BOOL enableSignTimeOpt;
@property (readonly, nonatomic) BOOL useTeeReeConfig;
@property (readonly, copy, nonatomic) NSArray *teeTokenGaurdPaths;
@property (readonly, copy, nonatomic) NSArray *teeTokenGuardPathPrefix;
@property (readonly, copy, nonatomic) NSArray *teeExcludeTokenGuardPaths;
@property (readonly, copy, nonatomic) NSArray *teeExcludeTokenGuardPathPrefix;
@property (readonly, copy, nonatomic) NSArray *reeTokenGaurdPaths;
@property (readonly, copy, nonatomic) NSArray *reeTokenGuardPathPrefix;
@property (readonly, copy, nonatomic) NSArray *reeExcludeTokenGuardPaths;
@property (readonly, copy, nonatomic) NSArray *reeExcludeTokenGuardPathPrefix;
@property (readonly, nonatomic) BOOL enableSymmetricEncryption;
@property (readonly, copy, nonatomic) NSArray *symmetricEncryptionPath;
@property (readonly, copy, nonatomic) NSArray *symmetricEncryptionExcludePath;
@property (readonly, copy, nonatomic) NSArray *symmetricEncryptionExcludePathPrefix;
@property (readonly, copy, nonatomic) NSArray *symmetricEncryptionPrefixPath;
@property (readonly, nonatomic) BOOL enableStandardHmac;
@property (readonly, nonatomic) BOOL disableSymmetricEncryptionOptimize;
@property (readonly, nonatomic) BOOL enableGetTicketUpdateServerCertSN;
@property (readonly, nonatomic) BOOL enableForceLoadCert;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
