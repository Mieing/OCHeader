@class NSNumber, NSString;

@interface IESLLPOITrackerUtils : NSObject <IESLLPOITrackerUtilsProtocol>

@property (class, retain) NSNumber *poiClassCode;
@property (class, readonly) NSString *poiChannelCode;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackerParamsForEnterPOIDetailWithPOIID:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 extraParams:(id)a3;
+ (void)addPOITrackerInfosForPOIInfo:(id)a0 toParams:(id)a1 enterFrom:(id)a2;
+ (void)addPOITrackerInfosForPOIInfo:(id)a0 toParams:(id)a1 enterFrom:(id)a2 withAwemeModel:(id)a3;
+ (BOOL)isInTheSmeCityWithCityCode:(id)a0;
+ (id)trackerParamsForEnterPOIDetailWithPOIInfo:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 extraParams:(id)a3;
+ (id)serviceTypeStringWithType:(unsigned long long)a0;
+ (id)lifeShareTrackInfoWithSecInfo:(id)a0;
+ (void)addLifeShareExtClientParams:(id)a0 toAweme:(id)a1;
+ (id)lifeShareTrackParamsWithAweme:(id)a0;
+ (void)addShareVideoParamsForFeedPOIAnchorWith:(id)a0 params:(id)a1;
+ (void)addPOITrackerInfosForPOIInfo:(id)a0 toParams:(id)a1;
+ (id)lifeShareTrackParamsWithPOIInfo:(id)a0;
+ (id)lifeShareTrackParamsWithPOIInfo:(id)a0 needStringifyExt:(BOOL)a1;
+ (id)lifeShareTrackParamsWithAweme:(id)a0 needStringifyExt:(BOOL)a1;
+ (id)refineConfig;
+ (id)trackerParamsForEnterPOIDetailWithPOIItem:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 extraParams:(id)a3;
+ (id)trackerParamsForPOIFromAweme:(id)a0;
+ (id)socialParamsFromSource:(id)a0;
+ (id)extraParamsForClickAndExpandWithAweme:(id)a0;
+ (void)setValue:(id)a0 forKey:(id)a1 inParamDict:(id)a2;
+ (id)getCurrentDeviceLocationWithToken:(id)a0 encodeType:(unsigned long long)a1;
+ (id)distanceKmForTrackWithCurrentLocation:(id)a0 latitude:(double)a1 longitude:(double)a2;
+ (BOOL)poiCouponDisplayedForPOI:(id)a0;
+ (long long)isImportantPOI:(id)a0;
+ (id)trackerParamsForPOILocationType:(id)a0;
+ (void)addPOITrackerInfosForPOIInfo:(id)a0 toParams:(id)a1 enterFrom:(id)a2 logExtraDict:(id)a3 context:(id)a4 withAwemeModel:(id)a5;
+ (id)baseTrackerParamsForListPOIInfo:(id)a0 enterFrom:(id)a1;
+ (id)trackerParamsForPOITradeInfo:(id)a0;
+ (id)distanceKmForTrackWithLatitude:(double)a0 longitude:(double)a1;
+ (id)baseTrackerParamsForListPOIInfo:(id)a0;
+ (BOOL)poiCouponDisplayedForPOIItem:(id)a0;
+ (id)trackerParamsForPOISuffix:(id)a0;
+ (id)trackerParamsForPOISuffixType:(id)a0;
+ (id)trackerParamsForPOIMinorTags:(id)a0;
+ (id)getCurrentDeviceLocationWithToken:(id)a0 auth:(id)a1 encodeType:(unsigned long long)a2;
+ (id)_lastTimestampMap;
+ (id)_deviceLocationMap;
+ (id)lifeShareExtWithAweme:(id)a0;
+ (id)lifeShareTrackParamsWithPOIInfo:(id)a0 lifeShareExtByClient:(id)a1 needStringifyExt:(BOOL)a2;
+ (id)lifeShareTrackParamsWithPOIInfo:(id)a0 lifeShareExtByClient:(id)a1;
+ (id)lifeShareTrackSecInfoWithInfo:(id)a0;
+ (id)getCurrentLocation;


@end
