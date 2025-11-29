@interface LiteAppJsApiManager : NSObject

+ (void)addJsApi:(id)a0 name:(id)a1 clz:(Class)a2;
+ (void)addJsApi:(id)a0 clz:(Class)a1;
+ (Class)getJsApi:(id)a0 name:(id)a1;
+ (Class)getJsApi:(id)a0;
+ (BOOL)findJsApi:(id)a0 name:(id)a1;
+ (void)timerRelease;
+ (id)getExecutingApi:(unsigned int)a0;
+ (void)addExecutingApi:(unsigned int)a0 callbackId:(long long)a1 api:(id)a2;
+ (void)removeExecutingApi:(unsigned int)a0 callbackId:(long long)a1;
+ (void)addPermanentJsApi:(unsigned int)a0 name:(id)a1 api:(id)a2;
+ (id)getPermanentJsApi:(unsigned int)a0 name:(id)a1;
+ (void)removeAllPermanentJsApi:(unsigned int)a0;

@end
