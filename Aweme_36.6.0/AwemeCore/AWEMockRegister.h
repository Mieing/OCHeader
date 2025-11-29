@interface AWEMockRegister : NSObject

+ (void)registerStringMockWithName:(id)a0 settingKey:(id)a1 defaultValue:(id)a2 stable:(BOOL)a3 mockBlock:(id /* block */)a4;
+ (void)registerBoolMockWithName:(id)a0 settingKey:(id)a1 defaultValue:(BOOL)a2 stable:(BOOL)a3 mockBlock:(id /* block */)a4;
+ (void)registerEnumMockWithName:(id)a0 settingKey:(id)a1 defaultValue:(long long)a2 stable:(BOOL)a3 mockBlock:(id /* block */)a4;
+ (void)registerNumberMockWithName:(id)a0 settingKey:(id)a1 defaultValue:(id)a2 stable:(BOOL)a3 mockBlock:(id /* block */)a4;
+ (void)registerNewSettingsMockWithName:(id)a0 settingKey:(id)a1 defaultValue:(id)a2 stable:(BOOL)a3 mockBlock:(id /* block */)a4;

@end
