@class TTAccountTicketGuardAttestConfig, NSString, TTAccountTicketGuardSecUidConfig, TTAccountTicketGuardTokenConfig;

@interface TTAccountTicketGuardSettings : NSObject <BDTGConfigProtocol>

@property (retain) TTAccountTicketGuardTokenConfig *tokenConfig;
@property (retain) TTAccountTicketGuardSecUidConfig *secUidConfig;
@property (retain) TTAccountTicketGuardAttestConfig *attestConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultTicketGuardConfig;
+ (id)defaultSecUserIdGuardConfig;
+ (id)defaultAttestionConfig;
+ (id)defaultTokenGuardPath;
+ (id)defaultExcludeTokenGuardPathPrefixes;
+ (id)defaultSensitiveExcludeTokenGuardPaths;
+ (id)sharedInstance;

- (BOOL)enableFullPathTrack;
- (BOOL)enableSymmetricEncryption;
- (BOOL)enableForceLoadCert;
- (BOOL)enableKeyAttestation;
- (long long)keyAttestationInitialDelay;
- (long long)keyAttestationMaxAttempts;
- (long long)keyAttestationRetryDelay;
- (void)compensationAttestSignIfNeeded:(id)a0;
- (BOOL)keyAttestationEnableTrackPreSucc;
- (BOOL)keyAttestationDisableErrorRetryOptimize;
- (id)enableTeePubKeyPathPrefix;
- (BOOL)enableIterationHeaderOptimize;
- (BOOL)enableGetTicketUpdateServerCertSN;
- (BOOL)enableSignTimeOpt;
- (BOOL)pathEnableSymmetricEncryption:(id)a0;
- (BOOL)enableNetworkDelegate;
- (void)requestForJSONWithPath:(id)a0 method:(id)a1 params:(id)a2 extraGetParams:(id)a3 needCommonParams:(BOOL)a4 follow302Redirect:(BOOL)a5 needDispatch:(BOOL)a6 headerField:(id)a7 needHandlePictureVerify:(BOOL)a8 callback:(id /* block */)a9;
- (id)passportTokenGuardPaths;
- (BOOL)accountEnableEventTrack:(id)a0 params:(id)a1;
- (BOOL)initializeStorage;
- (void)netFilterMonitorDuration:(id)a0 logID:(id)a1 startTimestamp:(double)a2 isRequestFilter:(BOOL)a3;
- (void)refreshWithSettings:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)domain;

@end
