@class NSMutableDictionary;

@interface AWEHPTabGuidePluginManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *tabIDToRegisterModels;
@property (retain, nonatomic) NSMutableDictionary *tabIDToPlugins;

+ (id)sharedInstance;

- (void)registerHPTabGuidePlugin:(id /* block */)a0;
- (void)callComponentDidShowWithInfo:(id)a0 context:(id)a1 container:(id)a2;
- (void)callComponentDidClickWithInfo:(id)a0 context:(id)a1 container:(id)a2;
- (id)callGetCustomRouterParamsWithInfo:(id)a0 urlString:(id)a1 context:(id)a2;
- (id)callGetCustomTrackParamsWithInfo:(id)a0 context:(id)a1;
- (BOOL)checkRegisterModel:(id)a0;
- (void)enumeratePluginsForTabID:(id)a0 usingBlock:(id /* block */)a1;
- (id)getPluginsWithTabID:(id)a0;
- (void).cxx_destruct;

@end
