@class NSString;

@interface CJPayAnnieXCJPayBusinessImpl : NSObject <BDXBusinessProtocol, BDXServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createService;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)bindToProtocol;
+ (void)registerCaijingGlobalContext;
+ (unsigned long long)serviceType;

- (id)willResolveScheme:(id)a0 context:(id)a1;
- (void)didResolveScheme:(id)a0 schemaModel:(id)a1 schemaClazz:(Class)a2 context:(id)a3;

@end
