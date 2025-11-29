@class LLBDXPOILifeCycleImpl, NSString;

@interface LLAnniePOIBusinessImpl : NSObject <BDXBusinessProtocol, BDXServiceProtocol>

@property (retain, nonatomic) LLBDXPOILifeCycleImpl *containerLifeCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createService;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)_aweLazyRegisterLoad;
+ (unsigned long long)serviceType;

- (id)lifeFeedsPrefetch:(id)a0;
- (id)_handleConfig:(id)a0 context:(id)a1;
- (id)willResolveScheme:(id)a0 context:(id)a1;
- (void)didResolveScheme:(id)a0 schemaModel:(id)a1 schemaClazz:(Class)a2 context:(id)a3;
- (void).cxx_destruct;

@end
