@class NSString, FBSDKAccessToken, FBSDKKeychainStore;

@interface FBSDKAccessTokenCache : NSObject <FBSDKAccessTokenCaching> {
    FBSDKKeychainStore *_keychainStore;
}

@property (copy, nonatomic) FBSDKAccessToken *accessToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)clearCache;
- (void).cxx_destruct;

@end
