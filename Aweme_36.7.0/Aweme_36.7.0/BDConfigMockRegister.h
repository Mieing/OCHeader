@interface BDConfigMockRegister : NSObject

+ (void)registerMockWithDomain:(id)a0 keyPath:(id)a1 registerBlock:(id /* block */)a2;
+ (void)registerStringMockWithDomain:(id)a0 keyPath:(id)a1 defaultValue:(id)a2 stable:(BOOL)a3 mockBlock:(id /* block */)a4;
+ (void)registerBoolMockWithDomain:(id)a0 keyPath:(id)a1 defaultValue:(BOOL)a2 stable:(BOOL)a3 mockBlock:(id /* block */)a4;
+ (void)registerEnumMockWithDomain:(id)a0 keyPath:(id)a1 defaultValue:(long long)a2 stable:(BOOL)a3 mockBlock:(id /* block */)a4;
+ (void)registerNumberMockWithDomain:(id)a0 keyPath:(id)a1 defaultValue:(id)a2 stable:(BOOL)a3 mockBlock:(id /* block */)a4;
+ (id)allRegisteredMock;
+ (id)configMockInfoWithIdentifier:(id)a0;
+ (id)configMockInfoWithDomain:(id)a0 keyPath:(id)a1;
+ (id)getConfigValueWithMockInfo:(id)a0;
+ (void)initialize;

@end
