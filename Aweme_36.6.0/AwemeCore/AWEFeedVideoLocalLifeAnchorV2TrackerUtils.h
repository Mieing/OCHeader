@class NSString;

@interface AWEFeedVideoLocalLifeAnchorV2TrackerUtils : NSObject <AWEFeedVideoLocalLifeAnchorV2TrackerUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)uploadAnchorCoreTrackerWithContext:(id)a0 actionType:(unsigned long long)a1 scene:(unsigned long long)a2;
+ (BOOL)isInTheSmeCityWithCityCode:(id)a0;
+ (id)trackerParamsForEnterPOIDetailWithPOIInfo:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 extraParams:(id)a3;
+ (void)uploadLocalLifeAnchorSuperviewShowWithAweme:(id)a0 scene:(id)a1;
+ (void)uploadLocalLifeAnchorShowExceptionWithAweme:(id)a0 code:(unsigned long long)a1 scene:(id)a2;
+ (id)lifeAnchorCoreBuryPointLogExtraDataWithAweme:(id)a0;
+ (void)uploadAnchorNormalTrackerWithContext:(id)a0 actionType:(unsigned long long)a1;
+ (void)uploadAnchorGeneralTrackerWithContext:(id)a0 actionType:(unsigned long long)a1 scene:(unsigned long long)a2;
+ (id)lifeAnchorCoreTrackerLogExtraDataWithContext:(id)a0 scene:(unsigned long long)a1;
+ (id)trackerParamsForPOIFromAweme:(id)a0;
+ (id)socialParamsFromSource:(id)a0;
+ (id)trackParamsForMiniAppCommonParamsWithContext:(id)a0 scene:(unsigned long long)a1;
+ (void)uploadAnchorMiniAppBuryPointIfNeededWithContext:(id)a0 actionType:(unsigned long long)a1 scene:(unsigned long long)a2;
+ (id)p_anchorCoreParamsWithContext:(id)a0 scene:(unsigned long long)a1;
+ (id)p_lifeMallChannelParamsWithContext:(id)a0;
+ (id)p_anchorMiniAppBuryPointCommonParamsWithContext:(id)a0 scene:(unsigned long long)a1;
+ (BOOL)isAnchorHasMinorTags:(id)a0;
+ (id)p_anchorTextTypeShowStatusTrackerParamsWithContext:(id)a0 actionType:(unsigned long long)a1;
+ (BOOL)isUploadShouldShowTracker:(id)a0;
+ (id)p_anchorShouldShowTrackerParamsWithContext:(id)a0;
+ (id)p_anchorNormalTrackerParamsWithContext:(id)a0;
+ (void)setValue:(id)a0 forKey:(id)a1 inParamDict:(id)a2;
+ (id)getCurrentDeviceLocationWithToken:(id)a0 encodeType:(unsigned long long)a1;
+ (id)distanceKmForTrackWithCurrentLocation:(id)a0 latitude:(double)a1 longitude:(double)a2;
+ (BOOL)poiCouponDisplayedForPOI:(id)a0;
+ (long long)isImportantPOI:(id)a0;
+ (id)trackerParamsForPOILocationType:(id)a0;
+ (id)p_anchorCoreTrackerCommonParamsWithContext:(id)a0;
+ (id)p_anchorCoreTrackerForPOICommonParamsWithContext:(id)a0;
+ (id)p_anchorCoreTrackerForTradeCommonParamsWithContext:(id)a0;
+ (id)p_anchorCoreTrackerForPOIListCommonParamsWithContext:(id)a0;
+ (id)p_commentCommonParamsWithContext:(id)a0;
+ (void)addPOITrackerInfosForPOIInfo:(id)a0 toParams:(id)a1 enterFrom:(id)a2 logExtraDict:(id)a3 context:(id)a4 withAwemeModel:(id)a5;
+ (id)baseTrackerParamsForListPOIInfo:(id)a0 enterFrom:(id)a1;
+ (id)trackerParamsForPOITradeInfo:(id)a0;
+ (id)distanceKmForTrackWithLatitude:(double)a0 longitude:(double)a1;
+ (void)p_addLiveRoomInfoToParams:(id)a0 aweme:(id)a1;
+ (void)p_addRelatedToHotInfoToParams:(id)a0 aweme:(id)a1;
+ (void)p_addSeverLifeLogExtraToParams:(id)a0 context:(id)a1;
+ (void)p_addAnchorCardInfoToParams:(id)a0 aweme:(id)a1;
+ (id)p_anchorNormalTrackerForPoiParamsWithContext:(id)a0;
+ (id)p_anchorNormalTrackerForTradeParamsWithContext:(id)a0;
+ (id)lifeAnchorCoreBuryPointLogExtraDataWithAweme:(id)a0 scene:(unsigned long long)a1;
+ (void)uploadLocalLifeAnchorFailShowWithAweme:(id)a0 code:(unsigned long long)a1 scene:(id)a2 params:(id)a3;
+ (id)baseTrackerParamsForListPOIInfo:(id)a0;
+ (void)uploadAnchorRenderTimeWithContext:(id)a0 params:(id)a1;
+ (BOOL)poiCouponDisplayedForPOIItem:(id)a0;
+ (id)getClueTrackParamsFromUserModel:(id)a0;
+ (void)uploadAnchorRenderTimeWithAweme:(id)a0 params:(id)a1;


@end
