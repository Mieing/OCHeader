@class NSCache;

@interface IESGCPUserProfileManager : NSObject

@property (retain, nonatomic) NSCache *cache;
@property (nonatomic) BOOL privateKeyRefReuse;
@property (nonatomic) struct __SecKey { } *privateKeyRef;

+ (id)sharedInstance;

- (void)getUserProfileWithGameID:(id)a0 needCheckPersonalRecommendSwitchOn:(BOOL)a1 completion:(id /* block */)a2;
- (void)reportGetUserProfileTracker:(id)a0;
- (id)rsaPublicKey;
- (id)decryptUserProfileWithResponse:(id)a0;
- (struct __SecKey { } *)addPrivateKeyRef;
- (id)rsaPrivateKey;
- (void).cxx_destruct;

@end
