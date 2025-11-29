@class NSArray, NSMutableDictionary;
@protocol AWESearchMonitorHelperDelegate;

@interface AWESearchMonitorHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *providers;
@property (copy, nonatomic) NSArray *protectedKeys;
@property (retain, nonatomic) NSMutableDictionary *nonContextMonitorCache;
@property (weak, nonatomic) id<AWESearchMonitorHelperDelegate> delegate;

+ (void)trackArrayTriggerRefreshEvent:(id)a0 bindContext:(id)a1;
+ (void)searchNetworkTriggerWithSearchType:(id)a0 pullType:(unsigned long long)a1 extraDict:(id)a2;
+ (void)bindContext:(id)a0 logType:(id)a1 data:(id)a2;
+ (id)searchNetworkMonitorInfoWithError:(id)a0 itemCount:(long long)a1;
+ (void)searchNetworkFinishWithSearchType:(id)a0 pullType:(unsigned long long)a1 imprID:(id)a2 extraDict:(id)a3;
+ (void)startMonitorForLogType:(id)a0 data:(id)a1;
+ (id)searchNetworkType;
+ (void)startMonitorWithContext:(id)a0 logType:(id)a1 data:(id)a2;
+ (void)finishMonitorWithContext:(id)a0 logType:(id)a1 data:(id)a2;
+ (id)valueForKey:(id)a0 withLogType:(id)a1 context:(id)a2;
+ (void)removeValueForKey:(id)a0 withLogType:(id)a1 context:(id)a2;
+ (void)registerEventProvider:(id)a0;
+ (id)p_createANonContextMonitorValueForLogType:(id)a0;
+ (void)mergeMonitorValue:(id)a0 withAppendValue:(id)a1;
+ (id)p_createAMonitorValueFromContext:(id)a0 forLogType:(id)a1;
+ (id)p_getMonitorValueFromContext:(id)a0 forLogType:(id)a1;
+ (void)p_removeAMonitorValueFromContext:(id)a0 forLogType:(id)a1;
+ (void)eliminateMonitorValue:(id)a0 forKeysNotReport:(id)a1;
+ (void)p_copyAMonitorValueFromContext:(id)a0 logType:(id)a1 toContext:(id)a2 logType:(id)a3;
+ (id)p_getNonContextMonitorValueForLogType:(id)a0;
+ (id)protectMonitorValue:(id)a0;
+ (void)p_removeANonContextMonitorValueForLogType:(id)a0;
+ (void)searchMonitorWithEvent:(id)a0 params:(id)a1;
+ (id)valueForKey:(id)a0 withLogType:(id)a1;
+ (void)bindLogType:(id)a0 data:(id)a1;
+ (id)sharedHelper;
+ (void)setDelegate:(id)a0;

- (void)registerEventProvider:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
