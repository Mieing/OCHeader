@interface AWESearchNetworkTracker : NSObject

+ (void)searchNetworkTriggerWithSearchType:(id)a0 pullType:(unsigned long long)a1 extraDict:(id)a2;
+ (id)searchNetworkMonitorInfoWithError:(id)a0 itemCount:(long long)a1;
+ (void)searchNetworkFinishWithSearchType:(id)a0 pullType:(unsigned long long)a1 imprID:(id)a2 extraDict:(id)a3;

@end
