@class NSString;

@interface AnnieXLiveDataProviderManager : NSObject <AnnieXDataProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)generateJsSourceWithPramName:(id)a0 dict:(id)a1;
+ (id)generateJsSourceWithFuncName:(id)a0 str:(id)a1;
+ (unsigned long long)serviceType;
+ (id)shareInstance;

- (Class)schemaClass;
- (void)provideDefaultCardDataWithCardModel:(id)a0;
- (void)provideInstanceDataWitCardModel:(id)a0 schemaClass:(Class)a1;
- (void)provideDefaultDataWithContext:(id)a0;
- (void)provideInstanceDataWitContext:(id)a0 schemaClass:(Class)a1;

@end
