@class NSString, FBLPromise;
@protocol GACAppCheckSettingsProtocol, GACAppCheckProvider, GACAppCheckTokenDelegate, GACAppCheckTokenRefresherProtocol, GACAppCheckStorageProtocol;

@interface GACAppCheck : NSObject <GACAppCheckProtocol>

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) id<GACAppCheckProvider> appCheckProvider;
@property (readonly, nonatomic) id<GACAppCheckStorageProtocol> storage;
@property (readonly, nonatomic) id<GACAppCheckSettingsProtocol> settings;
@property (readonly, weak, nonatomic) id<GACAppCheckTokenDelegate> tokenDelegate;
@property (readonly, nonatomic) id<GACAppCheckTokenRefresherProtocol> tokenRefresher;
@property (retain, nonatomic) FBLPromise *ongoingRetrieveOrRefreshTokenPromise;

- (void)periodicTokenRefreshWithCompletion:(id /* block */)a0;
- (id)initWithServiceName:(id)a0 appCheckProvider:(id)a1 storage:(id)a2 tokenRefresher:(id)a3 settings:(id)a4 tokenDelegate:(id)a5;
- (id)retrieveOrRefreshTokenForcingRefresh:(BOOL)a0;
- (id)limitedUseToken;
- (id)createRetrieveOrRefreshTokenPromiseForcingRefresh:(BOOL)a0;
- (id)getCachedValidTokenForcingRefresh:(BOOL)a0;
- (void)tokenForcingRefresh:(BOOL)a0 completion:(id /* block */)a1;
- (void)limitedUseTokenWithCompletion:(id /* block */)a0;
- (id)initWithServiceName:(id)a0 resourceName:(id)a1 appCheckProvider:(id)a2 settings:(id)a3 tokenDelegate:(id)a4 keychainAccessGroup:(id)a5;
- (void).cxx_destruct;
- (id)refreshToken;

@end
