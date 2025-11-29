@class GTMKeychainStore;

@interface GIDAuthStateMigration : NSObject

@property (retain, nonatomic) GTMKeychainStore *keychainStore;

+ (id)passwordForService:(id)a0;

- (id)initWithKeychainStore:(id)a0;
- (id)extractAuthSessionWithTokenURL:(id)a0 callbackPath:(id)a1;
- (void)migrateIfNeededWithTokenURL:(id)a0 callbackPath:(id)a1 keychainName:(id)a2 isFreshInstall:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
