@interface AWESearchCustomCrashInfoHelper : NSObject

+ (void)setFilterInfoWithTabKey:(id)a0 logId:(id)a1;
+ (BOOL)enableCrashReport;
+ (void)recordSearchContextAndFilterValue:(id)a0 Key:(id)a1;
+ (void)recordSearchCustomCrashInfo:(id)a0;

@end
