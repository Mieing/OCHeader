@class NSArray;

@interface ArgusLynxSecurityHandler : NSObject

@property (nonatomic) BOOL hasRegister;
@property (retain, nonatomic) NSArray *innerFeIdStorage;

+ (void)ensureSetup;
+ (id)sharedInstance;

- (void)updateLynxSignVerifyPublicKeys:(id)a0 feIdType:(long long)a1 updateFrom:(id)a2;
- (BOOL)onPiperInvoked:(id)a0 method:(id)a1 param:(id)a2 url:(id)a3;
- (id)stringToNSUIntegerLittleEndianString:(id)a0;
- (id)didTASMVerified:(id)a0;
- (BOOL)enableVerification;
- (void).cxx_destruct;
- (id)init;

@end
