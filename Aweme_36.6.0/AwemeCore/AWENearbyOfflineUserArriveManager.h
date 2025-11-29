@class NSString;

@interface AWENearbyOfflineUserArriveManager : NSObject <AWENearbyOfflineUserArriveManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)firstArriveInfo:(id)a0 firstArriveTS:(id)a1;
+ (void)trackInsertResultWithErrorMsg:(id)a0 msg:(id)a1;
+ (void)updataFirstArriveInfoWitLogId:(id)a0 poiID:(id)a1 expirationTime:(double)a2;
+ (void)removeAllFirstArriveInfo;
+ (void)removeCacheUserArriveInfo;
+ (id)getFirstArriveTSWithLogID:(id)a0;
+ (long long)arriveTimesFromFirstArrive;
+ (id)getFirstArriveInfoArray;
+ (id)checkTheSamePoiID:(id)a0;
+ (id)updataUserArriveParamWithPoiId:(id)a0 firstArriveTS:(id)a1 naturalDayFirstTS:(id)a2 expirationTS:(long long)a3 arriveTimes:(long long)a4;
+ (BOOL)checkNaturalDayFirstTSValid:(id)a0;
+ (long long)upDataExpirationTSWithDic:(id)a0 expirationTS:(long long)a1;
+ (void)cacheUserArriveInfoWithDic:(id)a0;
+ (void)removeFirstArriveWithLogID:(id)a0;
+ (id)getLogIDFromMsg:(id)a0;
+ (id)firstArriveParamsWithTS:(id)a0 logID:(id)a1;
+ (void)cacheFirstArriveInfoWithParams:(id)a0;
+ (id)getUserArriveInfoDic;
+ (void)appendOfflineCardParamToDcard:(id)a0 logID:(id)a1 expirationTime:(double)a2;


@end
