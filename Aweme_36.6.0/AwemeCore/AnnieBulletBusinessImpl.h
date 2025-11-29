@class BDXLifeCycleImpl, NSString;

@interface AnnieBulletBusinessImpl : NSObject <BDXBusinessProtocol, BDXServiceProtocol>

@property (retain, nonatomic) BDXLifeCycleImpl *containerLifeCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createService;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)closeAnimationFinish:(id)a0 params:(id)a1;
+ (BOOL)p_useAnnieXWithViewController:(id)a0;
+ (unsigned long long)serviceType;

- (id)_handleConfig:(id)a0 context:(id)a1;
- (void)loadURL:(id)a0 container:(id)a1 context:(id)a2;
- (void)_configBridgeWithContext:(id)a0;
- (id)willResolveScheme:(id)a0 context:(id)a1;
- (void)didResolveScheme:(id)a0 schemaModel:(id)a1 schemaClazz:(Class)a2 context:(id)a3;
- (void).cxx_destruct;

@end
