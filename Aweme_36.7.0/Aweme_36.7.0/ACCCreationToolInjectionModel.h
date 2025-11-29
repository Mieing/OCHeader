@class NSString, NSMutableDictionary;

@interface ACCCreationToolInjectionModel : NSObject <AWEUltraCreationInjectComponentService, ACCRepoRegister, ACCRepoCreationToolInjectionData>

@property (retain, nonatomic) NSMutableDictionary *componentDic;
@property (retain, nonatomic) NSMutableDictionary *componentPluginDic;
@property (retain, nonatomic) NSMutableDictionary *descriptionDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;
+ (long long)repo_scope;

- (void)injectComponents:(id)a0 forPage:(unsigned long long)a1;
- (id)descriptionsForPage:(unsigned long long)a0;
- (id)componentsForPage:(unsigned long long)a0;
- (id)componentPluginsForPage:(unsigned long long)a0;
- (id)p_classForPage:(unsigned long long)a0 isPlugin:(BOOL)a1;
- (void)p_injectClasses:(id)a0 forPage:(unsigned long long)a1 isPlugin:(BOOL)a2;
- (void)injectComponentPlugins:(id)a0 forPage:(unsigned long long)a1;
- (void)injectComponentDescriptions:(id)a0 forPage:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
