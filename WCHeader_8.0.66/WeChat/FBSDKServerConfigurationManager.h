@interface FBSDKServerConfigurationManager : NSObject

+ (void)initialize;
+ (void)clearCache;
+ (id)cachedServerConfiguration;
+ (void)loadServerConfigurationWithCompletionBlock:(id /* block */)a0;
+ (void)processLoadRequestResponse:(id)a0 error:(id)a1 appID:(id)a2;
+ (id)requestToLoadServerConfiguration:(id)a0;
+ (id)_defaultServerConfigurationForAppID:(id)a0;
+ (void)_didProcessConfigurationFromNetwork:(id)a0 appID:(id)a1 error:(id)a2;
+ (id)_parseDialogConfigurations:(id)a0;
+ (BOOL)_serverConfigurationTimestampIsValid:(id)a0;
+ (id /* block */)_wrapperBlockForLoadBlock:(id /* block */)a0;

- (id)init;

@end
