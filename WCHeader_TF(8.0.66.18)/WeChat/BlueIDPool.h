@interface BlueIDPool : NSObject

+ (long long)getNewSessionIdByType:(long long)a0;
+ (long long)getDIDByType:(long long)a0 AndIDString:(id)a1;
+ (long long)getDIDByType:(long long)a0 AndUuid:(struct __CFUUID { } *)a1;
+ (int)getAdapterIndex:(long long)a0;
+ (int)getDeviceTypeByID:(long long)a0;
+ (long long)getDIDByType:(long long)a0 AndMACData:(id)a1;
+ (long long)getDIDByType:(long long)a0 AndMACString:(id)a1;

@end
