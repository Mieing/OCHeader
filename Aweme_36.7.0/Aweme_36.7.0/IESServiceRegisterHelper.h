@interface IESServiceRegisterHelper : NSObject

+ (void)serviceRegister:(id)a0 registerClass:(Class)a1 scope:(long long)a2 forIdentifiers:(id)a3;
+ (void)serviceRegister:(id)a0 registerInstance:(id)a1 forIdentifiers:(id)a2;
+ (void)serviceRegister:(id)a0 registerInstance:(id)a1 scope:(long long)a2 forIdentifiers:(id)a3;
+ (void)serviceRegister:(id)a0 registerClass:(Class)a1 forIdentifiers:(id)a2;
+ (id)arrayWithVaList:(char *)a0 firstArg:(id)a1;
+ (void)serviceRegister:(id)a0 registerClass:(Class)a1 scope:(long long)a2 forIdentifierArray:(id)a3;

@end
