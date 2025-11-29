@interface AWEFriendsTabUserMetricsMonitor : NSObject

+ (void)monitorError:(id)a0 withUserMetricsType:(id)a1;
+ (void)monitorDatabaseError:(id)a0 orErrorMsg:(id)a1 InEvent:(id)a2;
+ (void)monitorDatabaseError:(id)a0 InEvent:(id)a1;

@end
