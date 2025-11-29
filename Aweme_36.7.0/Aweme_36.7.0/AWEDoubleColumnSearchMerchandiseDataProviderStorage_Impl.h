@class AWESearchGSInfoModel, AWEEcommerceDynamicTabResponseModel, AWERiskPreventModel, AWEGeneralSearchBackgroundModel, NSDictionary, AWEEcomSearchInsertCouponConfigModel, NSObject, AWEEcommerceSearchJumpToPageConfigModel, NSMutableArray, AWESearchGlobalDoodleConfigModel, AWEDoubleColumnSearchMerchandiseQueryModel, AWESearchGlobalCartModel, NSString, AWEEcommerceGuideSearchV2Model, AWESearchCorrectModel, NSArray, AWESearchGoodsFeedbackModel, AWEDoubleColumnSearchMerchandiseResponse, NSIndexPath;
@protocol AWEEcomSearchDataStoreProtocol;

@interface AWEDoubleColumnSearchMerchandiseDataProviderStorage_Impl : NSObject <AWEDoubleColumnSearchMerchandiseDataProviderStorage>

@property (nonatomic) BOOL containsMarketingBanner;
@property (weak, nonatomic) NSObject<AWEEcomSearchDataStoreProtocol> *searchDataStore;
@property (copy, nonatomic) NSArray *prefetchUrls;
@property (copy, nonatomic) NSDictionary *timeCost;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseResponse *model;
@property (copy, nonatomic) NSArray *rawSearchResults;
@property (copy, nonatomic) NSArray *searchResults;
@property (nonatomic) long long loadmorePreloadThreshold;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *searchBackgroundConfig;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *searchBackgroundConfigOverride;
@property (nonatomic) BOOL feedDisableScroll;
@property (nonatomic) long long queryCorrectType;
@property (retain, nonatomic) AWEEcomSearchInsertCouponConfigModel *insertCouponConfig;
@property (retain, nonatomic) AWESearchGoodsFeedbackModel *feedbackModel;
@property (copy, nonatomic) NSString *pendantToast;
@property (retain, nonatomic) AWESearchGlobalCartModel *globalCart;
@property (retain, nonatomic) AWEEcommerceSearchJumpToPageConfigModel *jumpToPageConfigModel;
@property (copy, nonatomic) NSDictionary *addressDictionary;
@property (copy, nonatomic) NSString *addressSource;
@property (retain, nonatomic) AWEEcommerceDynamicTabResponseModel *dynamicTabResponseModel;
@property (copy, nonatomic) NSArray *patchSearchResults;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *entranceInfoJSONString;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2Model *guideSearchV2Model;
@property (copy, nonatomic) NSString *gid;
@property (copy, nonatomic) NSString *searchForceInsertInfo;
@property (copy, nonatomic) NSString *currentPage;
@property (nonatomic) long long floatPendant;
@property (copy, nonatomic) NSDictionary *searchRequestLogQueries;
@property (retain, nonatomic) NSMutableArray *reportDocInfo;
@property (copy, nonatomic) NSString *currentLogId;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (copy, nonatomic) NSString *ecomSearchAllPassThrough;
@property (retain, nonatomic) NSArray *pushTimeFeedOutLynxModel;
@property (nonatomic) BOOL isNewGuideSearchWordList;
@property (retain, nonatomic) AWESearchGSInfoModel *gsInfo;
@property (nonatomic) unsigned long long visitedCellCount;
@property (retain, nonatomic) NSIndexPath *sortIndexPath;
@property (nonatomic) double filterHeight;
@property (nonatomic) double addressHeight;
@property (nonatomic) BOOL stickyToSamePosition;
@property (nonatomic) BOOL shouldPlayKiwiVideo;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseQueryModel *firstChunkQueryModel;
@property (nonatomic) double sidebarWidth;
@property (nonatomic) BOOL hasSidebar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
