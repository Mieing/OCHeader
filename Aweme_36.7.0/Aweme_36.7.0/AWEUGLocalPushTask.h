@interface AWEUGLocalPushTask : NSObject

+ (void)fetchRiskStatusCompletion:(id /* block */)a0;
+ (void)refreshCloudPush:(unsigned long long)a0 from:(id)a1 completion:(id /* block */)a2;
+ (void)saveWebImageUrl:(id)a0 completion:(id /* block */)a1;
+ (void)refreshCloudPush:(unsigned long long)a0 delay:(long long)a1 from:(id)a2 completion:(id /* block */)a3;
+ (BOOL)needCancelFetch;
+ (id)realPushTypeString:(unsigned long long)a0 isBadgeValid:(BOOL)a1 isPushValid:(BOOL)a2;
+ (void)buildNotiContentWithType:(unsigned long long)a0 mode:(id)a1 completion:(id /* block */)a2;
+ (void)fetchCloudData:(unsigned long long)a0 completion:(id /* block */)a1;

@end
