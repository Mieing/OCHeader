@class NSString, NSMutableDictionary;

@interface OpenInterfaceLibrary : NSObject

@property (retain, nonatomic) NSMutableDictionary *interfaceCache;
@property (retain, nonatomic) NSMutableDictionary *pluginCache;
@property (retain, nonatomic) NSString *authCode;
@property void *router;

+ (id)getInstance:(id)a0;
+ (id)getInstance;

- (id)getInterface:(id)a0 error:(id *)a1;
- (id)translateProtocolName:(id)a0;
- (id)translateProtocolNameToPluginName:(id)a0;
- (BOOL)loadPlugin:(Class)a0 loadDependency:(BOOL)a1 erroInfo:(id *)a2;
- (BOOL)checkDependency:(Class)a0 loadDependencyOption:(long long)a1 errorInfo:(id *)a2;
- (id)getInterfaceRaw:(id)a0 errorInfo:(id *)a1;
- (Class)getMetaClassFromPluginName:(id)a0;
- (Class)getMetaClassFromInterface:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)getInterface:(id)a0;

@end
