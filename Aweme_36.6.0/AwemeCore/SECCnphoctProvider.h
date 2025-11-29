@class SECKeyChainService;

@interface SECCnphoctProvider : NSObject

@property (retain, nonatomic) SECKeyChainService *keychainService;

+ (id)shared;

- (id)cnphoct;
- (void).cxx_destruct;
- (id)keychain;

@end
