@class NSMutableArray, NSHashTable;

@interface AWEMVDataPluginCenter : NSObject

@property (retain, nonatomic) NSMutableArray *internalPlugins;
@property (retain, nonatomic) NSHashTable *externalPlugins;
@property (retain, nonatomic) NSHashTable *dataControllers;

+ (Class)aAWEPadBizUIAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)sharedInstance;

- (id)aAWEPadBizUIAdapter;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)attachPluginsForDataController:(id)a0;
- (id)pluginsForDataController:(id)a0;
- (id)pluginClassArrayForDataController:(id)a0;
- (id)lazyGetInternalPluginByClassName:(id)a0;
- (id)commonPluginClassArrayForDataController:(id)a0;
- (void)registerExternalPlugins:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
