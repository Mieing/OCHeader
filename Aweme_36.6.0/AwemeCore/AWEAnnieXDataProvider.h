@class NSDictionary, NSString;

@interface AWEAnnieXDataProvider : NSObject <AnnieXDataProviderProtocol>

@property (copy, nonatomic) NSDictionary *globalPorpsInMainThread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)commonProps;
+ (id)commonWebProps;
+ (id)commonRequestPrasms;
+ (id)bizGlobalPropsWithSchema:(id)a0;
+ (id)bizWebGlobalPropsWithSchema:(id)a0;
+ (Class)aAWEAnnieXDataCommonAdapterClass;
+ (id)abParamsInGlobalProps:(id)a0;
+ (unsigned long long)serviceType;

- (Class)schemaClass;
- (Class)schemaClassWithContainerType:(id)a0 engineType:(id)a1;
- (void)provideDefaultCardDataWithCardModel:(id)a0;
- (void)provideInstanceDataWitCardModel:(id)a0 schemaClass:(Class)a1;
- (void)provideDefaultDataWithContext:(id)a0;
- (void)provideInstanceDataWitContext:(id)a0 schemaClass:(Class)a1;
- (id)aAWEAnnieXDataCommonAdapter;
- (void).cxx_destruct;

@end
