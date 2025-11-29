@class NSString, HunterContainerViewModel;

@interface HunterPageBusinessImpl : NSObject <BDXBusinessProtocol, BDXServiceProtocol>

@property (retain, nonatomic) HunterContainerViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createService;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)_aweLazyRegisterLoad;
+ (unsigned long long)serviceType;

- (void)loadURL:(id)a0 container:(id)a1 context:(id)a2;
- (id)willResolveScheme:(id)a0 context:(id)a1;
- (void)didResolveScheme:(id)a0 schemaModel:(id)a1 schemaClazz:(Class)a2 context:(id)a3;
- (id)p_generateDynamicPatchModelWithParams:(id)a0;
- (void)p_trackBeforeLoadExceptionIfNeed;
- (void)p_setupViewModelWithParams:(id)a0 context:(id)a1;
- (void)p_pluginStartInit;
- (void).cxx_destruct;

@end
