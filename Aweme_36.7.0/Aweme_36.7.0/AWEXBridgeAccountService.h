@class NSString;

@interface AWEXBridgeAccountService : NSObject <BDXBridgeAccountServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBDXBridgeLoginAdapterClass;

- (id)avatarURLString;
- (void)loginWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)logoutWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasLoggedIn;
- (id)secureUserID;
- (id)boundPhone;
- (id)aAWEBDXBridgeLoginAdapter;
- (id)shortID;
- (id)nickname;
- (id)userID;
- (id)uniqueID;

@end
