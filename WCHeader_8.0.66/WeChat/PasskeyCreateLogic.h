@class NSString, PasskeyEntitlementProvider, NSData, NSMutableDictionary;
@protocol PasskeyCreateDelegate;

@interface PasskeyCreateLogic : WCAccountBaseControlLogic

@property (retain, nonatomic) NSData *passkeyUserID;
@property (retain, nonatomic) NSString *passkeyUserName;
@property (retain, nonatomic) PasskeyEntitlementProvider *provider;
@property (retain, nonatomic) NSString *verifyID;
@property (nonatomic) BOOL passkeyExists;
@property (nonatomic) BOOL passkeySwitch;
@property (copy, nonatomic) id /* block */ onCreateFinishedBlock;
@property (retain, nonatomic) NSMutableDictionary *reportParams;
@property (weak, nonatomic) id<PasskeyCreateDelegate> delegate;

- (id)init;
- (void)updatePasskeySwitch:(BOOL)a0;
- (void)startCreate;
- (void)startCreateWithFinishedBlock:(id /* block */)a0 reportParams:(id)a1;
- (void)requestUserIDAndUsernameWithTicket:(id)a0;
- (void)verifyWxPassword;
- (void)requestAuthorizeFromDomain;
- (void)passkeyRegisterWithRawData:(id)a0 credentialID:(id)a1;
- (void)passkeyDelete;
- (void)requestBindPasskeyWithRequest:(id)a0 successBlock:(id /* block */)a1;
- (void)updatePasskeyCredentialId:(id)a0;
- (void)reportSysPullEndWithResult:(int)a0;
- (void)reportCustomEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
