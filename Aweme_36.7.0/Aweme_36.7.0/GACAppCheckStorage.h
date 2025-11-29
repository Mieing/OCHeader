@class NSString, GULKeychainStorage;

@interface GACAppCheckStorage : NSObject <GACAppCheckStorageProtocol>

@property (readonly, nonatomic) NSString *tokenKey;
@property (readonly, nonatomic) GULKeychainStorage *keychainStorage;
@property (readonly, nonatomic) NSString *accessGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTokenKey:(id)a0 accessGroup:(id)a1;
- (id)initWithTokenKey:(id)a0 keychainStorage:(id)a1 accessGroup:(id)a2;
- (void).cxx_destruct;
- (id)storeToken:(id)a0;
- (id)setToken:(id)a0;
- (id)getToken;

@end
