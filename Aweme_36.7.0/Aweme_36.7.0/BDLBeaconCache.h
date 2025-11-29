@interface BDLBeaconCache : NSObject

+ (void)saveBeacons:(id)a0;
+ (id)cachedBeacons;
+ (void)removeBeaconsCache;
+ (void)saveBeaconLogID:(id)a0;
+ (id)cachedBeaconLogID;
+ (void)removeLogIDCache;
+ (void)saveErrorCode:(long long)a0;
+ (long long)cachedErrorCode;

@end
