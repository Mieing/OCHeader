@class NSString;

@interface AWEPOIUtils : NSObject <AWEPOIUtils>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cityInfo;
+ (BOOL)isInTheSameCityWithTargetCityCode:(id)a0;
+ (id)distanceStringFromLocation:(id)a0 toLocation:(id)a1 unitFormat:(unsigned long long)a2;
+ (id)distanceKmForAweme:(id)a0;
+ (double)distanceFromCurrentLocation:(id)a0 targetLocation:(id)a1;
+ (BOOL)isInTheSameCityWithCurrentLocation:(id)a0 targetCityCode:(id)a1;
+ (BOOL)isInTheSameCityWithCurrentLocation:(id)a0 targetPOI:(id)a1;
+ (id)currentLocationWithBDCert:(id)a0;
+ (id)entryDistanceDescriptionWithCurrentLocation:(id)a0 poiInfo:(id)a1;
+ (BOOL)isCurrentLocationShouldShowCouponWithReleaseAreas:(id)a0;
+ (unsigned long long)importantPOITypeForBackendType:(id)a0;
+ (BOOL)isInTheSameDistrictWithCurrentLocation:(id)a0 targetPOI:(id)a1;
+ (BOOL)isCurrentLocation:(id)a0 targetPOI:(id)a1 WithinDistanceKm:(double)a2;
+ (id)etaStringForTimeAtLeastOneMinute:(double)a0;
+ (void)goToMapWithPOIInfo:(id)a0 isLocal:(BOOL)a1 showNavi:(BOOL)a2 trackInfo:(id)a3 aroundHotPoiCount:(int)a4 refer:(id)a5 sessionID:(id)a6;
+ (id)distanceStringFromCurrentLocation:(id)a0 targetLatitude:(double)a1 targetLongitude:(double)a2 unitFormat:(unsigned long long)a3;
+ (id)businessDaysDescriptionFromBusinessDays:(id)a0;
+ (id)displayedCountForPOIInfo:(id)a0 needTranslation:(BOOL)a1;
+ (BOOL)hasValidVisitCountForPOIInfo:(id)a0;
+ (void)preloadMicroAppWithServiceModel:(id)a0;
+ (BOOL)isInTheSameCityWithCurrentLocation:(id)a0 targetCityCode:(id)a1 targetLatitude:(double)a2 targetLongitude:(double)a3;
+ (BOOL)isInTheSameDistrictWithCurrentLocation:(id)a0 targetCityCode:(id)a1 targetDistrictCode:(id)a2 targetLatitude:(double)a3 targetLongitude:(double)a4;
+ (id)displayedCountForPOIInfo:(id)a0;
+ (id)distanceTagFromCurrentLocation:(id)a0 targetLatitude:(double)a1 targetLongitude:(double)a2;
+ (BOOL)isInTheSameCityWithCurrentLocation:(id)a0 targetCityCode:(id)a1 targetLocation:(id)a2;
+ (id)workDays;
+ (id)distanceTagFormatWithDistance:(double)a0;
+ (void)judgeIsInTheSameCityWithCurrentLocation:(id)a0 targetCityCode:(id)a1 targetLongitude:(double)a2 targetLatitude:(double)a3 completion:(id /* block */)a4;
+ (id)etaStringForTime:(double)a0;
+ (id)entryDistanceDescriptionWithCurrentLocation:(id)a0 targetCity:(id)a1 targetLocation:(id)a2;
+ (BOOL)shouldCheckPreconditionForSameCity;
+ (BOOL)preconditionResultForSameCity;
+ (id)displayedCountForPOIInfo:(id)a0 needTranslation:(BOOL)a1 shouldDistanceTextWithThere:(BOOL)a2;
+ (void)preloadMicroAppWithUrl:(id)a0;
+ (id)stringForImportantPOIType:(unsigned long long)a0;
+ (double)distanceFromCurrentLocation:(id)a0 targetLatitude:(double)a1 targetLongitude:(double)a2;
+ (id)commonDistanceFormatWithDistance:(double)a0;
+ (void)judgeIsInTheSameCityWithCurrentLocation:(id)a0 targetPOI:(id)a1 completion:(id /* block */)a2;
+ (id)currentLocationCityCodeWithBDCert:(id)a0;
+ (void)saveCurrentCity:(id)a0;
+ (void)enableForceInTheSameCity;
+ (void)disableForceInTheSameCity;
+ (BOOL)isForceInTheSameCity;
+ (id)formattedPriceFrom:(id)a0;
+ (void)transferToFormattedURLString:(id)a0;
+ (id)importantTypeStringForPOIBackendType:(id)a0;
+ (id)detailPreloadTaskKeyForAwemeID:(id)a0 poiID:(id)a1;


@end
