@class NSString, NSSet;

@interface GTMAppAuth.KeychainWrapper : _TtCs12_SwiftObject <GTMKeychainHelper> {
    void /* function */ accountName;
    void /* function */ keychainAttributes;
}

@property (nonatomic, readonly) NSString *accountName;
@property (nonatomic, readonly) NSSet *keychainAttributes;

- (id)initWithKeychainAttributes:(id)a0;
- (id)keychainQueryForService:(id)a0;
- (BOOL)setPasswordWithData:(id)a0 forService:(id)a1 accessibility:(id)a2 error:(id *)a3;
- (id)passwordDataForService:(id)a0 error:(id *)a1;
- (BOOL)setPassword:(id)a0 forService:(id)a1 accessibility:(id)a2 error:(id *)a3;
- (BOOL)removePasswordForService:(id)a0 error:(id *)a1;
- (id)passwordForService:(id)a0 error:(id *)a1;

@end
