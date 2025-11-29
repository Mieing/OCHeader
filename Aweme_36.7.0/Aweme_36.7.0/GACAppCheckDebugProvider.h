@class NSString;
@protocol GACAppCheckDebugProviderAPIServiceProtocol;

@interface GACAppCheckDebugProvider : NSObject <GACAppCheckProvider>

@property (readonly, nonatomic) id<GACAppCheckDebugProviderAPIServiceProtocol> APIService;
@property (readonly, copy, nonatomic) NSString *debugTokenEnvValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getTokenWithLimitedUse:(BOOL)a0 completion:(id /* block */)a1;
- (void)getTokenWithCompletion:(id /* block */)a0;
- (void)getLimitedUseTokenWithCompletion:(id /* block */)a0;
- (id)initWithAPIService:(id)a0;
- (id)localDebugToken;
- (id)currentDebugToken;
- (id)initWithServiceName:(id)a0 resourceName:(id)a1 baseURL:(id)a2 APIKey:(id)a3 requestHooks:(id)a4;
- (void).cxx_destruct;

@end
