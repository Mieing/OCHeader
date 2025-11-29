@interface TTDownloadClearCache : NSObject

+ (BOOL)getAllRuleFromDB;
+ (void)checkAndInsertNewRules:(id)a0 error:(id *)a1;
+ (void)tryClearCacheByTncConfig;
+ (void)tryDeleteInvalidClearCacheRules:(id *)a0;
+ (void)updateClearCacheRule:(id)a0;

@end
