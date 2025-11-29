@interface AWEHomepageMonitor : NSObject

+ (void)sendMonitorEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (void)sendMonitorEvent:(id)a0 params:(id)a1;
+ (void)trackCurrentThreadWithAuthor:(id)a0 aggregationKey:(id)a1 filters:(id)a2 description:(id)a3 callback:(id /* block */)a4;

@end
