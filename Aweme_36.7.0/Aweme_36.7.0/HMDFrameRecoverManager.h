@interface HMDFrameRecoverManager : NSObject

+ (void)logLevel:(unsigned long long)a0 fileName:(const char *)a1 functionName:(const char *)a2 lineNumber:(int)a3 string:(const char *)a4;
+ (void)sharedCacheSelectorBase;
+ (void)locateSharedCache;
+ (void)objcROInit;
+ (void)setQueryBegin:(void /* function */ *)a0 enumeration:(void /* function */ *)a1 finish:(void /* function */ *)a2;
+ (void)setEnumImage:(void /* function */ *)a0;
+ (void)setQueryListStatus:(void /* function */ *)a0;
+ (void)markImageListFinished;
+ (void)objcExceptionCallback:(id /* block */)a0;
+ (void)setScopeEnabled:(BOOL)a0;
+ (BOOL)isScopeEnabled;
+ (void)scopePrefix:(const char *)a0;
+ (void)scopeWhiteList:(const char *)a0;
+ (void)scopeBlackList:(const char *)a0;
+ (void)machExceptionCallback:(id /* block */)a0;
+ (void *)machHandler;
+ (BOOL)isMachExceptionEnable;
+ (void)setMachExceptionEnable:(BOOL)a0;
+ (BOOL)isMachRestartableEnable;
+ (void)setMachRestartableEnable:(BOOL)a0;
+ (void)updateMachExceptionCloudControl:(id)a0;
+ (BOOL)protectMachException:(const char *)a0 option:(unsigned long long)a1 context:(void *)a2 block:(id /* block */)a3;
+ (void)objectExceptionInternalCallback:(id)a0;
+ (BOOL)tryCatchLiveKeeper;
+ (unsigned long long)logLevel;
+ (unsigned long long)version;
+ (void)setLogLevel:(unsigned long long)a0;
+ (void *)exceptionHandler;
+ (void)setup;

@end
