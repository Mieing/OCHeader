@class NSString, NSDictionary, NSMutableDictionary, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface AWEPOITrackerManager : NSObject <AWEPOITrackerManagerPrivateProtocol, IESLLFusePOITrackerManagerProtocol>

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *typeCode;
@property (copy, nonatomic) NSString *backendType;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *poiCity;
@property (copy, nonatomic) NSString *serviceType;
@property (nonatomic) BOOL inTheSameCity;
@property (retain, nonatomic) NSDictionary *searchParams;
@property (copy, nonatomic) NSString *poiEnterMethod;
@property (copy, nonatomic) NSString *originalModalViewStyle;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *businessExtraParams;
@property (retain, nonatomic) NSMutableDictionary *poiEntranceClickDetailInfo;
@property (retain, nonatomic) NSCache *poiEntranceClickCache;
@property (retain, nonatomic) NSCache *poiEntranceRequestCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *entranceTrackQueue;
@property (copy, nonatomic) NSString *previousReferString;
@property (copy, nonatomic) NSString *poiEnterID;
@property (copy, nonatomic) NSString *curModalViewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackPOIEvent:(id)a0 params:(id)a1;
+ (void)trackPOIEvent:(id)a0 params:(id)a1 btmInfo:(id)a2;
+ (Class)aAWEPOITrackerManagerLiteAdapterClass;
+ (id)sharedManager;

- (id)poiPageTrackerInfo;
- (void)startPOIDetailStayTimeForKey:(id)a0;
- (long long)poiDetailPageDurationForEnterID:(id)a0;
- (void)trackPOIDetailEvent:(id)a0 enterFrom:(id)a1 extraParams:(id)a2;
- (id)poiDetailTrackerInfo;
- (void)updateBusinessPOIExtraParams:(id)a0;
- (void)trackPOIEvent:(id)a0 params:(id)a1 btmInfo:(id)a2;
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
- (id)aAWEPOITrackerManagerLiteAdapter;
- (void)trackPOIDetailStayTimeForKey:(id)a0 pageType:(id)a1 poiBackendType:(id)a2 enterFrom:(id)a3;
- (void)p_uploadPOIPageBasicInfoForEvent:(id)a0;
- (void).cxx_destruct;

@end
