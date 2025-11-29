@interface EAccountAPIParasUtil : NSObject

+ (id)dictionaryToJson:(id)a0;
+ (id)getSafeString:(id)a0;
+ (id)getNetworkStatus;
+ (id)getTimeStamp;
+ (id)dicFromJsonStr:(id)a0;
+ (BOOL)EAccountAPIIsEmptyStr:(id)a0;
+ (void)startReportLog:(id)a0;
+ (id)EAccountAPIGetSafeString:(id)a0;
+ (void)saveDomainCDate;
+ (BOOL)EAccountAPIIsNullObject:(id)a0;
+ (id)dicValueFormatter:(id)a0;
+ (id)getCurrentCellularProvider;
+ (id)getCurrentCellularProviderInOSVersion12WithDualCard:(id)a0 providers:(id)a1;
+ (id)getCurrentProviderCode;
+ (id)getCurrentProviderInfo;
+ (id)getDescriptionFromError:(id)a0 netType:(id)a1;
+ (id)getDetailModel;
+ (long long)getErrCode:(id)a0;
+ (id)getLogNetworkStatus;
+ (id)getOnLineType;
+ (double)getRemainingIntervalByCostInterval:(double)a0 andTotalInterval:(double)a1;
+ (void)hasCellularDataPermission:(id /* block */)a0;
+ (id)hmacSha256WithKey:(id)a0 text:(id)a1;
+ (BOOL)ipAddressWithIfaName:(id)a0;
+ (BOOL)isEmptyStr:(id)a0;
+ (BOOL)reachableViaWWAN;
+ (void)saveDomainC;
+ (void)saveDomainI;
+ (void)saveLogLevel:(id)a0;
+ (void)savePReset:(id)a0;
+ (void)savePikgx:(id)a0;
+ (BOOL)networkReachable;
+ (void)setTimeStamp:(long long)a0;

@end
