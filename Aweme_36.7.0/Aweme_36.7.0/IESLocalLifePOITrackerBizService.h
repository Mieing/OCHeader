@class NSString;

@interface IESLocalLifePOITrackerBizService : HTSService <IESLocalLifePOITrackerBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackPOIEvent:(id)a0 params:(id)a1;
+ (void)trackPOIEvent:(id)a0 params:(id)a1 btmInfo:(id)a2;
+ (id)buildTracker;
+ (id)convertToAwe:(id)a0;

- (id)poiEnterID;
- (id)poiPageTrackerInfo;
- (void)startPOIDetailStayTimeForKey:(id)a0;
- (long long)poiDetailPageDurationForEnterID:(id)a0;
- (void)trackPOIDetailEvent:(id)a0 enterFrom:(id)a1 extraParams:(id)a2;
- (id)poiDetailTrackerInfo;
- (void)recordPreviousPOIRequestParamAndTrackReentrance:(id)a0;
- (void)trackPOIDetailStayTimeForKey:(id)a0 pageType:(id)a1 poiBackendType:(id)a2;
- (void)updatePOIDetailTrackerInfoForPOIID:(id)a0 typeCode:(id)a1 backendType:(id)a2 groupID:(id)a3 authorID:(id)a4 poiCity:(id)a5 previousPage:(id)a6 previousReferString:(id)a7 poiEnterID:(id)a8 serviceType:(id)a9 searchParams:(id)a10 poiEnterMethod:(id)a11 modalViewStyle:(id)a12 extraParams:(id)a13;
- (void)trackPOIDetailStayTimeForKey:(id)a0 pageType:(id)a1;
- (void)trackShowUploadImageButton;
- (void)trackShowShootButton;
- (void)trackShowRateButton;
- (void)trackClickRateButton;
- (void)trackClickShootButton;
- (void)trackClickUploadImageButton;
- (void)trackPOIDetailEvent:(id)a0 enterFrom:(id)a1 extraParams:(id)a2 btmInfo:(id)a3;
- (void)trackerPoiRecommendRequestResultWithDuration:(double)a0 result:(unsigned long long)a1 trackExtraParams:(id)a2 errorMsg:(id)a3;
- (void)recordPreviousPOIRouterUrl:(id)a0 extraParams:(id)a1;
- (void)trackPOIDetailStayTimeForKey:(id)a0 pageType:(id)a1 poiBackendType:(id)a2 enterFrom:(id)a3;
- (id)previousPage;

@end
