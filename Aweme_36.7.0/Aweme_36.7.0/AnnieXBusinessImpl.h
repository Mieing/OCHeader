@class NSString;

@interface AnnieXBusinessImpl : NSObject <BDXBusinessProtocol, BDXServiceProtocol, BDXContainerLifecycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createService;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)_aweLazyRegisterLoad;
+ (unsigned long long)serviceType;

- (void)containerWillDestory:(id)a0;
- (void)containerWillConstructKitView:(id)a0 source:(long long)a1;
- (void)containerWillStartLoading:(id)a0;
- (void)loadURL:(id)a0 container:(id)a1 context:(id)a2;
- (id)willResolveScheme:(id)a0 context:(id)a1;
- (void)didResolveScheme:(id)a0 schemaModel:(id)a1 schemaClazz:(Class)a2 context:(id)a3;
- (id)localMethods;

@end
