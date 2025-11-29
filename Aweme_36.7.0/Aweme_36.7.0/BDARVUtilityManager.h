@interface BDARVUtilityManager : NSObject

+ (BOOL)openAppStoreWithParam:(id)a0;
+ (void)newPreloadAppStoreWithModel:(id)a0 sourceModel:(id)a1 adType:(unsigned long long)a2 atTime:(unsigned long long)a3;
+ (void)sendEndSKANImpression:(id)a0;
+ (void)sendStartSKANImpression:(id)a0;
+ (void)newPreloadAppStoreWithModel:(id)a0 sourceModel:(id)a1 adType:(unsigned long long)a2;
+ (void)oldPreloadAppStoreWithModel:(id)a0;

@end
