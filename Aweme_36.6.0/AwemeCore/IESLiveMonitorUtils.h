@interface IESLiveMonitorUtils : NSObject

+ (id)convertToJsonData:(id)a0;
+ (id)webkitVersion;
+ (id)iesWebViewMonitorVersion;
+ (id)pageNameForAttachView:(id)a0;
+ (long long)formatedTimeInterval;
+ (BOOL)isValidKeyWithDic:(id)a0 key:(id)a1;
+ (void /* function */ *)getORIGImp:(id)a0 cls:(Class)a1 ORIGCls:(Class *)a2 sel:(id)a3;
+ (void /* function */ *)getORIGImp:(id)a0 cls:(Class)a1 ORIGCls:(Class *)a2 sel:(id)a3 assert:(BOOL)a4;
+ (void /* function */ *)hookMethod:(Class)a0 sel:(SEL)a1 imp:(void /* function */ *)a2;
+ (void)addMethodToClass:(Class)a0 selStr:(id)a1 funcPtr:(void /* function */ **)a2 hookMethod:(void /* function */ *)a3 desp:(const char *)a4;
+ (void)unHookMethod:(Class)a0 sel:(SEL)a1 imp:(void /* function */ *)a2;
+ (id)mergedSettingWithOnlineSetting:(id)a0;
+ (id)convertAndTrimToJsonData:(id)a0;
+ (BOOL)hookMethod:(Class)a0 fromSelStr:(id)a1 toSelStr:(id)a2 targetIMP:(void /* function */ *)a3;
+ (BOOL)isSpecifiedClass:(Class)a0 confirmsToSel:(SEL)a1;
+ (BOOL)isWebViewClass:(Class)a0;

@end
