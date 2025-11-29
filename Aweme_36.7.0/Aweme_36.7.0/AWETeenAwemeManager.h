@interface AWETeenAwemeManager : NSObject

+ (void)fetchAwemeWithType:(long long)a0 count:(id)a1 feedColumnType:(unsigned long long)a2 initialFetch:(BOOL)a3 extParams:(id)a4 completion:(id /* block */)a5;
+ (id)feedTableVC;
+ (id)getExpectedSizeInfo;
+ (void)fetchAwemeForCacheWithType:(long long)a0 count:(id)a1 feedColumnType:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)fetchVideosForOfflineCacheWithType:(long long)a0 count:(id)a1 feedColumntype:(unsigned long long)a2 extParams:(id)a3 pullType:(long long)a4 completion:(id /* block */)a5;
+ (id)recordRisingHotVideoStats:(id)a0;
+ (id)p_trackingParamsWithInstallAndActionTime:(id)a0;
+ (double)p_firstInstallTime;
+ (double)p_actionTime;
+ (id)filterDuplicatedDatasourceWithArray:(id)a0;
+ (void)cancelCurrentTask;
+ (void)_requestAwemeItemWithParams:(id)a0 feedColumnType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)_requestAwemeItemsWithURLString:(id)a0 params:(id)a1 timeout:(double)a2 completionBlock:(id /* block */)a3;
+ (void)statisticsNewPlayWithID:(id)a0 vcType:(long long)a1 awemeType:(long long)a2 extraParams:(id)a3;
+ (long long)p_tabTypeWithVCType:(long long)a0;
+ (void)statisticsNewPlayWithID:(id)a0 vcType:(long long)a1 awemeType:(long long)a2 followStatus:(long long)a3 followerStatus:(long long)a4 extraLog:(id)a5 extraParams:(id)a6;
+ (void)loadmoreAwemeWithType:(long long)a0 feedColumnType:(unsigned long long)a1 extParams:(id)a2 completion:(id /* block */)a3;
+ (id)_requestAwemeItemsWithURLString:(id)a0 params:(id)a1 completionBlock:(id /* block */)a2;
+ (void)interactAwemeItemWithID:(id)a0 action:(long long)a1 vcType:(long long)a2 completion:(id /* block */)a3;
+ (void)statisticsNewPlayWithID:(id)a0 vcType:(long long)a1 awemeType:(long long)a2;
+ (void)statisticsNewPlayWithID:(id)a0 vcType:(long long)a1 awemeType:(long long)a2 followStatus:(long long)a3 followerStatus:(long long)a4 extraLog:(id)a5;

@end
