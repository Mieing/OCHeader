@class NSString, NSArray, AWELiveShelfBottomBarData, AWELifeShelfMember, AWELifeShelfCardListController, AWELifeShelfUserLocation, NSDictionary, AWELifeShelfCardBanner, AWELiveShelfRefreshConfig, AWELiveShelfClientStyleConfig, NSNumber, AWELiveShelfTopBarModel;

@interface AWELifeShelfResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSNumber *liveRoomType;
@property (copy, nonatomic) NSArray *cardList;
@property (copy, nonatomic) NSString *aggWebUrl;
@property (copy, nonatomic) AWELifeShelfCardListController *controller;
@property (copy, nonatomic) NSNumber *degradeSwitch;
@property (copy, nonatomic) NSNumber *total;
@property (copy, nonatomic) NSNumber *serverTime;
@property (copy, nonatomic) NSString *aggCardId;
@property (retain, nonatomic) AWELifeShelfCardBanner *cardBanner;
@property (retain, nonatomic) AWELiveShelfBottomBarData *bottomBarData;
@property (nonatomic) BOOL hideConsultBtn;
@property (copy, nonatomic) NSString *recommendRequestId;
@property (retain, nonatomic) AWELifeShelfMember *member;
@property (retain, nonatomic) AWELifeShelfUserLocation *userLocation;
@property (copy, nonatomic) NSDictionary *extraLog;
@property (copy, nonatomic) NSDictionary *commonSession;
@property (copy, nonatomic) NSDictionary *perfLog;
@property (retain, nonatomic) AWELiveShelfRefreshConfig *refreshConfig;
@property (copy, nonatomic) NSString *serverExtraInfo;
@property (nonatomic) long long innerTime;
@property (nonatomic) long long offset;
@property (nonatomic) long long nextOffset;
@property (nonatomic) long long selectedTabId;
@property (copy, nonatomic) NSDictionary *lynxCommonData;
@property (retain, nonatomic) AWELiveShelfClientStyleConfig *clientStyleConfig;
@property (copy, nonatomic) NSDictionary *lynxTrackInfo;
@property (copy, nonatomic) NSDictionary *roomData4Lynx;
@property (copy, nonatomic) NSString *shelfId;
@property (copy, nonatomic) NSString *roomUniqueKey;
@property (copy, nonatomic) NSDictionary *lynxTopBarNativeData;
@property (copy, nonatomic) NSDictionary *lynxTopBarServerData;
@property (retain, nonatomic) AWELiveShelfTopBarModel *topBar;
@property (copy, nonatomic) NSDictionary *poiSessionData;
@property (copy, nonatomic) NSDictionary *originData;
@property (nonatomic) BOOL isCache;
@property (nonatomic) BOOL isPreProcessed;
@property (nonatomic) BOOL isPreRendered;
@property (nonatomic) long long reqTabId;
@property (nonatomic) long long reqOffset;
@property (copy, nonatomic) NSDictionary *feConfig;

+ (id)cardListJSONTransformer;
+ (id)topBarJSONTransformer;
+ (id)bottomBarDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isHasTakeout;
- (BOOL)isHasMPTakeout;
- (BOOL)updateOriginCardData:(id)a0 alsoCheckCloneFlag:(BOOL)a1;
- (void).cxx_destruct;

@end
