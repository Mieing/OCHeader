@interface AWENearbyResourceManager : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)trackDialogRequestMonitor:(id)a0 error:(id)a1 pageType:(long long)a2;
- (void)trackNearbyCommonRequestMonitorEvent:(BOOL)a0 errMsg:(id)a1 reqTime:(double)a2 model:(id)a3 extraParam:(id)a4;
- (void)requestNearbyResourceWithRefreshType:(unsigned long long)a0 pageType:(long long)a1 rowType:(unsigned long long)a2 feedParams:(id)a3 extraParams:(id)a4 completion:(id /* block */)a5;
- (void)configTaskWithModel:(id)a0 pageType:(long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
