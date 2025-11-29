@class NSString, NSDictionary, AWEPOIDetailConstData, AWEPOIDetailResponse, UIViewController;

@interface AWEPOIEnterDetailTracker : NSObject

@property (retain, nonatomic) NSString *poiEnterID;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *previousEnterFrom;
@property (retain, nonatomic) NSString *previousEnterMethod;
@property (retain, nonatomic) NSString *poiID;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *authorID;
@property (retain, nonatomic) NSString *prePoiEnterID;
@property (retain, nonatomic) NSString *sortID;
@property (copy, nonatomic) NSDictionary *coiParams;
@property (copy, nonatomic) NSString *homepageHotScene;
@property (retain, nonatomic) NSString *poiBackendType;
@property (retain, nonatomic) AWEPOIDetailResponse *response;
@property (nonatomic) BOOL didTrack;
@property (retain, nonatomic) NSDictionary *lifeInitialInfo;
@property (weak, nonatomic) AWEPOIDetailConstData *constData;
@property (nonatomic) BOOL trackOldEnterDetail;
@property (retain, nonatomic) NSDictionary *searchParams;
@property (retain, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *oldEnterDetailExtraJsonParam;
@property (weak, nonatomic) UIViewController *ownerViewController;
@property (retain, nonatomic) NSDictionary *anchorContent;
@property (retain, nonatomic) NSString *poiDeviceSamecity;
@property (copy, nonatomic) NSString *lifeAnchorType;
@property (copy, nonatomic) id /* block */ track;

+ (Class)aAWEMainModuleServiceDOUYINHTSAdaperClass;
+ (id)fetchPreviousPoiID;
+ (id)fetchPreviousPoiBackendType;
+ (id)fetchCurrentPoiEnterID;

- (id)aAWEMainModuleServiceDOUYINHTSAdaper;
- (id)enterPOIDetailParams;
- (void)didFetchPOIDetailResponse:(id)a0;
- (void)leavePOIDetailPage;
- (id)initWithPOIConstData:(id)a0;
- (void)setValidValue:(id)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)p_trackData;
- (void)p_trackData:(id)a0 enterFrom:(id)a1 groupID:(id)a2 backendType:(id)a3 samecity:(id)a4 enterID:(id)a5;
- (void).cxx_destruct;

@end
