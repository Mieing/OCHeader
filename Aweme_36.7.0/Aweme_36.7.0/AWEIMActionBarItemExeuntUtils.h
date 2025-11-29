@interface AWEIMActionBarItemExeuntUtils : NSObject

+ (void)doSomeTaskWithTaskType:(unsigned long long)a0 inCid:(id)a1 completion:(id /* block */)a2;
+ (id)p_diskStorageKeyWithCid:(id)a0 recordType:(id)a1 itemExitModel:(id)a2;
+ (void)checkCompleteTaskWithExitModel:(id)a0 cid:(id)a1 beginExitKey:(id)a2;
+ (double)p_doubleForKey:(id)a0;
+ (void)p_removeObjectForKey:(id)a0;
+ (id)acbExitHandleQueue;
+ (id)opt_actionBarExeuntDictWithConfig:(id)a0;
+ (long long)p_integerForKey:(id)a0;
+ (void)p_setDouble:(double)a0 forKey:(id)a1;
+ (void)p_setInteger:(long long)a0 forKey:(id)a1;
+ (void)opt_triggerForeverExitAfterExitCount:(id)a0 isExitOrClick:(BOOL)a1 cid:(id)a2;
+ (void)opt_actionBarItemDidAppearWithConfig:(id)a0 con:(id)a1;
+ (id)actionBarExeuntDictWithConfig:(id)a0;
+ (void)p_triggerForeverExitAfterExitCount:(id)a0 isExitOrClick:(BOOL)a1 cid:(id)a2;
+ (void)opt_actionBarItemDidClickWithConfig:(id)a0 con:(id)a1;
+ (void)opt_actionBarItemDidExitConWithConfig:(id)a0 con:(id)a1;
+ (id)p_completeTaskKeyWithPrefix:(id)a0 recordType:(id)a1 isUserDimension:(BOOL)a2 cid:(id)a3;
+ (id)p_dictForKey:(id)a0;
+ (void)p_setDict:(id)a0 forKey:(id)a1;
+ (id)p_prefixWithTaskType:(unsigned long long)a0;
+ (id)handleActionBarConfig:(id)a0 conversation:(id)a1;
+ (void)actionBarItemDidAppearWithConfig:(id)a0 con:(id)a1;
+ (void)actionBarItemDidClickWithConfig:(id)a0 con:(id)a1;
+ (void)actionBarItemDidExitConWithConfig:(id)a0 con:(id)a1;
+ (double)currentTime;

@end
