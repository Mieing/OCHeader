@interface AWEECOMIMPaasModelService : NSObject

+ (long long)impType;
+ (id)classForProtocol:(id)a0;
+ (void)registerClass:(Class)a0 forProtocol:(id)a1 impType:(long long)a2;
+ (void)startRegisterClassTask;
+ (id)classMap;

@end
